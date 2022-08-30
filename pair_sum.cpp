#include<iostream>
using namespace std;
int main(){

    int a[]={1,3,5,7,10,11,12,13};
    int sum=12;

    int i=0;
    int j=sizeof (a)/sizeof(int)-1;

    while(i<j){
        int currentSum= a[i]+a[j];
        if(currentSum>sum){
            j--;
        }
        else if(currentSum<sum){
            i++;
        }
        else if(currentSum==sum){
            cout<<a[i]<<" and "<<a[j]<<endl;
            i++;
            j--;
        }
    }
}