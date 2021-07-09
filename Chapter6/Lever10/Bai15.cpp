#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Tìm vị trí (tọa độ dòng, cột) của số nguyên tố đầu tiên trong mảng 2 chiều m dòng
    , n cột
*/
void inputMN(int &n, int &m);
void inputMatrix(int A[][SIZE], int n, int m);
void solution(int A[][SIZE], int n, int m);
bool primeNumber(int n);
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
bool primeNumber(int n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solution(int A[][SIZE], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (primeNumber(A[i][j]))
            {
                output(i, j);
                return;
            }
        }
    }
}
void output(int i, int j)
{
    cout << i << " " << j << endl;
}