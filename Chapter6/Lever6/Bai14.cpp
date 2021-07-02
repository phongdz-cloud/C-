#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Tìm giá trị âm đầu tiên trong mảng số thực. Nếu mảng không có giá trị âm thì trả về
    giá trị không âm là giá trị 1
*/
void input(float A[], int &n);
float solution(float A[], int n);
void output(float result);
int main()
{
    float A[SIZE];
    int n;
    float result;
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
float solution(float A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] < 0)
            return A[i];
    }
    return 1;
}
void output(float result)
{
    cout << result;
}
