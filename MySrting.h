#pragma once

class MyString {

    char* str;
    int lenght;
public:

    MyString();
    MyString(int size);
    MyString(const char* s);

    -MyString();
    void Print();
    void Input();
    void Coppy();

};

