#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
  Cho mảng một chiều các số nguyên. Hãy viết hàm tìm giá trị đầu tiên thỏa mãn
  tinh chất số gánh. (Ví dụ giá trị 12321)
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
bool checkReverseNumber(int n)
{
    int rev = 0;
    int x = n;
    int temp;
    while (n > 0)
    {
        temp = n % 10;
        n /= 10;
        rev = rev * 10 + temp;
    }
    return rev == x;
}
int solution(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (checkReverseNumber(A[i]) == true)
            return A[i];
    }
    return -1;
}
void output(int result)
{
    cout<<result;
}
