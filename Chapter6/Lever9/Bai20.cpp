#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Cho mảng A có nA phần tử và mảng B có nB phần tử. Tạo mảng C xen kẽ 1 phần tử mảng A
    tới phần tử mảng B. các phần tử dư ra (không còn xen kẽ được nữa) thì nối hết vào đuôi
    mảng C
*/
void input(int A[], int &n);
void solution(int A[], int B[], int C[], int nA, int nB, int &nC);
void output(int A[], int n);
int main()
{
    int A[SIZE], B[SIZE], C[2 * SIZE];
    int nA, nB, nC;
    input(A, nA);
    input(B, nB);
    solution(A, B, C, nA, nB, nC);
    output(C, nC);
}
void input(int A[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
void solution(int A[], int B[], int C[], int nA, int nB, int &nC)
{
    nC = 0;
    int i, j;
    i = j = 0;
    while (i < nA && j < nB)
    {
        C[nC++] = A[i++];
        C[nC++] = B[j++];
    }
    while (i < nA)
    {
        C[nC++] = A[i++];
    }
    while (j < nB)
    {
        C[nC++] = B[j++];
    }
}
void output(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
