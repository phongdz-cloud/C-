#include <iostream>
#define SIZE 100
using namespace std;
/*
  Tính tổng các phần tử "cực trị" trong mảng. Một phần tử được gọi là cực trị
  khi nó lớn hơn hoặc nhỏ hơn các phần tử xung quanh nó
*/
void input(int A[], int &n);
bool checkValid(int a, int b);
int solution(int A[], int nA);
void output(int result);
int main()
{
    int A[SIZE];
    int nA, result;
    input(A, nA);
    result = solution(A, nA);
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
bool checkValid(int a, int b)
{
    return ((a > b) || (a < b));
}
int solution(int A[], int nA)
{
    int sum;
    sum = 0;
    if (nA > 1)
    {
        if (checkValid(A[0], A[1]))
            sum += A[0];
        for (int i = 1; i < nA - 1; i++)
        {
            if (checkValid(A[i], A[i - 1]) || checkValid(A[i], A[i + 1]))
                sum += A[i];
        }
        if (checkValid(A[nA - 1], A[nA - 2]))
            sum += A[nA - 1];
    }
    return sum;
}
void output(int result)
{
    cout << result;
}
