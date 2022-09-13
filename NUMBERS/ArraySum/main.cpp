#include <iostream>

using namespace std;

int main()
{

/* With no pointers::

    int n = 5;
    cout << "Give me 5 numbers: " << endl;

    int arr[n];

    for (int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }

    int sum=0;
    for (int i = 0; i < n ; i++)
    {
        sum = sum + arr[i];
        cout << "La suma es: " << sum << endl;
    }
    cout << "La suma final es: " << sum << endl;
    */

// With pointers::
    cout << "Give me 5 numbers: " << endl;
    int *p2, arr[5];
    p2 = &arr[5];
    for (int *p1 = arr; p1 != p2; p1++)
    {
        cin >> arr[*p1];
    }

    int sum=0;

    for (int *p1 = arr; p1 != p2; p1++)
    {
        sum += arr[*p1];
    }
    cout << "The final sum is: " << sum << endl;
    //
    return 0;
}
