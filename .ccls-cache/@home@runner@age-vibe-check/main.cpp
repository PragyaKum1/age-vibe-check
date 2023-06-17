#include <iostream>
using namespace std;
int main() {
  int myage;
  int age[10];
 
  
   
  for(int i = 0; i <9; i++){
    cout << "Enter your age: \n";
    cin>>myage;
    age[i] =myage;

      if((40<=age[i]) && age[i]<=60)
      cout<<"You are allowed"<<endl;

    else
      cout<<"You are not allowed \n";
    
  }

  
  

  
}