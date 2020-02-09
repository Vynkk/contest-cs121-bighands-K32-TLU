#include <iostream>
using namespace std;
 
int main()
{
    long n, i, s=0;
    cin >> n;
    for (i=1; i<n; i++)
        if (n%i==0)
            s+=i;
    if (s==n)
        cout << "1";
    else
        cout << "0";
}