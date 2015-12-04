#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main (int argc, const char * argv[])
{
	int zestaw, liczb, sum, pozycja;
    float srednia = 0.0, min, help;
    int tab[100] = {0};
    scanf("%d\n", &zestaw);
    while (zestaw) 
	{
        sum = 0;
        srednia = 0.0;
        min = 10000000.0;
        scanf("%d", &liczb);
        for (int i = 0; i < liczb; i++) 
		{
            scanf("%d", &tab[i]);
            sum += tab[i];
        }
        srednia = static_cast<float>(sum) / static_cast<float>(liczb);
        for (int i = 0; i < liczb; i++) 
		{
            help = abs(tab[i] - srednia);
            if (help < min) 
			{
                min = help;
                pozycja = i;
            }
        }
        printf("%d\n", tab[pozycja]);
        zestaw--;
    }
    return 0;
}
