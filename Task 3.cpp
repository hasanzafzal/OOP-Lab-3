#include <iostream>
#include <string>
using namespace std;

class employee{
		string name;
		int id;
		double salary;
	public:
		employee(string n, int i, double s) {
			name = n;
			id = i;
			salary = s;
		}
		void displayinfo() {
			cout << "name: " << name << endl;
			cout << "id: " << id << endl;
			cout << "salary: " << salary << endl;
		}
		~employee() {}
};

int main() {
	string name;
	int id;
	double salary;
	cout << "Enter name: ";
	getline(cin, name);
	cout << "Enter id: ";
	cin >> id;
	cout << "Enter salary: ";
	cin >> salary;
	employee E(name,id,salary);
	E.displayinfo();

	return 0;
}