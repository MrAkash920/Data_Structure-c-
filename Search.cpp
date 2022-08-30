#include <iostream>
using namespace std;
int main(){
    int n , key;
    cin >> n;
//Initialize array
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //Ask for the element you want to search
    cout<<"Enter the element you want to search : ";
    cin>>key;

    //Find out the index which you want to search
    int i;
    for(i=0;i<=n-1;i++){
        if(a[i]==key){
            cout<<key<<" Found at "<<i<<" index";
            break;
        }
    }
    if(i==n){
        cout<<key<<" Not Present";
    }
    return 0;
}