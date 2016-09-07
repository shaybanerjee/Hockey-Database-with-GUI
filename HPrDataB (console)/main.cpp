#include <iostream>
#include <fstream>
#include <string>
#include "Player.h"
#include "Database.h"
#include <cstdlib>


using namespace std;

int menu();
int main()
{
	Database database;
	Player emp;
	string filename;
	cout << "Enter name of file (Please include .txt): ";
	cin >> filename;

	ifstream fin(filename.c_str());

	if(!fin.fail())
	{
		database.load(fin, fin);
		fin.close();
		int choice;
		while(choice!=12)
		{
			choice = menu();
			switch (choice)
			{
				case 1:
                {
					cin >> emp;
					database.add(emp);
					break;
				}
				case 2:
                {

					string name;
					cout << "Enter name of Player to find: ";
					if(cin.peek() == '\n')cin.ignore();
					getline(cin,name);
					database.search(name);
					break;
				}
				case 3:{

					int id;
					cout << "Enter Player jersey number: ";
					cin >> id;
					database.search_num(id);
					break;
				}
				case 4:{

					cout << "All the Players on the team! \n" <<  endl;
					database.display_all();
					break;
				}
				case 5:
				    {

					string name;
					cout << "Enter Player that is no longer on the roster: ";
					if(cin.peek() == '\n')cin.ignore();
					getline(cin,name);
					database.remove(name);
					break;
                    }
				case 6:
				    {

                        database.sort_goals();
                        cout << "\n" << endl;
                        cout << "Players sorted by Goals Scored!" << endl;
                        cout << '\n' << endl;
                        database.display_all();
                        break;
                    }
				case 7:
				    {

                        database.sort_name();
                        cout << "\n" << endl;
                        cout << "Players sorted by first name!" << endl;
                        cout << '\n' << endl;
                        database.display_all();
                        break;
                    }
				case 8:
                    {
                        string name;
                        cout << "Enter Player's name: " << endl;
                        if(cin.peek() == '\n')cin.ignore();
                        getline(cin,name);
                        database.update(name);
                        break;
                    }
                case 9:
                    {
                        string name;
                        cout << "Enter Player's name: " << endl;
                        if (cin.peek() == '\n')cin.ignore();
                        getline(cin,name);
                        database.updatea(name);
                    }
                case 10:
                    {
                        string name;
                        cout << "Enter Player's name: " << endl;
                        if (cin.peek() == '\n')cin.ignore();
                        getline(cin, name);
                        database.updatepm(name);
                    }
                case 11:
                    {
                        database.updatetp();
                    }
				case 12:
				    {
				        break;
                    }
				default:
                {

					cout << "Your input is invalid." << endl;
					break;
				}
			}
		}
		ofstream fout(filename.c_str());
		if(!fout.fail())
		{
			database.save(fout);
		}
		else{
			cout << "File could not open!" << endl;
		}
		fout.close();
		cout << "Thank you for using Shayon Banerjee's database!" << endl;
	}
	else{
		cout << "File does not exist... A new file has been created." << endl;
		ofstream new_file(filename.c_str());
		new_file.close();
		main();
	}

}

int menu()
{
	cout << "1.  Add Player." << endl;
	cout << "2.  Search for Player by name." << endl;
	cout << "3.  Search for Player by jersey number." << endl;
	cout << "4.  Display all current Players." << endl;
	cout << "5.  Remove Player from database." << endl;
	cout << "6.  Sort Players by goals scored. (Highest first)" << endl;
	cout << "7.  Sort Players by First Name." << endl;
	cout << "8.  Update a Player's Goals Scored. " << endl;
	cout << "9.  Update a Player's Assists." << endl;
	cout << "10. Update a Player's Penalty Minutes. " << endl;
	cout << "11. Update Nuumber of Games Played. " << endl;
	cout << "12. Quit" << endl;
    int choice;
	cin >> choice;
	return choice;
}
