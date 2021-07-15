#include <iostream>
using namespace std;
int result;

int Num(int x, int y) {
    y++;
    if (y % 3 == 0)
    {
        printf("%dBar\n", y);
    }
    else if (y % 3 != 0)
    {
        printf("%dFoo\n", y);
    }
    if (y != x)
    {
        result = Num(x, y);
        return result;
    }

}

int main(void) {
    int a, b = 0;
    cin >> a;
    Num(a, b);
    return 0;
}