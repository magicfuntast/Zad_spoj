#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main (int argc, const char * argv[])
{
    double a, b, c, delta;
    while (cin >> a >> b >> c) {
        delta = b*b - 4.0*a*c;
        if (delta < 0) {
            puts("0");
        }
        else if (delta == 0) {
            puts("1");
        }
        else
            puts("2");
    }
    return 0;
}
