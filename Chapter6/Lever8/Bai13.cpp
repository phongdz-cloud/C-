#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Viết chương trình tìm UCLN của một mảng n phần tử nguyên dương
*/
void input(int A[], int &n);
int gcd(int a, int b);
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
int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a -= b;
        if (a < b)
            b -= a;
    }
    return a;
}
int solution(int A[], int n)
{
    if (n > 1)
    {
        int u;
        u = gcd(abs(A[0]), abs(A[1]));
        for (int i = 1; i < n - 1; i++)
        {
            u = gcd(u, abs(A[i + 1]));
        }
        return u;
    }
    return 1;
}
void output(int result)
{
    cout << result;
}
