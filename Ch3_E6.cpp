/*
File name:Ch3_E6
Date:09/2025
Programmer name:Jamen Cannady
Requirements: ask how many cookies the user wants to make, then display the number of cups each ingrediant needs
*/

#include <iostream>
using namespace std;

int main()
{
    int cookies;
    double OSugar = 1.5, OButter = 1, OFlour = 2.75;
    double Sugar = OSugar / 48, Butter = OButter / 48, Flour = OFlour / 48;

    cout << "How many cookies would you like to make?" << endl;
    cin >> cookies;
    double NSugar = Sugar * cookies, NButter = Butter * cookies, NFlour = Flour * cookies;

    cout << "To make " << cookies << " cookies you need " << NSugar << " cups of sugar, " << NButter << " cups of butter, and " << NFlour << " cups of flour.";

}


