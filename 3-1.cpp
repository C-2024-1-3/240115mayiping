#include <iostream>
using namespace std;

int gys(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void gbs(int a, int b, int &r2)
{
    r2 = a * b / gys(a, b);
}

int main()
{
    int m, n, r1, r2;
    cin >> m >> n;
    r1 = gys(m, n);
    gbs(m, n, r2);
    cout << "gcd:" << r1 << endl;
    cout << "lcm:" << r2 << endl;
    system("pause");
    return 0;
}
