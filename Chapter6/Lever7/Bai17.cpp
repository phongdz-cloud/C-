#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
  Viết chương trình kiểm tra các phần tử trong một mảng có gồm toàn các số hoàn hảo không
*/
void input(int A[], int &n);
bool solution(int A[], int n);
bool checkPerfectNumber(int n);
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
bool checkPerfectNumber(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        return true;
    return false;
}
bool solution(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (checkPerfectNumber(A[i]) == false)
            return false;
    }
    return true;
}
void output(bool result)
{
    if (result)
        cout << "Mang gom toan cac so hoan hao";
    else
        cout << "Mang khong gom toan cac so hoan hao";
}
