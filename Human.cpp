#include "Human.h"

Human::Human()
{
}

Human::Human(string name, int age, char gender)
{
    Name = name;
    Age = age;
    Gender = gender;
}

Human::~Human()
{
}

string Human::getName()
{
    return Name;
}
int Human::getAge()
{
    return Age;
}
char Human::getGender()
{
    return Gender;
}
