#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
Viết chương trình tìm và đổi chỗ phần tử lớn nhất và phần tử nhỏ nhất trong mảng
*/
void input(int A[], int &n);
void swap(int &a, int &b);
void solution(int A[], int n);
void output(int A[], int n);
int main()
{
    int A[SIZE];
    int n;
    input(A, n);
    solution(A, n);
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
void solution(int A[], int n)
{
    int min, max, indexMin, indexMax;
    indexMin = indexMax = 0;
    min = max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
            indexMin = i;
        }
        if (A[i] > max)
        {
            max = A[i];
            indexMax = i;
        }
    }
    swap(A[indexMin], A[indexMax]);
}
void output(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
