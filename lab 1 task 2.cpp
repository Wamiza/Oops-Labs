#include <iostream>
using namespace std;

int main() {
	int marks[4];
	int avg,totalMarks=0;
	
	for(int i=0; i<4; i++) {
	cout<< "Enter MArks of PF, OOP, DLD & ICT respectively" << endl;
	cin>>marks[i];;
    }
    
    for(int i=0; i<4; i++) {
    totalMarks+=marks[i];
	}
	avg= totalMarks/4;
	cout<<"Total Marks :"<<totalMarks<<endl;
	cout<<"Average Marks :"<<avg<<endl;
	
	if(avg>=90) {
		cout<<"A Grade"<<endl;
	}
	else if(avg>=80&&avg<90) {
		cout<<"B Grade"<<endl;
	}
	else if(avg>=70&&avg<80) {
		cout<<"C Grade"<<endl;
	}
	else if(avg>=60&&avg<70) {
		cout<<"D Grade"<<endl;
	}
	else {
		cout<<"F Grade" << endl;
	}
	return 0;
}