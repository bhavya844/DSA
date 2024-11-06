#include<iostream>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));
    int randomNum = rand() % 101;
    int n;
    cout<<"Enter number:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=rand()%101;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    cout<<"The smallest number is:";
    int smallest = a[0];
    for(int i=1;i<n;i++){
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    cout<<smallest;
    return 0;
    
}