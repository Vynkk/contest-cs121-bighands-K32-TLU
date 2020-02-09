#include <iostream>
using namespace std;
int demsouoc(int N)
{
    long long int dem = 0;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
            dem++;
    }

    return dem;
}

int main()
{
    long N;
    cin >> N;

    long dem = demsouoc(N);
    cout << dem << endl;

    return 0;
}