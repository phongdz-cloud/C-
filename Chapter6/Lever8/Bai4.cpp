#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
Tìm giá trị đầu tiên trong mảng 1 chiều các số nguyên có chữ số đầu tiên là chữ số lẻ (dauledautien)
Nếu trong mảng không tồn tại giá trị như vậy hàm trả về giá trị 0
*/
void input(int A[], int &n);
int solution(int A[], int n);
bool checkOddNumber(int n);
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
bool checkOddNumber(int n)
{
    while (n > 10)
    {
        n /= 10;
    }
    return n % 2 != 0;
}
int solution(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (checkOddNumber(A[i]) == true)
            return A[i];
    }
    return 0;
}
void output(int result)
{
    cout << result;
}
