#include <cstdio>
#include <cstdlib>

int nwd(int a, int b)
{
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
        
    }
    return a;
}

int main (int argc, const char * argv[])
{
	 int zestaw, a, b;
    scanf("%d", &zestaw);
    while (zestaw) 
	{
        scanf("%d %d", &a, &b);
        printf("%d\n", nwd(a, b)); 
        zestaw--;
    }
    return 0;
}

