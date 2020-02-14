// cin with strings
#include <iostream>
#include <string>
#include "start.h"
using namespace std;

int main ()
{
  string mystr;
  cout << "Welcome to the student database \n0: Add Student\n1: Read/Save data\n2: Display student data\n3: Grade student\nq: Exit the program"<<endl;
  getline (cin, mystr);
  while (mystr!="q"){

    if(mystr=="0")
    {
            cout << "Hello " << mystr << ".\n";

    }
     cout << "Welcome to the student database \n0: Add Student\n1: Read/Save data\n2: Display student data\n3: Grade student\nq: Exit the program"<<endl;
  getline (cin, mystr);
  }
  if(mystr=="q"){
    
      cScreen();
  }
  return 0;
}
