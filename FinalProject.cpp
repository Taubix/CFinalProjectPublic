// FinalProject.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
// Thomas Lebeau c++ FinalProject
// At first I've tried to do a tower defense but in the end, I didn't managed to make the collision system.
// so I gave up, I didn't know what to do with it as a project so I tried to reuse everything we'd seen in class as a final project.


#include <iostream>
#include <vector>
#include <string>
#include <time.h>

#include "NotInfected.h"
#include "CovidInfected.h"

using namespace std;

int main()
{
    cout << "Hello World !" << endl;
    cout << "Welcome to this world invaded by the coronavirus..." << endl;
    cout << "To know your name in this world choose a number between 0 and 6 : ";

    int numberToChooseName;
    cin >> numberToChooseName;

    if (numberToChooseName < 0 || numberToChooseName > 6)
    {
        cout << "Please pick a number between 0 and 6 To know your name : ";
        cin >> numberToChooseName;
    }

    vector<string> ListOfNames = { "Tom","Aaron","Jason","Noah","Charlie","Dylan","Ehtan" };
    string YourNameIs;
    YourNameIs = ListOfNames[numberToChooseName];

    cout << "So, your name is " << YourNameIs << " !" << endl << "That's a great name !" << endl;

    srand(time(NULL));
    int age = rand() % 40;

    cout << "I think that you have " << age << " years old." << endl;
    cout << "Are you a boy or a girl ? (m/f) : ";

    char gender;
    cin >> gender;

    if (gender != 'm' && gender != 'f')
    {
        cout << "Please choose the letter 'm' or 'f' to define your gender : ";
        cin >> gender;
    }

    cout << "Know you have two possibilities : " << endl;
    cout << " - One, be infected by the coronavirus !" << endl;
    cout << " - Second, not become infected !" << endl;
    cout << "Unfortunately for you it's random, it's a 50-50 chance..." << endl;

    int infectedOrNot = rand() & 1;

    switch (infectedOrNot)
    {
        case 0:
            NotInfected* ImNotInfected;
            ImNotInfected = new NotInfected(YourNameIs, age, gender);
            ImNotInfected->Dance();
            delete ImNotInfected;
            break;
        case 1:
            CovidInfected * ImInfected;
            ImInfected = new CovidInfected(YourNameIs, age, gender);
            ImInfected->Sleep();
            delete ImInfected;
            break;   
    }
}

