#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Viết chương trình tính tổng hai ma trận
*/
void inputMN(int &n, int &m);
void solution(int A[][SIZE], int B[][SIZE], int n, int m);
void inputMatrix(int A[][SIZE], int n, int m);
void output(int A[][SIZE], int n, int m);
int main()
{
    int A[SIZE][SIZE], B[SIZE][SIZE];
    int n, m;
    inputMN(n, m);
    inputMatrix(A, n, m);
    inputMatrix(B, n, m);
    solution(A, B, n, m);
    output(A, n, m);
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
void solution(int A[][SIZE], int B[][SIZE], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            A[i][j] += B[i][j];
}
void output(int A[][SIZE], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
}
