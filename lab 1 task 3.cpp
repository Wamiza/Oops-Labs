#include <iostream>
using namespace std;

 int main() {
 	int a,b;
 	char choice;
 	
 	cout<< "Enter 1st Number :" << endl;
 	cin >> a;
 	cout<< "Enter 2nd Number :" << endl;
 	cin >> b;
 	
 	cout<< "Enter choice + for addition, - for subtraction, / for division, * for multiplication" << endl;
 	cin >> choice;
 	
 	if(choice=='+') {
 		cout<< a+b << endl;
	 }
	 
 	else if(choice=='-') {
 		cout<< a-b << endl;
	 }
	else if(choice=='/') {
 		cout<< a/b << endl;
	 }
	else if (choice=='*') {
 		cout<< a*b << endl;
	 }
	 else {
	 	cout<< "Invalid Input";
	 }
	 return 0;
 }