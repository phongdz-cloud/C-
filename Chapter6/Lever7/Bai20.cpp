#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
  Kiểm tra mảng một chiều các số thực có đối xứng hay không
*/
void input(float A[], int &n);
bool solution(float A[], int n);
void output(bool result);
int main()
{
    float A[SIZE];
    int n;
    bool flag;
    input(A, n);
    flag = solution(A, n);
    output(flag);
    return 0;
}
void input(float A[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
bool solution(float A[], int n)
{
    int i = 0;
    int j = n - 1;
    while (j > i)
    {
        if (A[i++] != A[j--])
            return false;
    }
    return true;
}
void output(bool result)
{
    if (result)
        cout << "Mang so thuc doi xung";
    else
        cout << "Mang so thuc khong doi xung";
}
