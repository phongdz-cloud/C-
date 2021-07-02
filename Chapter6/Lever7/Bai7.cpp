#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
   Viết chương trình tính tổng số chính phương trong mảng n phần tử
*/
void input(int A[], int &n);
void output(int result);
int solution(int A[], int n);
bool checkSquareNumber(int n);
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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (checkSquareNumber(A[i]))
            sum += A[i];
    }
    return sum;
}
bool checkSquareNumber(int n)
{
    int temp = sqrt(n);
    if (temp * temp == n)
        return true;
    return false;
}
