#include <iostream>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{
	int x, y, r;
    cin >> x >> y >> r;
    int zestaw, a, b;
    cin >>zestaw;
    while (zestaw) 
	{
        cin >> a >> b;
        if (static_cast<float>((a - x))*(a - x) + static_cast<float>((b - y))*(b - y) < static_cast<float>(r*r)) 
		{
            puts("I");
        }
		else if(static_cast<float>((a - x))*(a - x) + static_cast<float>((b - y))*(b - y) > static_cast<float>(r*r)) 
		{
            puts("O");
        }
		else 
		{
            puts("E");
        }
        zestaw--;
    }
    return 0;
}
