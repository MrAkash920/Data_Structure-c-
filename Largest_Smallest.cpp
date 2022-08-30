#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;

    //Intialize array
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //Allgorithm to find the smallest and largest no
    int largest = INT_MIN;
    int smallest = INT_MAX;
    for(int i=0;i<n;i++){
        largest=max(largest,a[i]);
        smallest=min(smallest,a[i]);
    }
    cout<<"Largest: "<<largest<<endl;
    cout<<"Smallest: "<<smallest<<endl;
        return 0;
}

