#include<iostream>
using namespace std;
int main()
{
    long n;
    cin>>n;
    for(int i=n;i>=0;i--){
        long x=0;
        for(int j=1;j<i;j++){
            if(i%j==0){
                x+=j;
            }
        }
        if(x==i){
            cout<<i;
            break;
        }
    }
    return 0;
}
