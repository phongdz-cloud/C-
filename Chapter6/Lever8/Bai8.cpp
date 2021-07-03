#include <iostream>
#include <cfloat>
#include <math.h>
#define SIZE 100
using namespace std;
/*
Tìm số "âm lớn nhất" trong mảng một chiều các số thực.
 Nếu mảng không có giá trị âm thì trả về giá trị 0.
*/
void input(float A[], int &n);
float solution(float A[], int n);
void output(float result);
int main()
{
    float A[SIZE];
    int n;
    float result;
    input(A, n);
    result = solution(A, n);
    output(result);
    return 0;
}
void input(float A[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
float solution(float A[], int n)
{
    float maxNegative = FLT_MAX * (-1);
    for (int i = 0; i < n; i++)
    {
        if (A[i] > maxNegative && A[i] < 0)
            maxNegative = A[i];
    }
    return (maxNegative != FLT_MAX * (-1)) ? maxNegative : 0;
}
void output(float result)
{
    cout << result;
}
