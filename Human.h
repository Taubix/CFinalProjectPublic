#pragma once

#include <string>

using namespace std;

class Human
{

protected:
    string Name;
    int Age;
    char Gender;

public:
    Human();
    Human(string name, int age, char gender);

    ~Human();

    string getName();
    int getAge();
    char getGender();
};






