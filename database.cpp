#include <iostream>
#include <string>
#include "database_h.h"
#include <vector>
#include <sstream> 
#include <fstream>

namespace THNGEO002{
    using namespace std;
    
std::vector<StudentRecord> vectorArray;
void cScreen(){
    system("clear"); 

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
    bool inDb=false;
    for(auto &student : vectorArray){
        if(student.sNumber==newStudent.sNumber){
            inDb=true;
        }
        else{}
    }
    if(inDb==false){
        cout << "Enter class record: ";
        getline (cin,newStudent.classRecord);
        vectorArray.push_back(newStudent);
        cout<<"***************************************"<<endl;
        cout << "* Successfully added student "<<newStudent.sNumber<<"*"<<endl ;
        cout<<"***************************************"<<endl;
    }
    else{
        cout<<"The student you are trying to add is already in the database.\nExited without saving!"<<endl;
        
    }


}
void readData(){
    cout << "Reading Database data... "<<endl ;
    std::ifstream file("database.txt");
    if (file.is_open()) {
    std::string line;
    while (getline(file, line)) {
        // using printf() in all tests for consistency
        // cout<<line.c_str()<<endl;
        string word = ""; 
        string l=line.c_str();
        struct StudentRecord newStudent;
        vector<string> tempVector;
        string arr[4];
        int tr=0;
        for (auto x : l) 
        { 
            if (x == ';') 
            { 
                //cout << word << endl; 
                tempVector.push_back(word);
                word = ""; 
                
                
            } 
            else
            { 
                word = word + x; 
            } 
        }  
        //cout << word << endl; 
        newStudent.fname=tempVector.at(0);
        newStudent.sname=tempVector.at(1);
        newStudent.sNumber=tempVector.at(2);
        newStudent.classRecord=tempVector.at(3);
        vectorArray.push_back(newStudent);

        
        
        
       
    }
    file.close();
         cout<<"*******************************"<<endl;

    cout << "* Database successfully read *"<<endl ;
             cout<<"*******************************"<<endl;

}

}
void saveData(){
    cout << "Saving data... "<<endl ;
    
    ofstream newFile("database.txt");

    if(newFile.is_open())   
    {
        for (auto &student : vectorArray) // & copies by reference
    {  
        newFile << student.fname<<";"<<student.sname<<";"<<student.sNumber<<";"<<student.classRecord<<";"<<endl;

    }            
    }
    else 
    {
        cout<<"Error saving to file, Please try again."<<endl;
    }
     newFile.close();
     cout<<"*************************************"<<endl;
    cout << "* Database successfully written to. *"<<endl ;
         cout<<"*************************************"<<endl;


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
                     cout<<"*****************************************************"<<endl;

            cout <<"* Found: "<<student.sNumber<<" "<< student.fname<<" "<<student.sname<<" "<<student.classRecord<<" *"<<endl ;
                     cout<<"*****************************************************"<<endl;

            found=true;
        }

    }
    if(found==false){
        cout << "Could not find "<<searchNo<<" in the database"<<endl ;
    }
    

}
void gradeStudent(){
    cout << "Student grading " <<endl;
    string searchGrade;
    string searchNo;
    bool found=false;
    cout << "--------------------"<<endl ;

    cout << "Enter Student number to be graded: ";
    getline (cin,searchNo);
    for (auto &student : vectorArray) // & copies by reference
    {  
        if(student.sNumber==searchNo){
            searchGrade=student.classRecord;
            string word = ""; 
    int avg=0;
    int count=0;
    for (auto x : searchGrade) 
    { 
       if (x == ' ') 
       { 
            stringstream geek(word);
            int x=0;
            geek>>x;
            avg=avg+x;
           word = ""; 
           count++;
       } 
       else
       { 
           word = word + x; 
       } 
   }  
    stringstream geek(word);
    int x=0;
    geek>>x;
    avg=avg+x;
    cout<<"*************************************"<<endl;
    cout <<"* The average for "<<searchNo<<" is: "<< (float)avg/(float)(count+1)<<" *"<< endl;
        cout<<"*************************************"<<endl;

            found=true;

        }

    }
    if(found==false){
        cout << "Could not find "<<searchNo<<" in the database"<<endl ;
    }
    

}
}