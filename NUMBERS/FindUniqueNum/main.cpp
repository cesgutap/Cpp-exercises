#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int Xnum, ind;
    cout << "Introduce the number to check if its unique: " << endl;
    cin >> Xnum;

    cout << "Introduce a series of numbers space sparated [ctr+Z to finish]: " << endl;
    vector <int> numbers;
    int num;
    while (cin >> num)
    {
        cin >> num;
        numbers.push_back(num);
    }

    for (auto i = numbers.begin(); i != numbers.end(); ++i)
    {
        if (*i == Xnum)
        {
            cout << "El numero " << *i << "SI es unico" << endl;
            ind = 0;
            break;
        }
    }
    if (ind)
        cout << "El numero " << Xnum << "NO es unico" << endl;

}
