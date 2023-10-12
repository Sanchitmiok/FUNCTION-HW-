//Ques 1
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 == num2) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}

//Ques 2
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the values of a and b: ";
    cin >> a >> b;

    if (a < 50 && a < b) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}

//Ques 3
#include <iostream>
using namespace std;

int main() {
    int totalPupils = 45;
    int boys = 25;
    int boysWithGradeA = (17 * totalPupils) / 100;
    int girlsWithGradeA = boysWithGradeA - boys;

    cout << girlsWithGradeA << endl;

    return 0;
}

//Ques 4
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a 5-digit number: ";
    cin >> num;

    int firstDigit = num / 10000;
    int lastDigit = num % 10;
    int sum = firstDigit + lastDigit;

    cout << "Sum of the first and second last digit: " << firstDigit << " + " << lastDigit << " = " << sum << endl;

    return 0;
}
//Ques 5
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a 3-digit number: ";
    cin >> num;

    int digit1 = num / 100;
    int digit2 = (num / 10) % 10;
    int digit3 = num % 10;
    int sum = digit1 + digit2 + digit3;

    cout << "Sum of the digits: " << sum << endl;

    return 0;
}
//Ques 6
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Sum: " << num1 + num2 << endl;
    cout << "Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << endl;
    
    if (num2 != 0) {
        cout << "Division: " << static_cast<double>(num1) / num2 << endl;
    } else {
        cout << "Division by zero is undefined." << endl;
    }
    
    if (num2 != 0) {
        cout << "Modulus: " << num1 % num2 << endl;
    } else {
        cout << "Modulus by zero is undefined." << endl;
    }

    return 0;
}
