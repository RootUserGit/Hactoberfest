//Simple C++ program to calculate (+,-,*,/,%) with two operands

#include<bits/stdc++.h>     
using namespace std;

int main()
{
  int a,b,ch;
  cout<<"\nEnter any two numbers: ";
  cin>>a>>b;
  cout<<"\nEnter your choice: (+,-,*,/,%)";
  cin>>ch;
  switch(ch)
  {
    case 1: 
        cout<< a+b;
        break;
    case 2:
        cout<< a-b;
        break;
     case 3: 
        cout<< a*b;
        break;
    case 4:
        cout<< a/b;
        break;
     case 5: 
        cout<< a%b;
        break;
    default:
        cout<<"Invalid Input!!";
    
  }
  return 0;
}

//Code contributed by RootUserGit
