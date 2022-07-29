#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter your marks =" << endl;
    cin >> a;
    if (a >= 40)
    {
        if (a == 50 && a < 60)
        {
            cout << "e";
        }

        else if (a >= 60 && a < 70)

        {
            cout << "d";
        }
        else if (a >= 70 && a < 80)
        {
            cout << "c";
        }
        else if (a >= 80 && a < 90)
        {
            cout << "b";
        }
        else if (a >= 90 && a < 100)
        {
            cout << "a";
        }

        else
        {
            cout << "pass";
        }
    }

    return 0;
}