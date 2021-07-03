#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
  Ta định nghĩa 1 mảng có tính chất chẵn lẻ, khi tổng của 2 phần tử liên tiếp luôn là số lẻ.
  Viết hàm kiểm tra mảng có tính chất chẵn lẻ hay không
*/
void input(int A[], int &n);
bool solution(int A[], int n);
void output(bool result);
int main()
{
    int A[SIZE];
    int n;
    bool flag;
    input(A, n);
    flag = solution(A, n);
    output(flag);
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
bool solution(int A[], int n)
{
    if (n == 1)
        return false;
    for (int i = 0; i < n - 1; i++)
    {
        if ((A[i] + A[i + 1]) % 2 == 0)
            return false;
    }
    return true;
}
void output(bool result)
{
    if (result)
        cout << "Mang co tinh chat chan le";
    else
        cout << "Mang khong co tinh chat chan le";
}
