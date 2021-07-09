#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Đếm số lượng giá trị "yên ngựa" trên ma trận. Một phần tử gọi là "yên ngựa"
    khi nó lớn nhất trên dòng và nhỏ nhất trên cột
*/
void inputMN(int &n, int &m);
void inputMatrix(int A[][SIZE], int n, int m);
void output(int result);
bool checkRowMatrix(int A[][SIZE], int x, int row, int m);
bool checkColumnMatrix(int A[][SIZE], int x, int column, int n);
int horseSaddle(int A[][SIZE], int n, int m);
int main()
{
    int A[SIZE][SIZE] = {0};
    int n, m, result;
    inputMN(n, m);
    inputMatrix(A, n, m);
    result = horseSaddle(A, n, m);
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
        if (A[i][column] < x)
            return false;
    }
    return true;
}

int horseSaddle(int A[][SIZE], int n, int m)
{
    int count;
    count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (checkRowMatrix(A, A[i][j], i, m) && checkColumnMatrix(A, A[i][j], j, n))
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