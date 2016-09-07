#ifndef DATABASE_H
#define DATABASE_H
#include "player.h"


class Database
{
    public:

        Database();
        ~Database();
        Database(const Database& other);
        void operator =(const Database& other);
        void resize();
        void search(std::string name);
        void search_num(std::string num);
        void add(const Player& emp);
        void display_all();
        void remove(std::string name);
        void save(std::ostream& outs);
        void load(std::istream& ins);
        void sort_name();
        void sort_goals();
        void update(std::string name, int goals);
        void updatea (std::string name, int assists);
        void updatepm (std::string name, double pminutes);
        void updatetp(double num);
        void remove_dup();
        void displaying(std::string dec, std::string name, int num, std::string handdir, int goal, int assist, double tplayed, double pminutes);

    private:
        void make_bigger();
        int capacity;
        Player *data;
        int used;


};

#endif /* DATABASE_H */

