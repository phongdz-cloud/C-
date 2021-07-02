#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Hãy liệt kê các giá trị trong mảng 1 chiều có số nguyên có chữ số đầu là số chẵn
*/
void input(int A[], int &n);
bool findEvenNumber(int n);
void solution(int A[], int B[], int n, int &nB);
void output(int B[], int nB);
int main()
{
    int A[SIZE], B[SIZE];
    int n, nB;
    input(A, n);
    solution(A, B, n, nB);
    output(B, nB);
    return 0;
}
void input(int A[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
bool findEvenNumber(int n)
{
    while (n > 10)
        n /= 10;
    return n % 2 == 0 ? true : false;
}
void solution(int A[], int B[], int n, int &nB)
{
    nB = 0;
    for (int i = 0; i < n; i++)
    {
        if (findEvenNumber(A[i]) && A[i] != 0)
        {
            B[nB++] = A[i];
        }
    }
}
void output(int B[], int nB)
{
    for (int i = 0; i < nB; i++)
    {
        cout << B[i] << " ";
    }
}
