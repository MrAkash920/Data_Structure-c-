#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int a, int b){
    //cout<<" Comparing "<<a<<"and"<<b<<endl;
    return a>b;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Sort an array using sort() function
    sort(arr,arr+n,compare);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}