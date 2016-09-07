#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <istream>
#include <ostream>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <QTextEdit>
class Player
{
    public:
        Player();
        Player(std::string new_name, int new_number, std::string new_handdir, int new_goals_scored, int new_assists, double new_time_played, double new_pminutes);
        void updategoal(int goal);
        void updateassist(int assist);
        void updatepminutes(double pminutes);
        void uptimeplayed(double numb);
        void sendingfn(QTextEdit *tex);
        std::string get_name()const
                {
                    return name;
                }

        int get_number()const
                {
                    return number;
                }

        std::string get_handdir()const
                {
                    return handdir;
                }

        int get_goals_scored()const
                {
                    return goals_scored;
                }

        int get_assists()const
                {
                    return assists;
                }

                double get_time_played() const
                {
                    return time_played;
                }

                double get_pminutes () const
                {
                    return pminutes;
                }

        void output(std::ostream& outs);
        void input(std::istream& ins);
        void store_fn(std::string one,std::string two,std::string three,std::string four,std::string five, std::string six, std::string seven);
    private:
        std::string name;
        int number;
        std::string handdir;
        int goals_scored;
        int assists;
        double time_played;
        double pminutes;
};

std::ostream& operator <<(std::ostream& outs, Player& tmp);
std::istream& operator >>(std::istream& ins, Player& tmp);

#endif // PLAYER_H


