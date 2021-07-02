#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Viết chương trình tính tổng các số chẵn trong một mảng các số nguyên không âm
*/
void input(int A[], int &n);
int solution(int A[], int n);
void output(int result);
int main()
{
    int A[SIZE];
    int n;
    int result;
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
int solution(int A[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0 && A[i] > 0)
        {
            sum += A[i];
        }
    }
    return sum;
}
void output(int result)
{
    cout << result;
}
