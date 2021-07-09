#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Sắp xếp ma trận sao cho các phần tử trên đường chéo chính tăng dần
*/
void inputMN(int &n, int &m);
void inputMatrix(int A[][SIZE], int n, int m);
void solution(int A[][SIZE], int n);
void swap(int &a, int &b);
void output(int A[][SIZE], int n, int m);
int main()
{
    int A[SIZE][SIZE];
    int n, m;
    inputMN(n, m);
    inputMatrix(A, n, m);
    solution(A, n);
    output(A, n, m);
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
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void solution(int A[][SIZE], int n)
{
    int sum;
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i][i] > A[j][j])
                swap(A[i][i], A[j][j]);
        }
    }
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