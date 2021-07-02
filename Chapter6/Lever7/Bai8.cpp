#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
   Viết chương trình tính trung bình cộng các số nguyên tố trong mảng
*/
void input(int A[], int &n);
void output(float result);
float solution(int A[], int n);
bool checkPrimeNumber(int n);
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
void output(float result)
{
    cout << result;
}
float solution(int A[], int n)
{
    float sum, count;
    sum = count = 0;
    for (int i = 0; i < n; i++)
    {
        if (checkPrimeNumber(A[i]))
        {
            sum += A[i];
            count++;
        }
    }
    return (sum * 1.0) / count;
}
bool checkPrimeNumber(int n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
