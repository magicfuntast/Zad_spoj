#include <cstdio>

int main (int argc, const char * argv[])
{
	int zestaw = 0;
    int rozmiar = 0;
    scanf("%d\n", &zestaw);
    while (zestaw) 
	{
        scanf("%d", &rozmiar);
        printf("%d\n", rozmiar*rozmiar);
        zestaw--;
    }
    return 0;
}
