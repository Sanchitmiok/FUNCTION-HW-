//Ques 1
#include <iostream>
using namespace std;

int main() {
    int length, breadth;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;

    if (length == breadth) {
        cout << "It is a square" << endl;
    } else {
        cout << "It is a rectangle" << endl;
    }

    return 0;
}
//Ques 2
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int absoluteValue = (number < 0) ? -number : number;

    cout << "Absolute value: " << absoluteValue << endl;

    return 0;
}
//Ques 3
#include <iostream>
using namespace std;

int main() {
    double costPrice, sellingPrice;
    cout << "Enter cost price: ";
    cin >> costPrice;
    cout << "Enter selling price: ";
    cin >> sellingPrice;

    if (sellingPrice > costPrice) {
        double profit = sellingPrice - costPrice;
        cout << "Profit: " << profit << endl;
    } else if (costPrice > sellingPrice) {
        double loss = costPrice - sellingPrice;
        cout << "Loss: " << loss << endl;
    } else {
        cout << "No profit, no loss." << endl;
    }

    return 0;
}
//Ques 4
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number >= 0) {
        cout << "The number is positive: " << number << endl;
    } else {
        cout << "The number is negative and skipped" << endl;
    }

    return 0;
}
//Ques 5
#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operation) {
        case '+':
            cout << "Sum: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Difference: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Product: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Division: " << num1 / num2 << endl;
            } else {
                cout << "Division by zero is undefined." << endl;
            }
            break;
        default:
            cout << "Invalid operator." << endl;
    }

    return 0;
}
//Ques 6
#include<iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter Your Marks: ";
    cin >> marks;

    if(marks >= 90 && marks <= 100)
        cout << "Your Grade is A+";
    else if(marks >= 80 && marks < 90)
        cout << "Your Grade is B+";
    else if(marks >= 70 && marks < 80)
        cout << "Your Grade is C";
    else if(marks >= 60 && marks < 70)
        cout << "Your Grade is B";
    else if(marks >= 50 && marks < 60)
        cout << "Your Grade is D";
    else if(marks >= 40 && marks < 50)
        cout << "Your Grade is E";
    else
        cout << "Your Grade is F";

    return 0;
}
