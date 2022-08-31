#include<iostream>
using namespace std;
void SpiralPrint(int a[][100], int m, int n){
    int StartRow = 0;
    int StartCol = 0;
    int EndRow = m-1;
    int EndCol= n-1;

    //Primnt it
    while(  StartRow <= EndRow and StartCol <= EndCol){
        //First Row
        for(int i=StartCol; i<=EndCol; i++){
            cout<< a[StartRow][i]<<" ";
        }
        
        StartRow++;
        for(int i =StartRow; i<=EndRow; i++){
            cout<<a[i][EndCol]<<" ";
        }
        EndCol--;
        //Buttom Row
        for(int i =EndCol; i>=StartCol;i--){
            cout<<a[EndRow][i]<<" ";
        }
        EndRow--;
        //Start Col
        for(int i=EndRow; i>=StartRow;i--){
            cout<<a[i][StartCol]<<" ";
        }
        StartCol++;
    }
}
int main(){
    int a[100][100]={0};
    int m,n;
    cin >> m >> n;

    int val = 1;
    for(int row =0;row<=m-1;row++){
        for(int col=0;col<=n-1;col++){
            a[row][col]=val;
            val= val+1;
            cout<< a[row][col]<<" ";

        }
        cout<<endl;
    }
    SpiralPrint(a,m,n);

}