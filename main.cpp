#include <iostream>

using namespace std;

class calc {
private:
    int num1 = 0, num2 = 0;
public:
    void write(int a, int b) {
        cout << "nums are initialise" << endl;
        num1 = a;
        num2 = b;
    }
    int plus() {
        return num1 + num2;
    }
    int minus() {
        return num1 - num2;
    }
    int divide() {
        return num1 / num2;
    }
    int multi() {
        return num1 * num2;
    }
    void print() {
        cout << "plus: " << plus() <<
            "\nminus: " << minus() <<
            "\ndivide: " << divide() <<
            "\nmulti: " << multi() << endl;
    }

};

int main()
{
    int temp1, temp2;
    cin >> temp1 >> temp2;
    calc obj1;
    obj1.write(temp1, temp2);
    obj1.print();
    return 0;
}