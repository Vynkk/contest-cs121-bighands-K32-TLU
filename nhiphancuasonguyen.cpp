#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    
    string s="";
    while(1) {
        long x = n%2;
        string temp = x == 0 ? "0":"1";
        s=temp+s;
        n=n/2;
        if(n==0) break;
        
    }
    cout<<s;
    return 0;
}