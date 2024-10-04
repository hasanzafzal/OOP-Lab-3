#include <iostream>
using namespace std;

struct room {
	int length;
	int width;
};
struct area {
	room r; 
	int area;
};

int main() {
	area a;
	cout << "Enter the length of the room: ";
	cin >> a.r.length;
	cout << "Enter the width of the room: ";
	cin >> a.r.width;
	a.area = a.r.length * a.r.width;
	cout << "The area of the room is: " << a.area << endl;
	return 0;
} 
