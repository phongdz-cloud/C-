#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Kiểm tra mảng số nguyên có tồn tại giá trị 0 hay không? Nếu không tồn tại giá trị 0 thì trả vể giá trị 0
    , ngược lại trả về 1
*/
void input(int A[], int &n);
int checkZero(int A[], int n);
void output(int result);
int main()
{
    int A[SIZE];
    int n, result;
    input(A, n);
    result = checkZero(A, n);
    output(result);
    return 0;
}
int checkZero(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 0)
            return 1;
    }
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
