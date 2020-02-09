#include<iostream>
using namespace std;
int main()
{
    long n;
    cin>>n;
    for(int i=n;i>=2;i--){
        if(n%i==0){
            long x=0;
            for(int j=2;j<i/2;j++){
                if(i%j==0){
                    x=1;
                    break;
                }
            }
            if(x==0)
            {
                cout<<i;
                break;
            }
        }
    }
    return 0;
}
