#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
  Kiểm tra mảng các số nguyên có toàn số chẵn hay không? Nếu có tồn tại giá trị lẻ trả về giá
  0, ngược lại trả về giá trị 1
*/
void input(int A[], int &n);
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
int solution(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 != 0)
            return 0;
    }
    return 1;
}
void output(int result)
{
    cout << result;
}
