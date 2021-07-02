#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Viết chương trình đếm các số âm trong một mảng các số nguyên
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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] < 0)
        {
            count++;
        }
    }
    return count;
}
void output(int result)
{
    cout << result;
}
