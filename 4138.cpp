#include <iostream>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{
	int zestaw, c, k, w;
    cin >> zestaw;
    while (zestaw) 
	{
        cin >> c >> k >> w;
        if (c*w <= k) 
		{
            puts("yes");
        }
		else 
		{
            puts("no");
        }
        zestaw--;
    }
    return 0;
}
