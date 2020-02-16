// cin with strings
#include <iostream>
#include <string>
#include "start.h"
#include <vector>

using namespace std;



int main ()
{
  string mystr;
  
  while (mystr!="q"){
    cout << "Welcome to the student database\n-------------------- \n0: Add Student\n1: Read database\n2: Save database\n3: Display student data\n4: Grade student\nq: Exit the program"<<endl;
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
    else
    {
        cout<<"You have entered an invalid input: please try again or quit (q)."<<endl;
    }
    
     
  }
  if(mystr=="q"){
    
      cScreen();
  }
  return 0;
}

void addStudent(){
    cout << "Add student data "<<endl ;
    cout << "-----------------"<<endl ;
    struct StudentRecord newStudent;
    cout << "Enter first name: ";
    getline (cin,newStudent.fname);

    cout << "Enter Surname: ";
    getline (cin,newStudent.sname);
    cout << "Enter Student Number: ";
    getline (cin,newStudent.sNumber);
    cout << "Enter class record: ";
    getline (cin,newStudent.classRecord);
    vectorArray.push_back(newStudent);
    for (auto &student : vectorArray) // & copies by reference
    {  
        cout << student.fname<<student.sname<<student.sNumber<<student.classRecord<<endl;

    }
                

}
void readData(){
    cout << "read data "<<endl ;
    for (auto &student : vectorArray) // & copies by reference
    {  
        cout << student.fname<<student.sname<<student.sNumber<<student.classRecord<<endl;

    }

}
void saveData(){
    cout << "save data "<<endl ;

}
void displayStudent(){
    string searchNo;
    bool found=false;
    cout << "Display student data"<<endl ;
    cout << "--------------------"<<endl ;

    cout << "Enter Student number to be searched: ";
    getline (cin,searchNo);
    for (auto &student : vectorArray) // & copies by reference
    {  
        if(student.sNumber==searchNo){
            cout <<"Found: "<<student.sNumber<<" "<< student.fname<<" "<<student.sname<<" "<<student.classRecord<<endl ;
            found=true;
        }

    }
    if(found==false){
        cout << "Could not find "<<searchNo<<" in the database"<<endl ;
    }
    

}
void gradeStudent(){
    cout << "grade data " <<endl;

}