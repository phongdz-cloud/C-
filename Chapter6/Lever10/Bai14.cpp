#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Tìm và in ra tất cả vị trí xuất hiện của số lớn nhất trong ma trận.
*/
void inputMN(int &n, int &m);
void inputMatrix(int A[][SIZE], int n, int m);
void solution(int A[][SIZE], int n, int m);
int findMaxMatrix(int A[][SIZE], int n, int m);
void output(int i, int j);
int main()
{
    int A[SIZE][SIZE];
    int n, m;
    inputMN(n, m);
    inputMatrix(A, n, m);
    solution(A, n, m);
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
int findMaxMatrix(int A[][SIZE], int n, int m)
{
    int max = A[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            if (A[i][j] > max)
                max = A[i][j];
    }
    return max;
}

void solution(int A[][SIZE], int n, int m)
{
    int max;
    max = findMaxMatrix(A, n, m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i][j] == max)
                output(i, j);
        }
    }
}
void output(int i, int j)
{
    cout << i << " " << j << endl;
}