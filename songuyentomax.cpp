#include<iostream>
using namespace std;
int main()
{
    long long int x;
    cin>>x;
    for(int i=x;i>=2;i--){
        int a=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0)
            {
                a=1;
                break;
            }
        }
        if(a==0){
            cout<<i;
            break;
        }
    }
    return 0;
}