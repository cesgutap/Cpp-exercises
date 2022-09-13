#include <iostream>
#include <vector>
#include <math.h>


//C++ Program to Reverse a Number using while loop

using namespace std;

int main()
{
    int num, i = 0, rev = 0, aux = 0;
    vector <int> rev_vec;
    cout << "Gimme the number to reverse: ";
    cin >> num;

    while (num > 0)
    {
        rev_vec.push_back(num%10);
        num = num/10;
        i++;
    }

    while (i > 0)
    {
        if (i == rev_vec.size())
            rev = rev_vec[i-1];
        else
        {
            aux = rev_vec[i-1];
            aux *= pow(10, i);
            rev = rev + aux;
        }
        i--;
    }
    cout << rev;
    return 0;
}
