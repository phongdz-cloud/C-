#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Tìm "số hoàn thiện nhỏ nhất" trong mảng một chiều các số nguyên. Nếu mảng không có
    số nguyên tố thì trả về số 0
*/
void input(int A[], int &n);
int solution(int A[], int n);
bool checkPrimeNumber(int n);
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
bool checkPerfectNumber(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        return true;
    return false;
}
int solution(int A[], int n)
{
    int minPerfectNumber = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        if (checkPerfectNumber(A[i]) && A[i] < minPerfectNumber)
            minPerfectNumber = A[i];
    }
    return minPerfectNumber != INT32_MAX ? minPerfectNumber : 0;
}
void output(int result)
{
    cout << result;
}
