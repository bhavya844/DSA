#include<iostream>
#include<utility>
using namespace std;

pair<int,int> diagonalSum(int mat[][10], int n){
    int Psum=0;int Ssum=0;
    for(int i=0;i<n;i++){
        Psum+=mat[i][i];

        if(i!=n-i-1){
            Ssum+=mat[i][n-i-1];
        }
    }
    return make_pair(Psum,Ssum);

}

int main(){
    int n;
    cout<<"Enter the size of the square matrix: ";
    cin>>n;
    int mat[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mat[i][j]=rand()%10;
        }
    }
    cout<<"The matrix is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    pair<int,int> result= diagonalSum(mat,n);
    cout<<"Primary diagonal sum: "<< result.first<<endl;
    cout<<"Secondary diagonal sum: "<<result.second<<endl;
    return 0;
}