#include <iostream>
using namespace std;

int main() {
    int UC; // Unit Consumed
    double bill = 00.0;

    cout << "Enter Unit Consumed: ";
    cin >> UC;

    if (UC <= 50) {
        bill = UC * 0.50;
    } 
	else if (UC <= 150) {
        bill = (50 * 0.50) + ((UC - 50) * 0.75);
    } 
	else if (UC <= 250) {
        bill = (50 * 0.50) + (100 * 0.75) + ((UC - 150) * 1.20);
    } 
	else {
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((UC - 250) * 1.50);
    }
    
    double surcharge = bill * 0.20;
    double totalBill = bill + surcharge;

    cout << "Base Bill: Rs. " << bill << endl;
    cout << "Surcharge (20%): Rs. " << surcharge << endl;
    cout << "Total Bill: Rs. " << totalBill << endl;

    return 0;
}
