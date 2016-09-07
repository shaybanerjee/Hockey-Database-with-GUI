#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include "database.h"
#include <cstdlib>
#include "displayscreen.h"
#include <QTextEdit>
#include "updated1.h"
#include "updated2.h"
#include "playerfound.h"
using namespace std;


Database::Database()
{
    used = 0;
    capacity = 5;
    data = new Player[capacity];

}
Database::Database(const Database& other)
{
    used = other.used;
    capacity = other.capacity;
    data = new Player[capacity];

    copy(other.data,other.data+used,data);
}
Database::~Database()
{
    delete[]data; //deletes pointer that has went out scope

}
void Database::operator =(const Database& other)
{
    if(&other == this)
        {
                return;
        }
        delete[]data;
        capacity = other.capacity;
        used = other.used;
        data = new Player[capacity];
        copy(other.data,other.data+used,data);
}
void Database::make_bigger()
{
    Player *tmp;
    tmp = new Player[capacity+5];
    copy(data, data+used,tmp);
    delete []data;
    data = tmp;
    capacity +=5;
}
void Database::search(std::string name)
{   QTextEdit *tex = new QTextEdit;
    QFont f1 = tex->font();
    QFontMetrics fm(f1);
    f1.setPointSize(20);
    tex->setFont (f1);
    int num_found = 0;
    for(int i=0; i<used;i++)
    {
        if(data[i].get_name() == name)
        {
            tex->setText("Player's Stats: ");
            data[i].sendingfn(tex);
            num_found+=1;
        }
    }

    if(num_found == 0)
    {
        Updated1 upd;
        upd.setModal(true);
        upd.exec();
    }
    else{
        PlayerFound pf;
        pf.setModal(true);
        pf.exec();
        tex->setReadOnly(true);
        tex->showFullScreen();
        tex->showNormal();
    }
}
void Database::search_num(std::string num)
{   int numb = atoi( num.c_str() );
    QTextEdit *tex = new QTextEdit;
    QFont f1 = tex->font();
    QFontMetrics fm(f1);
    f1.setPointSize(20);
    tex->setFont (f1);
    int num_found = 0;
    for(int i=0; i<used;i++)
    {
        if(data[i].get_number() == numb)
        {
            tex->setText("Player's Stats: ");
            data[i].sendingfn(tex);
            num_found++;
        }
    }

    if(num_found == 0)
    {   Updated1 upd;
        upd.setModal(true);
        upd.exec();
    }
    else {
        PlayerFound pf;
        pf.setModal(true);
        pf.exec();
        tex->setReadOnly(true);
        tex->showFullScreen();
        tex->showNormal();
    }
}
void Database::add(const Player& emp)
{
    if(used >= capacity)
    {
        make_bigger();
    }
    data[used] = emp;
    used++;
}
void Database::display_all()
{
    for(int i = 0; i < used; i++)
    {  data[i].output(cout);
        cout << '\n' << endl;
    }
}
void Database::remove(std::string name)
{
    for(int i=0; i < used; i++)
    {
        if(data[i].get_name() == name)
        {
            data[i] = data[used-1];
            used--;

        }
    }

}


void Database::save(std::ostream& outs)
{
    sort_name();
    for(int i=0; i<used; i++)
    {
        outs << data[i];
    }
}
void Database::load(std::istream& ins)
{

    Player tmp;
    while(ins >> tmp)
    {

        if(used >= capacity)
        {
            make_bigger();
        }

        data[used] = tmp;
        used++;
    }


}
void Database::sort_name()
{
    bool done = false;
    Player tmp;
    while(!done)
    {
        done = true;
        for(int i=0;i<used-1;i++)
        {
            if(data[i].get_name() > data[i+1].get_name())
            {
                done = false;
                tmp = data[i];
                data[i] = data[i+1];
                data[i+1] = tmp;
            }
        }
    }
}
void Database::sort_goals()
{
    bool done = false;
    Player tmp;
    while(!done)
    {
        done = true;
        for(int i=0;i<used-1;i++)
        {
            if(data[i].get_goals_scored() < data[i+1].get_goals_scored())
            {
                done = false;
                tmp = data[i];
                data[i] = data[i+1];
                data[i+1] = tmp;
            }
        }
    }
}

 void Database::update(std::string name, int goals)
{   int val =0;
    for (int i = 0; i < used; i++)
    {
        if(data[i].get_name() == name)

    {   val +=1;
        data[i].updategoal(goals);
        updated2 updt;
        updt.setModal(true);
        updt.exec();

    }
}   if (val == 0) {
    Updated1 upd;
    upd.setModal(true);
    upd.exec();
    }

}

void Database::updatea (std::string name, int assists)
{
    int val = 0;
    for (int i = 0; i < used; i++)
    {
         if (data[i].get_name() == name)
         {   val += 1;

             data[i].updateassist(assists);
             updated2 updt;
             updt.setModal(true);
             updt.exec();
         }
    }
    if (val == 0) {
    Updated1 upd;
    upd.setModal(true);
    upd.exec();
    }
}

void Database::updatepm (std::string name, double pminutes)
{   int val = 0;
    for (int i = 0; i < used; i++)
    {


        if (data[i].get_name() == name)

    {   val += 1;
        data[i].updatepminutes(pminutes);
        updated2 updt;
        updt.setModal(true);
        updt.exec();
    }
}   if (val == 0) {
    Updated1 upd;
    upd.setModal(true);
    upd.exec();
    }
}

void Database::updatetp (double num)
{
    for (int i = 0; i < used; i++)
    {

        data[i].uptimeplayed(num);

    }



}

void Database::remove_dup() {
    for (int i = 0; i < used; i++) {
        int val = 0;
        for (int v = 0; v < used; v++) {
           if (data[i].get_name() == data[v].get_name()) {
                val++;
              }
        }
        if (val == 2) {
            data[i] = data[used-1];
            used--;
        }
    }
}

void Database::displaying(std::string dec, std::string name, int num, std::string handdir, int goal, int assist, double tplayed, double pminutes){
    QTextEdit *tex = new QTextEdit;
    QFont f1 = tex->font();
    QFontMetrics fm(f1);
    f1.setPointSize(20);
    tex->setFont (f1);
    tex->setText("All the Player's in the database:");


    for(int i = 0; i < used; i++)
    {
        data[i].sendingfn(tex);

    }

    tex->setReadOnly(true);
    tex->showFullScreen();
    tex->showNormal();


}


