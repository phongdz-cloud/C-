#include <iostream>
#include <cfloat>
#include <math.h>
#define SIZE 100
using namespace std;
/*
   Cho mảng một chiều các số thực và một số thực x. Hãy viết hàm tìm giá trị
   âm cuối cùng lớn hơn giá trị x. Nếu mảng không có giá trị thỏa
   thì hàm trả về giá trị không chẵn là 0
*/
void input(float A[], int &n, float &x);
float solution(float A[], int n, float x);
void output(float result);
int main()
{
    float A[SIZE];
    int n;
    float x, result;
    input(A, n, x);
    result = solution(A, n, x);
    output(result);
    return 0;
}
void input(float A[], int &n, float &x)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cin >> x;
}
float solution(float A[], int n, float x)
{
    float maxNegative = FLT_MAX * (-1);
    for (int i = 0; i < n; i++)
    {
        if (A[i] < 0 && A[i] > x && A[i] > maxNegative)
            maxNegative = A[i];
    }
    return maxNegative != FLT_MAX * (-1) ? maxNegative : 0;
}
void output(float result)
{
    cout << result;
}
