#include<iostream>
using namespace std;
void Selectionsort (int a[],int n){
    for(int i=0;i<n-1;i++){
        //find out the samllest element index
        int min_index = i;
        for(int j=i;j<=n-1;j++){
            if(a[j] < a[min_index]){
                min_index = j;
            }
        }
    //After this we will swap
    swap(a[i],a[min_index]);
    }
}
int main(){
    int n, key;
    cin>>n;
    //Intialize array
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //Return Function
    Selectionsort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ,";
    }
}