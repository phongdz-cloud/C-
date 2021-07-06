#include <iostream>
#define SIZE 100
using namespace std;
/*
  Đếm số lượng giá trị lớn nhất có trong mảng 1 chiều các số thực
*/
void input(float A[], int &n);
float findMaxArray(float A[], int n);
int solution(float A[], int n);
void output(int result);
int main()
{
    float A[SIZE];
    int n, result;
    input(A, n);
    result = solution(A, n);
    output(result);
    return 0;
}
void input(float A[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
float findMaxArray(float A[], int n)
{
    float max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
            max = A[i];
    }
    return max;
}
int solution(float A[], int n)
{
    float max = findMaxArray(A, n);
    int count;
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (max == A[i])
            count++;
    }
    return count;
}
void output(int result)
{
    cout << result;
}
