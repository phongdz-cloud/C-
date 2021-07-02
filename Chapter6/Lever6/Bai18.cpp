#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
   Viết chương trình đảo ngược mảng ban đầu
*/
void input(int A[], int &n);
void swap(int &a, int &b);
void reverseArray(int A[], int n);
void output(int A[], int n);
int main()
{
    int A[SIZE];
    int n;
    input(A, n);
    reverseArray(A, n);
    output(A, n);
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
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void reverseArray(int A[], int n)
{
    int i = 0;
    int j = n - 1;
    while (j > i)
    {
        swap(A[i++], A[j--]);
    }
}
void output(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
