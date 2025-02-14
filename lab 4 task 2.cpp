#include <iostream>
using namespace std;

class WeekDays {
private:
    string days[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    int CurrentDay;

public:
    WeekDays() {
        CurrentDay = 0; 
    }

    WeekDays(int day) {
        CurrentDay = day % 7;  
    }

    string getCurrentDay() {
        return days[CurrentDay];
    }

    string getNextDay() {
        return days[(CurrentDay + 1) % 7]; 
    }

    string getPreviousDay() {
        return days[(CurrentDay - 1 + 7) % 7];  
    }
  
    string getNthDayFromToday(int N) {
        return days[(CurrentDay + N) % 7]; 
    }
};

int main() {
  
    WeekDays week1;
    cout << "Current Day: " << week1.getCurrentDay() << endl;
    cout << "Next Day: " << week1.getNextDay() << endl;
    cout << "Previous Day: " << week1.getPreviousDay() << endl;
    cout << "5th Day from Today: " << week1.getNthDayFromToday(5) << endl;
   
    WeekDays week2(1); 
    cout << "\nCurrent Day: " << week2.getCurrentDay() << endl;
    cout << "Next Day: " << week2.getNextDay() << endl;
    cout << "Previous Day: " << week2.getPreviousDay() << endl;
    cout << "20th Day from Today: " << week2.getNthDayFromToday(20) << endl;

    return 0;
}
