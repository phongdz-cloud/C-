#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
  Kiểm tra mảng số nguyên có tồn tại 2 giá trị 0 liên tiếp hay không?
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

    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] == 0 && A[i + 1] == 0)
            return true;
    }
    return false;
}
void output(bool result)
{
    if (result)
        cout << "Mang ton tai 2 gia tri 0 lien tiep";
    else
        cout << "Mang khong ton tai 2 gia tri 0 lien tiep";
}
