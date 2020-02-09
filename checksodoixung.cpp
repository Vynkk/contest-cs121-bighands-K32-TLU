#include<iostream>
using namespace std;
int main()
{
    int a,s=0,m,n;
    cin>>n;
    m=n;
    while(n>0) {
        a=(int)n%10;
        s=(int)s*10+a;
        n=(int)n/10;
    }
    if(m==s) {
        cout<<"1"<<endl;
    }
    else {
        cout<<"0"<<endl;
    }
    return 0;
    
}