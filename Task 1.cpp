#include <iostream>
using namespace std;

class Cube {
public:
    double side;
    Cube(double s) : side(s) { 
        cout << "The Cube's sides length are " << side << endl;
    }
    double volume() {
        return side * side * side; 
    }
    ~Cube() {
        cout << "Cube object destroyed" << endl;
    }
};

int main() {
    double s;
    cout << "Enter the length of the sides of the cube: ";
    cin >> s;
    Cube c(s); 
    cout << "Volume of the cube: " << c.volume() << endl;
    return 0;
}