#include <cstdio>
#include <cstdlib>

int main (int argc, const char * argv[])
{
    int zestaw, liczb, dane, suma;
    scanf("%d\n", &zestaw);
    
    while (zestaw) 
	{
        suma = 0;
        scanf("%d", &liczb);
        for (int i = 0; i < liczb; i++) 
		
		{
            scanf("%d", &dane);
            suma = suma + dane;
        }
        printf("%d\n", suma);
        zestaw--;
    }
    return 0;
}
