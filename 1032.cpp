#include <cstdio>
#include <cstdlib>

int main (int argc, const char * argv[])
{
	int zestaw;
    int n, x, y;
    scanf("%d\n", &zestaw);
    while (zestaw) 
	{
        scanf("%d %d %d", &n, &x, &y);
        for (int i = 0; i < n; i++)
		{
            if (i % x == 0 && i % y != 0) 
			{
                printf("%d ", i);
            }
        }
        puts("");
        zestaw--;
    }
    return 0;
}
