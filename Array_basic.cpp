#include <iostream>

using namespace std;

int main()
{
    int a[10]={0}; //Initallization of array

    //Size of array
    cout<<sizeof(a)<<endl;
    int n= sizeof(a)/sizeof(int);
    cout<<n<<endl;
    //Input From user
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    //Update array at ith position
    a[8]=12;
    //Print array
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ,";
    }
    return 0;
}
