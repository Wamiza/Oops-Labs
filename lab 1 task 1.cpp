#include <iostream>
using namespace std;

int main() {	
	int num,count=0;
	
	cout<< "Enter Number" << endl;
	cin>> num;
	
	for(int i=1; i<=num; i++) {
	if(num%i==0) {
		count++;	
	}
  }
  
  if(count==2) {
  	cout<< "It's a Prime Number"<<endl;
  }
  else {
  	cout<< "It's not a Prime Number"<<endl;
  }
	
	return 0;
}
