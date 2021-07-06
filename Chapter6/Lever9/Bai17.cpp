#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
//Hãy "dịch trái xoay vòng" các phần tử trong mảng
void input(int A[], int &n);
void rotateLeft(int A[], int n);
void solution(int A[], int n);
void output(int A[], int n);
int main()
{
    int A[SIZE];
    int n;
    input(A, n);
    solution(A, n);
    output(A, n);
}
void input(int A[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
void rotateLeft(int A[], int n)
{
    int x;
    x = A[0];
    for (int i = 0; i < n - 1; i++)
    {
        A[i] = A[i + 1];
    }
    A[n - 1] = x;
}
void solution(int A[], int n)
{
    rotateLeft(A, n);
}
void output(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
