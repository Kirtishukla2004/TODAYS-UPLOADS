#include <iostream>
using namespace std;
int main()
{
int n, x, y, s;
cout << "Enter number of rows to show the star pattern: ";
cin >> n;
for(x = 1; x <= n; x++)
{
//for loop to put space in pyramid
for (s = x; s < n; s++)
cout << " ";
//for loop to print star
for(y = 1; y <= (2 * n - 1); y++)
{
if(x == n || y == 1 || y == 2 * x - 1)
cout << "*";
else
cout << " ";
}
cout << "\n";
}
return 0;
}


