#include "builder.h"
#include <iostream>
#include <string>
#include "database.h"
#include "dialog1.h"
#include <fstream>
#include "player.h"
#include "filedialog.h"
#include "errortryagain.h"



using namespace std;

Database database;
Player emp;
builder::builder()
{

}

void builder::options (string val, string bal, string pal, string dal, string hal, string gal, string mal, string kal) {

    if (bal == "yes") {

        ifstream fin(val.c_str());
        if(!fin.fail())
        {
                database.load(fin);
                fin.close();
        }
    else{
            filedialog fd;
            fd.setModal(true);
            fd.exec();
        ofstream new_file(val.c_str());
        new_file.close();
    }

    }
    else {
        if (kal == "yes") {
            emp.store_fn(val,bal,pal,dal,hal,gal,mal);

            database.add(emp);           

        }
        else {
            if (pal == "yes") {
                ofstream fout(val.c_str());
                if(!fout.fail())
                {   database.remove_dup();
                    database.save(fout);

                    fout.close();

                }
                else{
                    ErrorTryAgain eta;
                    eta.setModal(true);
                    eta.exec();
                }

            }
            else {
                if (dal == "yes") {
                    database.remove(val);
                }
                else {
                    if (hal == "yes") {
                        int goals =  atoi(bal.c_str());
                        database.update(val,goals);

                    }
                    else {
                        if (gal == "yes")
                        {   int assists = atoi(bal.c_str());
                            database.updatea(val, assists);


                        }
                        else {
                            if (mal == "yes") {
                                double pminutes = atof(bal.c_str());
                                database.updatepm(val, pminutes);
                            }
                            else {
                                if (val == "yes") {
                                    database.displaying("yes", "a", 1,"d",2,3,2.0,3.4);
                                }
                                else {
                                    if (bal == "hello") {
                                        double numb = atof(val.c_str());
                                        database.updatetp(numb);
                                    }
                                    else {
                                        if (val=="true") {
                                            database.sort_goals();
                                            database.displaying("yes", "a", 1,"d",2,3,2.0,3.4);
                                        }
                                        else {
                                            if (val == "false") {
                                                database.sort_name();
                                                database.displaying("yes", "a", 1,"d",2,3,2.0,3.4);
                                            }
                                            else {
                                                if (dal == "true") {
                                                    database.search(val);
                                                }
                                                else {
                                                    if (gal == "true") {
                                                        database.search_num(val);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }




}

