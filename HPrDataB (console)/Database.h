#ifndef DATABASE_H
#define DATABASE_H
#include "Player.h"


class Database
{
	public:
		Database();
		~Database();
		Database(const Database& other);
		void operator =(const Database& other);
		void resize();
		void search(std::string name);
		void search_num(int num);
		void add(const Player& emp);
		void display_all();
		void remove(std::string name);
		void save(std::ostream& outs);
		void load(std::istream& ins, std::istream &file);
		void sort_name();
		void sort_goals();
		void update(std::string name);
		void updatea (std::string name);
		void updatepm (std::string name);
		void updatetp();
	private:
		void make_bigger();
		int capacity;
		Player *data;
		int used;

};

#endif /* DATABASE_H */
