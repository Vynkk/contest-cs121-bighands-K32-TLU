#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long x;
    cin>>x;
    if(x>0){
        cout<<pow(floor(sqrt(x)),2);
    }
    return 0;
}