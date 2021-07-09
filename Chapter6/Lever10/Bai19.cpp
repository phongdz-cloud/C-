#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Kiểm tra dòng thứ k có giảm dần hay không?
*/
void inputMNK(int &n, int &m, int &k);
void inputMatrix(int A[][SIZE], int n, int m);
void output(string s);
string solution(int A[][SIZE], int k, int n, int m);
bool checkValid(int k, int n, int m);
int main()
{
    int A[SIZE][SIZE];
    int n, m, k;
    string result;
    inputMNK(n, m, k);
    inputMatrix(A, n, m);
    result = solution(A, k, n, m);
    output(result);
    return 0;
}
void inputMNK(int &n, int &m, int &k)
{
    cin >> n >> m >> k;
}
void inputMatrix(int A[][SIZE], int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> A[i][j];
}
bool checkValid(int k, int n, int m)
{
    return (k < 0 || m < 0 || n < 0 || k >= n) ? false : true;
}
bool checkRowMatrix(int A[][SIZE], int k, int n, int m)
{
    for (int i = 0; i < m - 1; i++)
    {
        if (A[k][i] < A[k][i + 1])
            return false;
    }
    return true;
}
string solution(int A[][SIZE], int k, int n, int m)
{
    if (checkValid(k, n, m))
    {
        bool result;
        result = checkRowMatrix(A, k, n, m);
        return result ? "Dong co thu tu giam dan" : "Dong khong co thu tu giam dan";
    }
    return "";
}
void output(string s)
{
    if (s != "")
        cout << s;
    else
        cout << "Dao vao khong hop le!";
}