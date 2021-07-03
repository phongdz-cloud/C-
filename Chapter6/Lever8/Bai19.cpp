#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Cho 2 mảng A,B có thứ tự tăng dần. Thực hiện việc trộn 2 mảng A và B
    để tạo ra mảng cũng có thứ tự tăng dần
*/
void input(int A[], int B[], int &n, int &nC);
void swap(int &a, int &b);
void sortArray(int A[], int n);
int checkIndex(int C[], int n, int x);
void Insert(int A[], int &n, int index, int x);
void mergeArray(int A[], int B[], int C[], int n, int &nC);
void output(int C[], int n);
int main()
{
    int A[SIZE], B[SIZE], C[2 * SIZE];
    int n, nC;
    input(A, B, n, nC);
    sortArray(A, n);
    sortArray(B, n);
    mergeArray(A, B, C, n, nC);
    output(C, nC);
    return 0;
}
void input(int A[], int B[], int &n, int &nC)
{
    cin >> n;
    nC = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
}
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void sortArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] > A[j])
            {
                swap(A[i], A[j]);
            }
        }
    }
}

int checkIndex(int C[], int n, int x)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (x >= C[i] && x <= C[i + 1])
            return i;
    }
    return n - 1;
}
void Insert(int A[], int &n, int index, int x)
{
    for (int i = n - 1; i > index; i--)
    {
        A[i + 1] = A[i];
    }
    A[index + 1] = x;
    n++;
}
void mergeArray(int A[], int B[], int C[], int n, int &nC)
{
    if (A[0] > B[0])
        swap(A[0], B[0]);
    C[nC++] = A[0];
    C[nC++] = B[0];
    for (int i = 1; i < n; i++)
    {
        Insert(C, nC, checkIndex(C, nC, A[i]), A[i]);
        Insert(C, nC, checkIndex(C, nC, B[i]), B[i]);
    }
}
void output(int C[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << C[i] << " ";
    }
}
