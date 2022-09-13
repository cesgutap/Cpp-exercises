#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Introduce the first number: " << endl;
    cin >> num1;
    cout << "Introduce the second number: " << endl;
    cin >> num2;
    cout << "Introduce the third number: " << endl;
    cin >> num3;

    if (num2 > num1 && num2 > num3)
    {
        if (num1 > num3)
           cout << "El orden de mayor a menor es: " << num2 << " " << num1 << " " << num3 <<endl;
        else
           cout << "El orden de mayor a menor es: " << num2 << " " << num3 << " " << num1 <<endl;
    }

    else
    {
        if (num1 > num3)
        {
            if (num3 < num2)
                cout << "El orden de mayor a menor es: " << num1 << " " << num2 << " " << num3 <<endl;
            else
                cout << "El orden de mayor a menor es: " << num1 << " " << num3 << " " << num2 <<endl;
        }
        else
            if (num1 < num2)
                cout << "El orden de mayor a menor es: " << num3 << " " << num2 << " " << num1 <<endl;
            else
                cout << "El orden de mayor a menor es: " << num3 << " " << num1 << " " << num2 <<endl;
    }

    return 0;
}
