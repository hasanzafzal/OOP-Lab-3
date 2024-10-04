#include <iostream>
#include <string>
using namespace std;

class BinaryToOctal {
    string binaryNumber;
    int decimalNumber;
    string octalNumber;

public:
    BinaryToOctal(string binary) : binaryNumber(binary) {
        decimalNumber = convertBinaryToDecimal(binaryNumber);
        octalNumber = convertDecimalToOctal(decimalNumber);
    }

    int convertBinaryToDecimal(string binary) {
        int decimal = 0;
        int power = 0;
        for (int i = binary.length() - 1; i >= 0; i--) {
            if (binary[i] == '1') {
                decimal += pow(2, power);
            }
            power++;
        }
        return decimal;
    }

    string convertDecimalToOctal(int decimal) {
        string octal = "";
        while (decimal > 0) {
            int remainder = decimal % 8;
            octal = to_string(remainder) + octal;
            decimal /= 8;
        }
        return octal;
    }

    void displayOctal() {
        cout << "The octal representation of " << binaryNumber << " is " << octalNumber << endl;
    }
};

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    BinaryToOctal converter(binary);
    converter.displayOctal();

    return 0;
}