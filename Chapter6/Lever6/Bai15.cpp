#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
   * Viết hàm tìm "số chẵn đầu tiên" trong mảng các số nguyên.
   nếu mảng không có giá trị chẵn thì hàm sẽ trả về giá trị không chẵn là -1
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
int solution(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0)
            return A[i];
    }
    return -1;
}
void output(int result)
{
    cout << result;
}
