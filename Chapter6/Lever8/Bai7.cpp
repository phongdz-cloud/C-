#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
Viết chương trình tìm số âm lớn nhất trong một mảng các số nguyên
*/
void input(int A[], int &n);
int solution(int A[], int n);
void output(int result);
int main()
{
    int A[SIZE];
    int n, result;
    input(A, n);
    result = solution(A, n);
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
int solution(int A[], int n)
{
    int maxNegative = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > maxNegative && A[i] < 0)
            maxNegative = A[i];
    }
    return maxNegative;
}
void output(int result)
{
    if (result != INT32_MIN)
    {
        cout << result;
    }
    else
        cout << "Mang khong ton tai so am!";
}
