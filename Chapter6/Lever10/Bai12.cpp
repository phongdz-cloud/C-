#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Tính tổng trên các dòng, các cột, trên đường chéo chính, đường chéo phụ
*/
void inputMN(int &n, int &m);
void inputMatrix(int A[][SIZE], int n, int m);
int solution(int A[][SIZE], int n, int m);
void output(int result);
int main()
{
    int A[SIZE][SIZE];
    int n, m, result;
    inputMN(n, m);
    inputMatrix(A, n, m);
    result = solution(A, n, m);
    output(result);
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
int solution(int A[][SIZE], int n, int m)
{
    int sum;
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i][i] + A[i][m - i - 1];
    }
    return m % 2 != 0 ? sum -= A[m / 2][m / 2] : sum;
}
void output(int result)
{
    cout << result;
}