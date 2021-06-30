#include <iostream>
using namespace std;
// Nhập vào 3 số thực a,b,c. Kiểm tra xem a,b,c có phải độ dài 3 cạnh của một tam giác nào đó không?
void input(float &x, float &y, float &z);
bool solution(float x, float y, float z);
void output(bool result);
float main()
{
    float x, y, z;
    bool result;
    input(x, y, z);
    output(result);
    return 0;
}
void input(float &x, float &y, float &z)
{
    cin >> x >> y >> z;
}
bool solution(float x, float y, float z)
{
    if (x > 0 && y > 0 && z > 0)
    {
        if ((x + y > z) && (x + z > y) && (y + z > x))
            return true;
    }
    return false;
}
void output(bool result)
{
    if (result)
        cout << "Ba canh da cho lap thanh mot tam giac";
    else
        cout << "Ba canh da cho khong lap thanh mot tam giac";
}