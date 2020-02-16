#include <iostream>
#include <string>
#include <vector>

using namespace std;
void cScreen(){
        system("clear"); 

};
void addStudent();
void readData();
void saveData();
void displayStudent();
void gradeStudent();
struct StudentRecord{
    std::string fname, sname, sNumber,classRecord;
};

vector<StudentRecord> vectorArray;
