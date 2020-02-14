#include<iostream>
using namespace std;
int main()
{
    long n,sum=0;
    cin>>n;
    while(n>0){
        sum=sum+n;
        n=n/10;
    }
    cout<<sum;
    return 0;
}
