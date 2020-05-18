#include "NotInfected.h"

NotInfected::NotInfected(string name, int age, char gender) : Human()
{
    Name = name;
    Age = age;
    Gender = gender;
}

NotInfected::~NotInfected()
{
}

void NotInfected::Dance() 
{
    cout << "Your name is " << Name << " ,Your age is " << Age << " ,And you're gender is " << Gender << " ,And you're not infected Congrats !!" << endl;
    cout << "You are now dancing to avoid getting covid19 !!" << endl;
    cout << "****** The END ! ******" << endl;
}
