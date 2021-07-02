#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
   Tìm "số nguyên tố đầu tiên" trong mảng một chiều các số nguyên. Nếu mảng không có
   số nguyên tố thì trả về -1;
*/
void input(int A[], int &n);
void output(int result);
int solution(int A[], int n);
bool checkPrime(int n);
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
void output(int result)
{
    cout << result;
}
int solution(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (checkPrime(A[i]))
            return A[i];
    }
    return -1;
}
bool checkPrime(int n)
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
