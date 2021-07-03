#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Tìm "Số nguyên tố lớn nhất" trong mảng một chiều các số nguyên. Nếu mảng không có
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
int solution(int A[], int n)
{
    int maxPrime = 0;
    for (int i = 0; i < n; i++)
    {
        if (checkPrimeNumber(A[i]) && A[i] > maxPrime)
            maxPrime = A[i];
    }
    return maxPrime;
}
void output(int result)
{
    cout << result;
}
