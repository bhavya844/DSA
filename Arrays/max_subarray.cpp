#include<iostream>
#include<random>
using namespace std;

int main(){

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(-10,10);
    int n;
    cout<<"Enter a number n: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=dis(gen);
    }
    cout<<"The arrray is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    int maxSum= INT_MIN;
    for(int st=0;st<n;st++){
        int sum=0;
        for(int end=st;end<n;end++){
            sum+=arr[end];
            maxSum=max(sum, maxSum);
        }        
    }
    cout<<"The max sum in the array is: "<<maxSum;
    return 0;
}