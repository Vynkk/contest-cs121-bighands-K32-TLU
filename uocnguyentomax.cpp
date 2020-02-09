#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int ktnt(long long int n) {
    // so nguyen n < 2 khong phai la so nguyen to
    if (n < 2) {
        return 0;
    }
    // check so nguyen to khi n >= 2
    int temp = sqrt(n);
    for (int i= 2; i <= temp; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    long long int n,max;
    cin>>n;
    for(int i=1;i<=n/2;i++){
        if(n%i==0&&ktnt(i)){
            if(i>max)
            max = i;
        }
    }
    cout<<max;
}