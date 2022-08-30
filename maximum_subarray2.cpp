#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000];
    int cumSum[1000];

    int maxSum = 0;
    int currentSum = 0;

    cin>>a[0];
    cumSum[0]=a[0];

    int left = -1;
    int right = -1;
    
    for(int i=1;i<n;i++){
        cin>>a[i];
        cumSum[i] = cumSum[i-1] + a[i];
    }

    //Generate Subarrays
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //Elements of subarrays
            currentSum= 0;
            currentSum= cumSum[j] - cumSum[i-1];

            //Update maximumSum if currentSum > maximumSum
            if(currentSum > maxSum){
              maxSum = currentSum;
              left = i;
              right = j; 
            }
        }
    }
    cout<<"Maximum Sum is: "<<maxSum<<endl;
}