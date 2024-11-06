#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=0;k<i;k++){
            cout<<" ";
        }
        for(int j=0;j<=n-i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}