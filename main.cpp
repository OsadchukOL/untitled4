#include "MyString.h"
#include <iostream>
using namespace std;

MyString::Mystring() {
    lenght = 80;
    str = new char[lenght];
}

MyString::Mystring(int size) {
    lenght = size;
    str = new char[lenght];
}

MyString::Mystring() {
    lenght = strlen(s);
    str = new char[lenght + 1];
    srcpy_s(str, lengt + 1, s);
}

MyString::Mystring() {
    lenght = obj.lengt;
    str = new char[lenght + 1];
    srcpy_s(str, lengt + 1, obj.str);
}

MyString::~Mystring() {
    delete[] str;
}

void MyString::Print() {
    cout << str << endl;
}

void MyString::Input() {

}
bool MyString::MyStrStr(const char* st) {
    char* temp = strstr(str,st)
    if (temp != nullptr) {
        return true;
    }
    return false;
}

int main() {

}
