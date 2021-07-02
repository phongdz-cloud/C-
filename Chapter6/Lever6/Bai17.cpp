#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
   Viết chương trình tìm số lớn nhất trong một mảng số nguyên
*/
void input(int A[], int &n);
int findMaxArray(int A[], int n);
void output(int result);
int main()
{
    int A[SIZE];
    int n;
    int result;
    input(A, n);
    result = findMaxArray(A, n);
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
int findMaxArray(int A[], int n)
{
    int max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
            max = A[i];
    }
    return max;
}
void output(int result)
{
    cout << result;
}
