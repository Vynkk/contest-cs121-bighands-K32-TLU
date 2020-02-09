#include<iostream>
using namespace std;
int main()
{
    long n,i;
    bool ktshh=true;
    cin>>n;
    i=1;
    for(n;n>i;i--){
        for(int j=2;j<n;j++){
            if(n%j==0){
                ktshh=false;
                break;
            }
        }
        if(ktshh==true){
            cout<<n;
            break;
        }
    }
    
}