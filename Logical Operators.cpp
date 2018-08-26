#include <iostream>

using namespace std;

int main()
{
    int weight, height;

    cout << "\n\n";
    cout << "     An athlete must meet the standard weight and height to compete.\n ";
    cout << "    If you were an athlete lets see if you are qualified.\n\n\n ";

    cout << " Enter your weight. It must be in kilograms:   ";
        cin >> weight;

    cout << "\n\n";

    cout << "  Enter your height. It must be in inches:   ";
        cin >> height;

    cout << "\n\n\n\n";
    if ((weight>=45)&&(height>=65))
        cout << "   CONGRATULATIONS! YOU ARE FIT TO COMPETE. \n\n";
    else
        cout << "   SORRY YOUR ARE NOT CAPABLE TO COMPETE. \n TRAIN MORE! \n";

    return 0;
}
