#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Viết chương trình kiểm tra các phần tử có tăng liên tục hay không
*/
void input(int A[], int &n);
bool solution(int A[] , int n);
void output(bool result);
int main()
{
    int A[SIZE];
    int n;
    bool flag;
    input(A, n);
    flag = solution(A,n);
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
bool solution(int A[] , int n)
{
    for(int i =0 ; i<n-1;i++)
    {
        if(A[i] >= A[i+1]) return false;
    }
    return true;
}
void output(bool result)
{
    if(result) cout<<"Mang tang lien tuc";
    else cout<<"Mang khong tang lien tuc";
}
