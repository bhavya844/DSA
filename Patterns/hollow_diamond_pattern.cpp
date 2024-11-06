#include<iostream>
using namespace std;

int main(){
    int n;char ch=' ';
    cout<<"Enter a number:";
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<"*";
        for(int k=1;k<=2*(i-1)-1;k++){
            cout<<" ";
        }
        if(i>1){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        cout<<"*";
        for(int k=1;k<=n-(2*i)+1;k++){
            cout<<" ";
        }
        if(i<n-1){
            cout<<"*";
        }
        cout<<endl;
    }
}