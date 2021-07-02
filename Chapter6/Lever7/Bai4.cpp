#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
   Tìm "hoàn thiện cuối cùng" trong mảng một chiều các số nguyên. Nếu mảng không có
   số hoàn thiện thì trả về -1;
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
    int findLastPerfectNumber = -1;
    for (int i = 0; i < n; i++)
    {
        if (checkPerfectNumber(A[i]))
            findLastPerfectNumber = A[i];
    }
    if (findLastPerfectNumber != -1)
        return findLastPerfectNumber;
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
