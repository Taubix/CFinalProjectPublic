#include "CovidInfected.h"



CovidInfected::CovidInfected(string name, int age, char gender) : Human()
{
	Name = name;
	Age = age;
	Gender = gender;
}

CovidInfected::~CovidInfected()
{
}

void CovidInfected::Sleep()
{
	cout << "Your name is " << Name << " ,Your age is " << Age << " ,And you're gender is " << Gender << " ,And you are infected Congrats !!" << endl;
	cout << "You are now trying to sleep to heal from Covid19 !!" << endl;
	cout << "****** The END ! ******" << endl;
}
