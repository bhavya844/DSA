#include <iostream>
using namespace std;

int primaryDiagonal(int mat[][10], int rows, int cols)
{
    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j)
            {
                sum += mat[i][j];
            }
        }
    }
    return sum;
}

int secondaryDiagonal(int mat[][10], int rows, int cols)
{
    int sum = 0;
    for (int j = cols-1; j>= 0; j--)
    {
        for (int i = 0; i<rows; i++)
        {
            if (i+j==rows-1)
            {
                sum += mat[i][j];
            }
        }
    }
    return sum;
}

int main()
{
    int rows, cols;
    cout << "Enter the number of rows that you need: ";
    cin >> rows;
    cout << "Enter the number of cols that you need: ";
    cin >> cols;
    int mat[10][10];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            mat[i][j] = rand() % 101;
        }
    }
    cout << "Your matrix is:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << "The sum of the PD is: " << primaryDiagonal(mat, rows, cols)<<endl;
    cout << "The sum of the SD is:" << secondaryDiagonal(mat, rows, cols);
    return 0;
}