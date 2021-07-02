#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
   Tìm "số hoàn thiện đầu tiên" trong mảng một chiều các số nguyên. Nếu mảng không có
   số nguyên tố thì trả về -1;
*/
void input(int A[], int &n);
void output(int result);
int solution(int A[], int n);
bool checkPerfectNumber(int n);
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
        if (checkPerfectNumber(A[i]))
            return A[i];
    }
    return -1;
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
