#include <iostream>
using namespace std;

 int main() {
 	int n;
 	int even=0;
 	int odd=0;
 	
 	cout << "Enter the quantity of numbers in an array" << endl;
 	cin>>n;
 	
 	int arr[n];
 	
 	cout << "Enter the Elements of an array" << endl;
 	for(int i=0; i<n; i++) {
 		cin>>arr[i];
	 }
	 
	for(int i=0; i<n; i++) {
 		if(arr[i]%2==0) {
 			even++;
		 }
		 else {
		 	odd++;
		 }
	 }
	 
	 cout << "Total ODD Numbers in an array :" << odd<< endl;
	 cout << "Total EVEN Numbers in an array :" << even << endl;
	 
	 return 0;
}
	 