// Ques 1 
#include<iostream>
using namespace std;

int main() {
    int x = 2, y = 4;
    cout << "Product: " << x * y << endl;
    return 0;
}
// Ques 2
#include<iostream>
using namespace std;

int main() {
    char ch = 'U';
    cout << "ASCII value of " << ch << ": " << int(ch) << endl;
    return 0;
}
//Ques 3
#include<iostream>
using namespace std;

int main() {
    int length = 4, breadth = 7;
    cout << "Area: " << length * breadth << endl;
    return 0;
}
//Ques 4
#include<iostream>
using namespace std;

int main() {
    int num = 3;
    cout << "Cube: " << num * num * num << endl;
    return 0;
}
//Ques 5
#include<iostream>
using namespace std;

int main() {
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    return 0;
}


//Ques 6
#include<iostream>
using namespace std;

int main() {
    int a = 2, b = 3;
    cout << "Before swapping: " << a << ", " << b << endl;

    // Swapping
    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping: " << a << ", " << b << endl;
    return 0;
}
