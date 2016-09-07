#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include "Database.h"
#include <cstdlib>
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
{
	int num_found = 0;
	for(int i=0; i<used;i++)
	{
		if(data[i].get_name() == name)
		{   cout << '\n' << endl;
			cout << "Player Found!" << endl;
			data[i].output(cout);
			cout << '\n' << endl;

			num_found+=1;
		}
	}
	if(num_found == 0)
	{
		cout << "No Player by that name" << endl;
	}
}
void Database::search_num(int num)
{
	int num_found = 0;
	for(int i=0; i<used;i++)
	{
		if(data[i].get_number() == num)
		{   cout << '\n' << endl;
			cout << "Payer Found!" << endl;
			data[i].output(cout);
			cout << '\n' << endl;
			num_found++;
		}
	}
	if(num_found == 0)
	{   cout << '\n' << endl;
		cout << "No Player with that jersey number!" << endl;
		cout << '\n' << endl;
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
			cout << '\n' << endl;
			cout << "The Player has been removed" << endl;
			cout << '\n' << endl;
			used--;

		}
	}
	cout << '\n' << endl;
	cout << "No Player by that name." << endl;
	cout << '\n' << endl;
}


void Database::save(std::ostream& outs)
{
	sort_name();
	for(int i=0; i<used; i++)
	{
		outs << data[i];
	}
}
void Database::load(std::istream& ins, std::istream &file)
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

 void Database::update(std::string name)
{
    for (int i = 0; i < used; i++)
    {
        if(data[i].get_name() == name)

  	{   cout << '\n' << endl;
  	    cout << "Player found!" << endl;
  	    cout << '\n' << endl;

        data[i].updategoal();
	}
}
cout << "No Player by that name." << endl;

}

void Database::updatea (std::string name)
{

    for (int i = 0; i < used; i++)
    {
         if (data[i].get_name() == name)
         {  cout << "Player found!" << endl;

             data[i].updateassist();
         }
    }
    cout << '\n' << endl;
    cout << "No Player by that name"  << endl;
    cout << '\n' << endl;
}

void Database::updatepm (std::string name)
{
    for (int i = 0; i < used; i++)
    {


        if (data[i].get_name() == name)

    {   cout << '\n' << endl;
        cout << "Player found!" << endl;
        cout << '\n' << endl;
        data[i].updatepminutes();
    }
}
cout << "\n" << endl;
cout << "No player by that name." << endl;
cout << '\n' << endl;
}

void Database::updatetp ()
{
    for (int i = 0; i < used; i++)
    {
        string name;
        name = data[i].get_name();
        data[i].uptimeplayed(name);
        cout << '\n Players game played has been updated.\n' << endl;
    }
}
