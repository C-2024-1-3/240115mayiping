#include "student.h"
#include <iostream>
using namespace std;

void Student::display()
{
    cout << "num£º" << num << endl;
    cout << "name£º" << name << endl;
    cout << "sex£º" << sex << endl;
}

void Student::set_value(int num, const char* name, char sex)
{
    this->num = num;
    for (int i = 0; i < 20; i++) {
        this->name[i] = name[i];
    }
    this->sex = sex;
}
