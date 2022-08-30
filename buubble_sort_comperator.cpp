#include<iostream>
using namespace std;
bool compare (int a, int b){
    cout<<"Compare "<<a<<" and "<<b<<endl;
    return a<b;
}
//Bubble Sort
void  bubble_short (int a[],int n, bool (&cmp)(int a, int b)){
    for(int i=0;i<n;i++){
        //Swapping int the unshorted array
        for(int j=0;j<(n-i-1);j++){
            if(cmp(a[j],a[j+1])){
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    //Initialize array
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //To print shorted array
    bubble_short(a,n,compare);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}