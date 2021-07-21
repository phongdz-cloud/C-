#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
   Tìm "số nguyên dương cuối cùng" trong mảng số nguyên có n phần tử.
    Nếu mảng không có giá trị dương thì trả về giá trị -1
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
int solution(int A[], int n)//note
{
    int positiveNumber = -1;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > 0)
            positiveNumber = A[i];
    }
    if (positiveNumber != -1)
        return positiveNumber;
    return -1;
}
void output(int result)
{
    cout << result;
}
