#include <iostream>
using namespace std; 

int main() {
  int n,facto=1;
  
  cout <<"Enter Number to find it's Factorial" <<endl;
  cin>>n;
  
  for(int i=n; i>=1; i--) {
  	facto*=i;
  }	
  
  cout<<"Factorial of "<< n<< " is : " <<facto << endl;
  return 0;
}