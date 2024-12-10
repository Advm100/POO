#include <iostream>
using namespace std;
//Exo 3

int main() {
    
    float age = 0;
    cout << "Saisissez votre âge :" ;
    cin >> age;

    if (age>=18)
    {
        cout << "Vous êtes majeur" << endl;
    }
    else
    {
        cout << "Vous êtes mineur" << endl;
    }
}