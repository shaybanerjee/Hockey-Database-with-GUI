#include <iostream>
#include "Player.h"
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
	if(outs == cout)
	{
	    outs << "Name: " << name << endl;
		outs << "Players number: " << number << endl;
		outs << "Players Dominant hand: " << handdir << endl;
		outs << "Goals Scored by Player: " << goals_scored << endl;
		outs << "Assists by Player: " << assists << endl;
        outs << "Total Number of Games Played: " << time_played << endl;
        outs << "Total Penalty Minutes: " << pminutes << endl;

    }
	else{
		outs << name << endl;
		outs << number << endl;
		outs << handdir << endl;
		outs << goals_scored << endl;
		outs << assists << endl;
        outs << time_played << endl;
        outs << pminutes << endl;

	}
}
void Player::input(istream& ins)
{
		if (ins == cin)
        {
                if(ins.peek() == '\n')ins.ignore();
                cout << "Enter Player's Name: ";
                getline(ins,name);
                cout << "Enter Player's Jersey Number: ";
                ins >> number;
                cout << "Enter Player's Dominant Hand: ";
                ins >> handdir;
                cout << "Enter Total Goals Scored: ";
                ins >> goals_scored;
                cout << "Enter Number of Assists: ";
                ins >> assists;
                cout << "Enter Number of Games Played: ";
                ins >> time_played;
                cout << "Enter Total Penalty Minutes: ";
                ins >> pminutes;


        }
        else{
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


 void Player::updategoal()
{


        int goals = 0;
        cout << "Enter updated goals scored: " << endl;
        cin >> goals;
        goals_scored = goals_scored + goals;



}

void Player::updateassist()
{
    int assist = 0;
    cout << "Enter updated assist: " << endl;
    cin >> assist;
    assists = assists + assist;

}

void Player::updatepminutes()
{
     int penaltym = 0;
     cout << "Emter updated total penalty minutes: " << endl;
     cin >> penaltym;
     pminutes = pminutes + penaltym;



}

void Player::uptimeplayed(std::string name)
{
    int update = 0;
    cout << "Enter number of games played by " << name << ": " << endl;
    cin >> update;
    time_played = time_played + update;
}
