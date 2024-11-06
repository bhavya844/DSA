#include<iostream>
using namespace std;

int main(){
    int i=0,j=0,n,a=1;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a++;
        }
        cout<<endl;
    }
    return 0;
}