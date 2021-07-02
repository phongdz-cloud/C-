#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Nhập vào một mảng số nguyên. Nhập tiếp một số nguyên x.
    Cho biết vị trí cuối cùng(tính từ đầu mảng) mà x có trong mảng vừa nhập. Nếu không có x thì xuất -1;
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
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == x)
            index = i;
    }
    if (index != -1)
        return index;
    return -1;
}
void output(int result)
{
    cout << result;
}
