#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
   Tìm vị trí số nhỏ nhất trong một mảng số nguyên
*/
void input(int A[], int &n);
int findMinArray(int A[], int n);
void output(int result);
int main()
{
    int A[SIZE];
    int n, result;
    input(A, n);
    result = findMinArray(A, n);
    output(result);
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
int findMinArray(int A[], int n)
{
    int min = A[0];
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
            index = i;
        }
    }
    return index;
}
void output(int result)
{
    cout << result;
}
