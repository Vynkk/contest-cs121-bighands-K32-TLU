#include<iostream>
using namespace std;
int main()
{    
    int x,y,dem;
    cin>>x;
    dem=0;
    for(int i=2;;i++)
    {
        y=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                y=1;
                break;
            }
        }
        if(y==0)
            dem+=1;
        if(dem==x)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
