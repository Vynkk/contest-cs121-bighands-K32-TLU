#include<iostream>
using namespace std;
int main()
{
    long w;
    cin>>w;
    if(w > 0 && w <= 100){
        if(w%2==0 && w!=50 && w!=30 && w!=10 && w!=2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
