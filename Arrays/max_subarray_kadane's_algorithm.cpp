#include<iostream>
using namespace std;
#include<random>

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

    cout<<"Using kandane's algorithm"<<endl;
    int curr_sum=0; int max_sum=INT_MIN;
    for(int i=0;i<n;i++){
        curr_sum+=arr[i];
        max_sum=max(curr_sum, max_sum);
        if(curr_sum<0){
            curr_sum=0;
        }
    }
    cout<<"Max subarray sum: "<<max_sum;
    return 0;
}