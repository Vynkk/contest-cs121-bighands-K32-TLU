#include<iostream>
using namespace std;
int main()
{
    long a,b,c,max;
    cin>>a>>b>>c;
    max = a;
    if(max<b)
        max=b;
    if(max<c)
        max=c;
    cout<<max;
    return 0;
}