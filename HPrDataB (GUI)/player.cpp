#include <iostream>
#include "player.h"
#include <string>
#include <fstream>
#include "database.h"
#include "displayscreen.h"
#include <QTextEdit>
using namespace std;


Player::Player()
{
    number = 0;
    goals_scored = 0;
    assists = 0;
        time_played = 0.0;
        pminutes = 0.0;

}
Player::Player(std::string new_name, int new_number, std::string new_handdir, int new_goals_scored, int new_assists, double new_time_played, double new_pminutes)
{
    name = new_name;
    number = new_number;
    handdir = new_handdir;
    goals_scored = new_goals_scored;
    assists = new_assists;
    time_played = new_time_played;
    pminutes = new_pminutes;

}
void Player::output(ostream& outs)
{
        outs << name << endl;
        outs << number << endl;
        outs << handdir << endl;
        outs << goals_scored << endl;
        outs << assists << endl;
        outs << time_played << endl;
        outs << pminutes << endl;

    }

void Player::input(istream& ins)
{

                if(ins.peek() == '\n')ins.ignore();
                getline(ins,name);
                if(ins.peek() == '\n')ins.ignore();
                ins >> number;
                if(ins.peek() == '\n')ins.ignore();
                ins >> handdir;
                ins >> goals_scored;
                ins >> assists;
                ins >> time_played;
                ins >> pminutes;


        }


ostream& operator <<(ostream& outs, Player& tmp)
{
    tmp.output(outs);
    return outs;
}
istream& operator >>(istream& ins, Player& tmp)
{
    tmp.input(ins);
    return ins;
}


 void Player::updategoal(int goals)
{



    goals_scored = goals_scored + goals;



}

void Player::updateassist(int assist)
{

    assists = assists + assist;

}

void Player::updatepminutes(double penaltym)
{

     pminutes = pminutes + penaltym;



}

void Player::uptimeplayed(double numb)
{
    time_played += numb;
}

void Player::store_fn(string one, string two, string three, string four, string five, string six, string seven){

    int jnum = atoi(two.c_str());
    int goalss = atoi(four.c_str());
    int assist = atoi(five.c_str());
    double tplay = atof(six.c_str());
    double ptime = atof(seven.c_str());
    name = one;
    number = jnum;
    handdir = three;
    goals_scored = goalss;
    assists = assist;
    time_played = tplay;
    pminutes = ptime;


}

void Player::sendingfn(QTextEdit *tex) {



        QString qname = QString::fromStdString(name);
        QString qnumb = QString::number(number);
        QString qhanddir = QString::fromStdString(handdir);
        QString qgoals = QString::number(goals_scored);
        QString qassists = QString::number(assists);
        QString t_played = QString::number(time_played);
        QString qpminutes = QString::number(pminutes);
        tex->append(" ");
        tex->append("Name: " + qname);
        tex->append("Number: " + qnumb);
        tex->append("Hand Orientation: " + qhanddir);
        tex->append("Goals Scored: " + qgoals);
        tex->append("Assists: " + qassists);
        tex->append("Games Played: " + t_played);
        tex->append("Penalty Minutes: " + qpminutes);








    }

