#include <iostream>
using namespace std;

 int main() {
 	int starting, ending,count=0;
 	
 	cout << "Start Range :"<<endl;
 	cin>> starting;
 	cout << "End Range :"<<endl;
 	cin>> ending;
 	
 	for (int i=starting; i<=ending; i++) {
 	cout<<i++;
 	count++;
 	if(count%5==0) {
 		cout<<i;
	 }
 }
 return 0;
}
