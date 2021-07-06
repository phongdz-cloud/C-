#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
// Cho mảng A gồm có n phần tử. Viết chương trình tìm số lớn thứ hai trong mảng.
// lưu ý, chỉ duyệt mảng một lần
void input(int A[], int &n);
int findMaxSecondArray(int A[], int n);
void output(int result);
int main()
{
    int A[SIZE];
    int n, result;
    input(A, n);
    result = findMaxSecondArray(A, n);
    output(result);
}
void input(int A[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
int findMaxSecondArray(int A[], int n)
{
    int max, maxSecond, temp;
    max = A[0];
    maxSecond = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            temp = max;
            max = A[i];
            maxSecond = temp;
        }
        if (A[i] > maxSecond && A[i] < max)
            maxSecond = A[i];
    }
    return maxSecond != INT32_MIN ? maxSecond : -1;
}
void output(int result)
{
    if (result != -1)
        cout << result;
    else
        cout << "Khong co so lon nhi trong mang!";
}
