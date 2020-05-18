#pragma once

#include <string>
#include <iostream>

#include "Human.h"

using namespace std;

class NotInfected : public Human
{

private:


public:
	NotInfected(string name, int age, char gender);

	~NotInfected();

	void Dance();
};

