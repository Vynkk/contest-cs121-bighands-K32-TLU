#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,a,s,b;
    cin>>n;
    s=0;
    b=n;
        while(n>0) {
            a=n%10;
            n=n/10;
            s=s+pow(a,3);
        }
        if(s==b) {
            cout<<"1";
        }
        else {
            cout<<"0";
        }
        return 0;
}
