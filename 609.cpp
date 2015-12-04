#include <iostream>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{
	double r, d;
    double pi = 3.141592654;
    cin >> r >> d;
    r *= r;
    d *= d;
    printf("%.2lf\n", (r - d/4)*pi);
    return 0;
}
