#include <iostream>
using namespace std;
int main()
{
int n, x, y;
cout << "Enter number of rows to show character pattern: ";
cin >> n;
for(x = 1; x <= n; x++)
{
for(y = 1; y <= x; y++)
{
cout << char('A' + y -1);
}
cout << "\n";
}
return 0;
}