#include <iostream>
using namespace std;

int main(){
    int n,i=0, j=1;
    
    cout<<"Enter a number:"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        char ch='A';
        for(j=1;j<n+1;j++){
            cout<<ch++<<" ";
        }
        cout<<endl;
    }
    return 0;
}