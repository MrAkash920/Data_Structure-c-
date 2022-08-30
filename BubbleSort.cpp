#include <iostream>
using namespace std;
void bubble_sort(int a[], int n){
    //N-1 large element to the end
    for(int i=0;i<n;i++){

        //Swaping in the unsorted of the arrays
        for(int j=0;j<(n-i-1);j++){
            if(a[j]>a[j+1]){
                swap(a [j],a [j+1]);
            }
        }
    }
}
//Driver Code
int main(){
    int n,a[100];
    cin>>n;
    //Initialize array
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    bubble_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<",";
    }
    return 0;
}