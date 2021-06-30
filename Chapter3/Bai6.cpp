#include <iostream>
#include <math.h>
using namespace std;
//Nhập vào 3 số thực. Cho biết 3 số vừa nhập có phải là độ dài cạnh của 1 tam giác nào đó hay không, nếu phải thì
// thì cho biết đó là loại tam giác gì? (Đều, vuông cân, vuông, cân, thường)
void input(float &a, float &b, float &c);
bool checkTriangle(float x, float y, float z);
void output(float x, float y, float z, bool flag);
int main()
{
    float a, b, c;
    bool flag;
    input(a, b, c);
    flag = checkTriangle(a, b, c);
    output(a, b, c, flag);
    return 0;
}
void input(float &a, float &b, float &c)
{
    cin >> a >> b >> c;
}
bool checkTriangle(float x, float y, float z)
{
    if (x > 0 && y > 0 && z > 0)
    {
        if ((x + y > z) && (x + z > y) && (y + z > x))
            return true;
    }
    return false;
}
void output(float a, float b, float c, bool flag)
{
    if (flag == false)
    {
        cout << "Ba canh vua nhap khong tao thanh mot tam giac!";
    }
    else
    {
        if (a == b && b == c)
            cout << "Tam giac deu";
        else if ((b * b + c * c - a * a < 0.0001) || (a * a + c * c - b * b < 0.0001) || (a * a + b * b - c * c < 0.0001))
        {
            if (a == b || a == c || b == c)
                cout << "Tam giac vuong can";
            else
                cout << "Tam giac vuong";
        }
        else if (a == b || a == c || b == c)
            cout << "Tam giac can";
        else
            cout << "Tam giac thuong";
    }
}
