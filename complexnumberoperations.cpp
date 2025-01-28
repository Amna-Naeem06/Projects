#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double r1, r2, im1, im2; //declare all variables in double to implement implicit typecasting
    cout << "enter real part of 1st number ";
    cin >> r1;
    cout << "enter imaginary part of 1st number ";
    cin >> im1;
    cout << "\nenter real part of 2nd number ";
    cin >> r2;
    cout << "enter imaginary part of 2nd number ";
    cin >> im2;

    //perform addition
    double rsum = r1 + r2;
    double imsum = im1 + im2;
    if (imsum >= 1) {
        cout << "the sum of two complex numbers is " << r1 + r2 << "+" << im1 + im2 << "i\n";
    } else {
        cout << "the sum of two complex numbers is " << r1 + r2 << im1 + im2 << "i\n";
    }

    //perform subtraction
    double rdiff = r1 - r2;
    double imdiff = im1 - im2;
    if (imdiff >= 1) { //use this if-else to make code logically correct (resolve sign contradiction)
        cout << "the difference of two complex numbers is " << rdiff << "-" << imdiff << "i";
    } else {
        cout << "the difference of two complex numbers is " << rdiff << imdiff << "i";
    }

    //perform multiplication
    cout << "\nthe multiplication of two complex numbers is " << r1 * r2 + (im1 * im2 * -1) << "+" << (r1 * im2) + (r2 * im1) << "i";

    //perform division
    double denominator = r2 * r2 + im2 * im2;
    double img = r2 * im1 - r1 * im2;
    double real = (r1 * r2) + (im1 * im2);
    if (img >= 1) {
        cout << "\nthe division of two complex numbers is " << real << "/" << denominator << "+" << img << "/" << denominator << "i";
    } else {
        cout << "\nthe division of two complex numbers is " << real << "/" << denominator << img << "/" << denominator << "i";
    }

    //calculate modulus of 1st complex number
    double modc1 = (r1 * r1) + (im1 * im1);
    cout << "\nthe modulus of 1st complex number is " << sqrt(modc1);

    //calculate modulus of 2nd complex number
    double modc2 = (r2 * r2) + (im2 * im2);
    cout << "\nthe modulus of 2nd complex number is " << sqrt(modc2);

    //incrementing real1 and imaginary
    r1++;
    im1++;
    cout << "\nincrement on 1st complex number is " << r1 << "+" << im1 << "i\n";

    //incrementing real2 and imaginary2
    r2++;
    im2++;
    cout << "\nincrement on 2nd complex number is " << r2 << "+" << im2 << "i\n";

    return 0;
}