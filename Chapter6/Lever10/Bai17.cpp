#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Đếm số lượng giá trị "hoàng hậu" trên ma trận. Một phần tử gọi là hoàng hậu khi nó 
    lớn nhất trên dòng, cột và 2 đường chéo
*/
void inputMN(int &n, int &m);
void inputMatrix(int A[][SIZE], int n, int m);
void output(int result);
bool checkRowMatrix(int A[][SIZE], int x, int row, int m);
bool checkColumnMatrix(int A[][SIZE], int x, int column, int n);
bool checkDiagonalLine(int A[][SIZE], int i, int j, int x, int n, int m);
int queueNumber(int A[][SIZE], int n, int m);
int main()
{
    int A[SIZE][SIZE];
    int n, m, result;
    inputMN(n, m);
    inputMatrix(A, n, m);
    result = queueNumber(A, n, m);
    output(result);
    return 0;
}
void inputMN(int &n, int &m)
{
    cin >> n >> m;
}
void inputMatrix(int A[][SIZE], int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> A[i][j];
}
bool checkRowMatrix(int A[][SIZE], int x, int row, int m)
{
    for (int i = 0; i < m; i++)
    {
        if (A[row][i] > x)
            return false;
    }
    return true;
}
bool checkColumnMatrix(int A[][SIZE], int x, int column, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i][column] > x)
            return false;
    }
    return true;
}
bool checkDiagonalLine(int A[][SIZE], int i, int j, int x, int n, int m)
{
    int k;
    k = 0;
    while (k < n)
    {
        if ((i - k - 1 >= 0 && j - k - 1 >= 0) && A[i - k - 1][j - k - 1] > x)
        {
            return false;
        }
        if ((i + k + 1 <= n - 1 && j + k + 1 <= m - 1) && A[i + k + 1][j + k + 1] > x)
        {
            return false;
        }

        k++;
    }
    return true;
}

int queueNumber(int A[][SIZE], int n, int m)
{
    int count;
    count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (checkRowMatrix(A, A[i][j], i, m) && checkColumnMatrix(A, A[i][j], j, n) && checkDiagonalLine(A, i, j, A[i][j], n, m))
            {
                count++;
            }
        }
    }
    return count;
}

void output(int result)
{
    cout << result;
}