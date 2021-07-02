#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    viết chương trình tính trung bình cộng của một mảng số nguyên N
*/
void input(int A[], int &n);
float solution(int A[], int n);
void output(float result);
int main()
{
    int A[SIZE];
    int n;
    float result;
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
float solution(int A[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }
    return (sum * 1.0) / n;
}
void output(float result)
{
    cout << result;
}
