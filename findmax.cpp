#include<iostream>
using namespace std;
int main()
{
    long int x,a;
    cin>>x;
    int max=0;
    for(int i=0;i<=x;i++){
        cin>>a;
        if(max<a)
            max=a;
    }
    cout<<max;
    return 0;
}
