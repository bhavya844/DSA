// returning the i and j pair

#include <iostream>
#include <utility>
using namespace std;

pair<int, int> linearSearch(int mat[][10], int key, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] == key)
            {
                return make_pair(i, j);
            }
        }
    }
}

int main()
{
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    int mat[10][10];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            mat[i][j] = rand() % 101;
        }
    }
    cout << "Your matrix is " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    int key;
    cout << "Enter the number you want to search for: ";
    cin >> key;
    pair<int, int> result = linearSearch(mat, key, rows, cols);
    cout << "The row is: " << result.first + 1 << endl;
    cout << "The col is: " << result.second + 1 << endl;
    return 0;
}