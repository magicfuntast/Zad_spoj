#include <cstdlib>
#include <cstdio>

int main (int argc, const char * argv[])
{
	int zestaw;
    int tab[100] = {0};
    int liczb;
    scanf("%d\n", &zestaw);
    while (zestaw) 
	{
        scanf("%d", &liczb);
        for (int i = 0; i < liczb; i++) 
		{
            scanf("%d", &tab[i]);
        }
        for (int i = liczb - 1; i >= 0; i--) 
		{
            printf("%d ", tab[i]);
        }
        printf("\n");
        zestaw--;
    }
    return 0;
}

