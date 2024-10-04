#include <iostream>
using namespace std;

class Date {
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void displayDate() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
	~Date() {}
};

int main() {
    int day, month, year;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
    Date date(day, month, year);
    date.displayDate();

    return 0;
}