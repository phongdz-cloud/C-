#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Viết chương trình tính tổng các phần tử trong một mảng 2 chiều có kích thước MxN
*/
void input(int A[][SIZE], int &n, int &m);
int solution(int A[][SIZE], int n, int m);
void output(int result);
int main()
{
    int A[SIZE][SIZE];
    int n, m, result;
    input(A, n, m);
    result = solution(A, n, m);
    output(result);
}
void input(int A[][SIZE], int &n, int &m)
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> A[i][j];
}
int solution(int A[][SIZE], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            sum += A[i][j];

    return sum;
}
void output(int result)
{
    cout << result;
}
