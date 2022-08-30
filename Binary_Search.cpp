#include<iostream>
using namespace std;
int binary_search(int a[],int n,int key){
    int s=0; //s = start
    int e=n-1; //e = end
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            e= mid-1;
        }
        else{
            s= mid+1;
        }
    }
    return -1;
}
    int main(){
        int n, key;
        cin>>n;
        //Imnitialize array
        int a[1000];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<"Enter the element which you want to search: "<<endl;
        cin>>key;
        cout<<binary_search(a,n,key)<<endl;
    }