#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Nhập vào một mảng số nguyên. Nhập tiếp một số nguyên x.
    Cho biết x có trong mảng vừa nhập hay không? Nếu có xuất 1, nếu không xuất số 0
*/
void input(int A[], int &n, int &x);
int solution(int A[], int n, int x);
void output(int result);
int main()
{
    int A[SIZE];
    int n, x, result;
    input(A, n, x);
    result = solution(A, n, x);
    output(result);
    return 0;
}
void input(int A[], int &n, int &x)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cin >> x;
}
int solution(int A[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] == x)
            return 1;
    }
    return 0;
}
void output(int result)
{
    cout << result;
}
