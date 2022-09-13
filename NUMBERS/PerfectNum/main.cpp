#include <iostream>

/* Write a C++ Program to find Perfect Number using loop.
A perfect numbers is a positive number that equals the sum of its divisors, excluding itself.*/


using namespace std;

int main()
{

    int topLim;
    cout << "Enter the top searching limit: " << endl;
    cin >> topLim;
    if (topLim > 0)
    {

        for (int num = 1; num != topLim; num++)
        {
            int divSum = 0;
            for (int div = 2; div < num; div++)
            {
                if ((num%div) == 0)
                {
                    divSum += div;
                }
            }
            if (divSum == num)
                cout << "*****  " << num << " is a perfect number" << endl;
        }
    }
    else
        cout << "Not a valid number" << endl;

}
