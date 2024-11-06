#include <iostream>
using namespace std;

int main(){
    int n,i=0, j=1;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=1;j<n+1;){
            cout<<j++<<" ";
        }
        cout<<endl;
    }
    return 0;
}