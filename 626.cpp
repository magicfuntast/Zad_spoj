#include <cstdio>
#include <cstdlib>

int main (int argc, const char * argv[])
{  
    int zestaw, obzartuchy, ciastekPudelku, sekundy, ciastek, sum = 0, wynik;
    sekundy = 60*60*24;
    scanf("%d\n", &zestaw);
    while (zestaw) 
	{
        scanf("%d %d", &obzartuchy, &ciastekPudelku);
        sum = 0;
        while (obzartuchy) 
		{
            scanf("%d", &ciastek);
            sum += sekundy / ciastek;
            obzartuchy--;
        }
        if (sum % ciastekPudelku != 0) 
		{
            sum = sum + (ciastekPudelku - sum % ciastekPudelku);
            wynik = sum / ciastekPudelku;
        }
		else 
			{
            	wynik = sum / ciastekPudelku;   
        	}
        printf("%d\n", wynik);
        zestaw--;
    }
    return 0;
}
