#include<iostream>
using namespace std;
int main()
{
    int i,j,mat[1000][1000],row,col,sum=0;
    cin>>row>>col;
    for(i=0;i<row;i++){
        for (j = 0; j < col; j++) {
            cin>>mat[i][j];
        }
    }
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            if (i == j){
                sum=sum+mat[i][j];
            }
        }
    }
    cout<<sum;
    return 0;
}
