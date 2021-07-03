#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Cho mảng A có n phần tử đã có thứ tự tăng dần và một phần tử x.
    Thực hiện chèn x vào mảng sao cho đảm bảo mảng vẫn có thứ tự tăng dần
*/
void input(int A[], int &n, int &x);
void swap(int &a, int &b);
void sortArray(int A[], int n);
void solution(int A[], int &n, int x);
void insert(int A[], int &n, int index, int x);
void output(int A[], int n);
int main()
{
    int A[SIZE];
    int n, x;
    input(A, n, x);
    sortArray(A, n);
    solution(A, n, x);
    output(A, n);
    return 0;
}
void input(int A[], int &n, int &x)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cin >> x;
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
void solution(int A[], int &n, int x)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (x >= A[i] && x <= A[i + 1])
        {
            insert(A, n, i, x);
            return;
        }
    }
}
void insert(int A[], int &n, int index, int x)
{
    for (int i = n - 1; i > index; i--)
    {
        A[i + 1] = A[i];
    }
    A[index + 1] = x;
    n++;
}
void output(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
