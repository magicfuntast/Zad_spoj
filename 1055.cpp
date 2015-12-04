#include <cstdio>
#include <cstdlib>

int main (void)
{
    int zestaw = 0;
    int dlugoscCiagu = 0;
    
    scanf("%d\n", &zestaw);
    while (zestaw) 
	{
        
        scanf("%d", &dlugoscCiagu);
        int *tab = new int[dlugoscCiagu];
        for (int i = 0; i < dlugoscCiagu; i++) 
		{
            scanf("%d", &tab[i]);
        }
        for (int i = 0; i < dlugoscCiagu; i++) 
		{
            if (i % 2 != 0) 
			{
                printf("%d ", tab[i]);
            }
        }
        for (int i = 0; i < dlugoscCiagu; i++) 
		{
            if (i % 2 == 0) 
			{
                printf("%d ", tab[i]);
            }
        }
        printf("\n");
        zestaw--;
    }
    return 0;
}
