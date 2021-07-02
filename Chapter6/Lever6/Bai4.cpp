#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Viết chương trình tính trung bình cộng của số chia hết cho 5
*/
void input(int A[], int &n);
float solution(int A[], int n);
void output(float result);
int main()
{
    int A[SIZE];
    int n;
    float result;
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
float solution(int A[], int n)
{
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] % 5 == 0)
        {
            sum += A[i];
            count++;
        }
    }
    if (count != 0)
        return (sum * 1.0) / count;
    return -1;
}
void output(float result)
{
    cout << result;
}
