#include<iostream>
using namespace std;
int main()
{
    long x,y,max=0;
    cin>>x;
    while(x>0) {
        y = (int)x%10;
        x = (int)x/10;
        if(y>max) {
            max = y;
        }
    }
    cout<<max;
    return 0;
}