#include<iostream>
using namespace std;
int NT(long n)
{
    if(n==2) return true;
    else{
        for(int i=2;i<n;i++){
            if(n%i!=0){
                return false;
            }
        }
        return true;
    }
}
int main()
{
    long int x;
    cin>>x;
    if(NT(x)==false){
        cout<<"0";
    }
    else{
        while(x>0){
            if(NT(x)==true){
                x/=10;
            }
            if(NT(x)==false){
                cout<<"0";
            }
            break;
        }
    }
    if(NT(x*10)==true){
        cout<<"1";
    }
    return 0;
}
