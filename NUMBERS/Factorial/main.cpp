#include <iostream>

using namespace std;

int main()
{
    int num;
    double fact = 1;
    cout << "Gimme me a number to do the factorial: ";
    cin >> num;

    while (num > 0) {
        fact *= num;
        --num;
    }
    cout << "The factorial is: " << fact << endl;
    return 0;
}
