#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
Ta định nghĩa 1 mảng được gọi là dạng sóng khi phần tử có trị số i
lớn hơn hoặc nhỏ hơn 2 phần tử xung quanh. Hãy viết hàm kiểm tra mảng có dạng sóng không
*/
void input(int A[], int &n);
int solution(int A[], int n);
bool checkWave(int a, int b, int c);
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
bool checkWave(int a, int b, int c)
{
    return ((a > b && a > c) || (a < b && a < c));
}
int solution(int A[], int n)
{
    if (n < 3)
        return 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (checkWave(A[i], A[i - 1], A[i + 1]))
            return A[i];
    }
    return 0;
}
void output(int result)
{
    cout << result;
}
