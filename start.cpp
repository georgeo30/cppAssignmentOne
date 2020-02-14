// cin with strings
#include <iostream>
#include <string>
#include "start.h"
using namespace std;

int main ()
{
  string mystr;
  
  while (mystr!="q"){
    cout << "Welcome to the student database \n0: Add Student\n1: Read database\n2: Save database\n3: Display student data\n4: Grade student\nq: Exit the program"<<endl;
    getline (cin, mystr);

    if(mystr=="0")
    {
            addStudent();
    }
    else if(mystr=="1"){
        readData();
    }
    else if(mystr=="2"){
        saveData();
    }
    else if(mystr=="3"){
        displayStudent();
    }
    
    else if(mystr=="4"){
        gradeStudent();
    }
     
  }
  if(mystr=="q"){
    
      cScreen();
  }
  return 0;
}

void addStudent(){
                cout << "Add student data "<<endl ;

}
void readData(){
                cout << "read data "<<endl ;

}
void saveData(){
                cout << "save data "<<endl ;

}
void displayStudent(){
                cout << "display student data "<<endl ;

}
void gradeStudent(){
                cout << "grade data " <<endl;

}