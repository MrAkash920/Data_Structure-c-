 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cin>>n;
    int a[1000];
    int maximumSum=0;
    int currentSum=0;
    //Initialize array
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //Generating subarrays
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            currentSum=0;
            //Element of subarrays (i,j)
            for(int k=i;k<=j;k++){
                currentSum+=a[k];
            }
            //cout<<currentSum<<endl;
        }
        //Update Sum of maximum subarrays to current
        if(maximumSum<currentSum){
            maximumSum=currentSum;
        }
    }
    cout<<"Maximum Sum is: "<<maximumSum<<endl;
 }
