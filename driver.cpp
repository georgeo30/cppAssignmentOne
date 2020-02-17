// cin with strings
#include <iostream>
#include <string>
#include "database_h.h"
#include <sstream> 
#include <fstream>


using namespace std;



int main ()
{
  string mystr;
  
  while (mystr!="q"){
      cout<<"___________________________________"<<endl;
      
    cout << "* Welcome to the student database *\n----------------------------------- \n0: Add Student                    |\n1: Read database                  |\n2: Save database                  |\n3: Display student data           |\n4: Grade student                  |\nq: Exit the program               |"<<endl;
    
      cout<<"___________________________________"<<endl;
      cout<<"Select one: ";
    getline (cin, mystr);

    if(mystr=="0")
    {
            THNGEO002::addStudent();
    }
    else if(mystr=="1"){
        THNGEO002::readData();
    }
    else if(mystr=="2"){
        THNGEO002::saveData();
    }
    else if(mystr=="3"){
        THNGEO002::displayStudent();
    }
    
    else if(mystr=="4"){
        THNGEO002::gradeStudent();
    }
    else
    {
        cout<<"You have entered an invalid input: please try again or quit (q)."<<endl;
    }
    
     
  }
  if(mystr=="q"){
    
      THNGEO002::cScreen();
  }
  return 0;
}



