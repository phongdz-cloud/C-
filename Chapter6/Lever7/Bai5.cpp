#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
   Viết chương trình đếm số nguyên tố có trong một mảng các số nguyên có 
   n phần tử
*/
void input(int A[], int &n);
void output(int result);
int solution(int A[], int n);
bool checkPrimeNumber(int n);
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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (checkPrimeNumber(A[i]))
            count++;
    }
    return count;
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
