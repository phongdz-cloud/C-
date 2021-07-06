#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
//Hãy "dịch phải xoay vòng" k lần phần tử trong mảng
void input(int A[], int &n, int &k);
void rotateRight(int A[], int n);
void solution(int A[], int n, int k);
void output(int A[], int n);
int main()
{
    int A[SIZE];
    int n, k;
    input(A, n, k);
    solution(A, n, k);
    output(A, n);
}
void input(int A[], int &n, int &k)
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
void rotateRight(int A[], int n)
{
    int x;
    x = A[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        A[i] = A[i - 1];
    }
    A[0] = x;
}
void solution(int A[], int n, int k)
{
    while (k != 0)
    {
        rotateRight(A, n);
        k--;
    }
}
void output(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
