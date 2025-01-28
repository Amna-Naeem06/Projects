#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Check if the string is a valid binary number
bool isBinary(string str) {
    for (char c : str) {
        if (c != '0' && c != '1') {
            return false;
        }
    }
    return true;
}

// Convert binary string to decimal
int binaryToDecimal(string binary) {
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

// Convert decimal to binary
string decimalToBinary(int decimal) {
    string binaryResult = "";
    if (decimal == 0) {
        return "0";
    }
    
    while (decimal > 0) {
        binaryResult = to_string(decimal % 2) + binaryResult;
        decimal /= 2;
    }
    return binaryResult;
}

// Convert decimal to octal
string decimalToOctal(int decimal) {
    string octalResult = "";
    
    if (decimal == 0) {
        return "0";
    }

    while (decimal > 0) {
        octalResult = to_string(decimal % 8) + octalResult;
        decimal /= 8;
    }
    
    return octalResult;
}

// Convert decimal to hexadecimal
string decimalToHexadecimal(int decimal) {
    if (decimal == 0) {
        return "0";
    }

    string hexResult = "";
    string hexChars = "0123456789ABCDEF";

    while (decimal > 0) {
        hexResult = hexChars[decimal % 16] + hexResult;
        decimal /= 16;
    }
    
    return hexResult;
}

// Perform AND operation on two binary numbers
string andOperation(string binary1, string binary2) {
    int decimal1 = binaryToDecimal(binary1);
    int decimal2 = binaryToDecimal(binary2);
    int result = decimal1 & decimal2;  // Perform AND operation
    
    return decimalToBinary(result);
}

// Perform OR operation on two binary numbers
string orOperation(string binary1, string binary2) {
    int decimal1 = binaryToDecimal(binary1);
    int decimal2 = binaryToDecimal(binary2);
    int result = decimal1 | decimal2;  // Perform OR operation
    
    return decimalToBinary(result);
}

// Perform NOT operation on a binary number
string notOperation(string binary) {
    int decimal = binaryToDecimal(binary);
    int maxBits = binary.length();  // The number of bits is the length of the binary string
    int mask = (1 << maxBits) - 1;  // Create a mask with all bits set to 1 for the given number of bits
    int result = ~decimal & mask;   // Perform NOT operation
    
    return decimalToBinary(result);
}

// Main function
int main() {
    string choice, binary1, binary2;
    
    while (true) {
        cout << "\n1. Binary to Decimal Conversion" << endl;
        cout << "2. Convert Binary to Octal" << endl;
        cout << "3. Convert Binary to Hexadecimal" << endl;
        cout << "4. AND Operation" << endl;
        cout << "5. OR Operation" << endl;
        cout << "6. NOT Operation" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        if (choice == "1") {
            cout << "Enter a binary number: ";
            cin >> binary1;
            if (!isBinary(binary1)) {
                cout << "Invalid binary number. Please enter a valid binary number." << endl;
            } else {
                cout << "Decimal equivalent: " << binaryToDecimal(binary1) << endl;
            }
        }
        else if (choice == "2") {
            cout << "Enter binary number: ";
            cin >> binary1;
            if (!isBinary(binary1)) {
                cout << "Invalid binary number. Please enter a valid binary number." << endl;
            } else {
                // Convert binary to decimal
                int decimal = binaryToDecimal(binary1);
                // Convert decimal to octal
                cout << "Octal equivalent: " << decimalToOctal(decimal) << endl;
            }
        }
        else if (choice == "3") {
            cout << "Enter binary number: ";
            cin >> binary1;
            if (!isBinary(binary1)) {
                cout << "Invalid binary number. Please enter a valid binary number." << endl;
            } else {
                // Convert binary to decimal
                int decimal = binaryToDecimal(binary1);
                // Convert decimal to hexadecimal
                cout << "Hexadecimal equivalent: " << decimalToHexadecimal(decimal) << endl;
            }
        }
        else if (choice == "4") {
            cout << "Enter first binary number: ";
            cin >> binary1;
            cout << "Enter second binary number: ";
            cin >> binary2;
            if (!isBinary(binary1) || !isBinary(binary2)) {
                cout << "Invalid binary number. Please enter valid binary numbers." << endl;
            } else {
                cout << "Result of AND operation: " << andOperation(binary1, binary2) << endl;
            }
        }
        else if (choice == "5") {
            cout << "Enter first binary number: ";
            cin >> binary1;
            cout << "Enter second binary number: ";
            cin >> binary2;
            if (!isBinary(binary1) || !isBinary(binary2)) {
                cout << "Invalid binary number. Please enter valid binary numbers." << endl;
            } else {
                cout << "Result of OR operation: " << orOperation(binary1, binary2) << endl;
            }
        }
        else if (choice == "6") {
            cout << "Enter binary number: ";
            cin >> binary1;
            if (!isBinary(binary1)) {
                cout << "Invalid binary number. Please enter a valid binary number." << endl;
            } else {
                cout << "Result of NOT operation: " << notOperation(binary1) << endl;
            }
        }
        else if (choice == "7") {
            break;
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
    
    return 0;
}