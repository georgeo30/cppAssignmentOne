#ifndef start
#define start

#include <iostream>
#include <string>
#include <vector>

//using namespace std;
namespace THNGEO002{
    //class myclass{
       // public:
       struct StudentRecord{
                std::string fname, sname, sNumber,classRecord;
            };
       std::vector<StudentRecord> vectorArray;
            void cScreen();
            void addStudent();
            void readData();
            void saveData();
            void displayStudent();
            void gradeStudent();
            

            
    //};
}
#endif