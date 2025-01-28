#include <iostream>
#include <math.h> //math library to perform math functions
using namespace std;

int main() {
    int operation; //declare variable
    char op;
    cout << "Enter operations to be performed "<<endl;
    cout << "1. Arithmetic Operations (Addition, Subtraction, Multiplication, Division)"<<endl; 
    cout << "2. Trigonometric Operations (Sine, Cosine, Tangent) "<<endl;
    cout << "3. Exponential and Logarithmic Operations (Power, Logarithm) "<<endl;
    cin >> operation;

    switch(operation) {
        double num1, num2; //declaring 2 variables to perform arithmetic operations
        case 0: 
            cout << " Exit";
            break;

        case 1: 
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "Enter an arithmetic operator";
            cin >> op;
            switch(op) {
                case 0: 
                    cout << " Exit";
                    break;

                case '+': 
                    cout << "The result is " << num1 + num2;
                    break;

                case '-': 
                    cout << "The result is " << num1 - num2;
                    break;

                case '*': 
                    cout << "The result is " << num1 * num2;
                    break;

                case '/': //performs division 
                    switch(num2 == 0) { //if user enters 0 as second number then there would be no result
                        case 1: 
                            cout << "Invalid input\n";
                            break;

                        default: 
                            cout << "The result is " << num1 / num2 << endl;
                            break;
                    }
                    break;
            }
            break; //ends arithmetic operations
        
        case 2: 
            double trig, anD, anR;
            int function; //declaring a variable based on which operation is to be performed
            cout << "Enter the angle in degrees to perform trigonometric operation";
            cin >> anD;
            cout << "Enter trigonometric operation: "<<endl;
            cout<<"4. perform sine function"<<endl;
            cout<<"5. perform cosine function"<<endl;
            cout<<"6. perform tangent function"<<endl;
            cin >> function;

            switch(function) {
                case 0: 
                    cout << "Exit";
                    break;

                case 4: 
                    cout << "The result is " << sin(anD);
                    break;

                case 5: 
                    switch(anD == 90 || anD == 270 || anD == -90 || anD == -270) {
                        //if user enters these values then there would be no output
                        case 1: 
                            cout << "Cosine value is 0";
                            break;

                        default: 
                            cout << "The result is " << cos(anD);
                            break;
                    }
                    break;

                case 6: 
                    switch(anD == 90 || anD == 270 || anD == -90 || anD == -270) {
                        //if user enters these values then there would be no output
                        case 1:
                            cout << "Tangent value is 0";
                            break;

                        default: 
                            cout << "The result is " << tan(anD);
                    } 
                    break;
            }
            break;

        case 3: //perform power and log
            double base, exponent;
            int choice; //based on user choice
            cout << "Enter your choice"<<endl;
            cout << "1 for power calculation"<<endl;
            cout << "2 for logarithm calculation"<<endl;
            cin >> choice;

            switch(choice) {
                //perform power function
                case 0: 
                    cout << " Exit";
                    break;

                case 1:
                    cout << "Enter the base: ";
                     cin >> base; 
                    cout<<"Enter the exponent: ";
                   cin>> exponent;
                    cout << base << " raised to " << exponent << " is " << pow(base, exponent);
                    break;

                case 2: //perform log using math library
                    double LOG;
                    cout << "Enter value to calculate log";
                    cin >> LOG;
                    cout << "The logarithm is "<<endl << log(LOG);
                    break;
            }
            break;
    }    
    return 0;
}
