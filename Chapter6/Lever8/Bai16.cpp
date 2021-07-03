#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
   Cho mảng A có n phần tử. Viết chương trình minh họa các thao tác cập nhật
   và xóa phần tử tại vị trí i trong mảng. Thực hiện việc 
   chèn thêm một số nguyên x sau phần tử i (0<=i<n)
*/
void input(int A[], int &n);
bool checkValid(int n, int index);
void update(int A[], int n);
void insert(int A[], int &n);
void remove(int A[], int &n);
void output(int A[], int n);
int main()
{
    int A[SIZE];
    int n;
    input(A, n);
    //update(A,n);
    //insert(A,n);
    remove(A, n);
    output(A, n);
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
bool checkValid(int n, int index)
{
    return index >= 0 && index < n;
}
void update(int A[], int n)
{
    int index, x;
    cin >> index >> x;
    if (checkValid(n, index))
    {
        A[index] = x;
    }
}
void insert(int A[], int &n)
{
    int index, x;
    cin >> index >> x;
    if (checkValid(n, index))
    {
        for (int i = n - 1; i > index; i--)
        {
            A[i + 1] = A[i];
        }
        A[index + 1] = x;
        n++;
    }
}
void remove(int A[], int &n)
{
    int index;
    cin >> index;
    if (checkValid(n, index))
    {
        for (int i = index; i < n - 1; i++)
        {
            A[i] = A[i + 1];
        }
        n--;
    }
}
void output(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
