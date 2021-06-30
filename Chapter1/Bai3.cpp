#include <iostream>
using namespace std;
//Nhập vào chiều dài và chiều rộng (số thực) một hình chữ nhật, xuất ra chu vi của hình chữ nhật
//đó (lấy hai chũ số lẻ)
void input(float &width, float &height);
void output(float result);
float solution(float width, float height);
int main()
{
    float width, height, result;
    input(width, height);
    result = solution(width, height);
    return 0;
}
void input(float &width, float &height)
{
    cin >> width >> height;
}
float solution(float width, float height)
{
    if (width <= 0 || height <= 0)
        return -1;
    return (width + height) * 2;
}
void output(float result)
{
    printf("%.2f", result);
}
