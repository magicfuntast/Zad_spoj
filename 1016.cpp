#include <cstdio>
#include <cstdlib>

int main (int argc, const char * argv[])
{
	int a, b, zestaw;
    scanf("%d\n", &zestaw);
    while (zestaw) 
	{
        scanf("%d %d", &a, &b);
        printf("%d\n", 2*a*b/(a+b));
        zestaw--;
    }
    return 0;
}
