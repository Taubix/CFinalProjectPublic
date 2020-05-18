#pragma once

#include <string>
#include <iostream>

#include "Human.h"

using namespace std;

class CovidInfected : public Human
{

private:


public:

	CovidInfected(string name, int age, char gender);

	~CovidInfected();

	void Sleep();
};

