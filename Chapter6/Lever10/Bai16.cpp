#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Đếm số lượng số chẵn trên biên của ma trận các số thực kích thượng MxN
*/
void inputMN(int &n, int &m);
void inputMatrix(float A[][SIZE], int n, int m);
bool checkEvenNumber(float n);
int solution(float A[][SIZE], int n, int m);
void output(int result);
int main()
{
    float A[SIZE][SIZE];
    int n, m, result;
    inputMN(n, m);
    inputMatrix(A, n, m);
    result = solution(A, n, m);
    output(result);
    return 0;
}
void inputMN(int &n, int &m)
{
    cin >> n >> m;
}
void inputMatrix(float A[][SIZE], int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> A[i][j];
}
bool checkEvenNumber(float n)
{
    if (n - (int)n == 0)
    {
        int number;
        number = (int)n;
        if (number % 2 == 0 && number != 0)
            return true;
        return false;
    }
    return false;
}
int solution(float A[][SIZE], int n, int m)
{
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        if (checkEvenNumber(A[0][i]))
            count++;
        if (checkEvenNumber(A[n - 1][i]) && n - 1 != 0)
            count++;
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (checkEvenNumber(A[i][0]))
            count++;
        if (checkEvenNumber(A[i][m - 1]) && m - 1 != 0)
            count++;
    }
    return count;
}
void output(int result)
{
    cout << result;
}