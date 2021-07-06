#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
// Hãy đưa các số chẵn trong mảng về đầu mảng, các số lẻ về cuối mảng
// và các phần tử 0 nằm giữa
void input(int A[], int &n);
void swap(int &a, int &b);
int checkEvenArray(int A[], int n, int index);
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
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int checkEvenArray(int A[], int n, int index)
{
    int k = -1;
    for (int i = index + 1; i < n; i++)
    {
        if (A[i] % 2 == 0 && A[i] != 0)
            return i;
        if (A[i] == 0)
            k = i;
    }
    return k;
}
void solution(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 != 0 || A[i] == 0)
        {
            int index = checkEvenArray(A, n, i);
            if (index != -1)
                swap(A[i], A[index]);
        }
    }
}
void output(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
