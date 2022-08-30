#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int a[1000];
    int currentSum=0;
    int maximumSum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //Kadane's Algorithm for maximum subarray sum
    for(int i=0;i<n;i++){
        currentSum=currentSum+a[i];
        if(currentSum<0){
            currentSum=0;
        }
        maximumSum=max(currentSum,maximumSum);
    }
    cout<<"MaximumSum is "<<maximumSum<<endl;
}
