#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Nhập vào mảng các số thực. Tính tổng các phần tử trong mảng
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
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }
    return sum;
}
void output(float result)
{
    cout << result;
}
