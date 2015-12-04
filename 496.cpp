#include <cstdio>
#include <cstdlib>

int main (int argc, const char * argv[])
{
    int zestaw, liczba;
    scanf("%d\n", &zestaw);
    while (zestaw) 
	{
        scanf("%d", &liczba);
        if (liczba <= 9) 
		{
            switch (liczba) 
			{
                case 0:
                    printf("0 1\n");
                    break;
                case 1:
                    printf("0 1\n");
                    break;
                case 2:
                    printf("0 2\n");
                    break;
                case 3:
                    printf("0 6\n");
                    break;
                case 4:
                    printf("2 4\n");
                    break;
                case 5:
                    printf("2 0\n");
                    break;
                case 6:
                    printf("2 0\n");
                    break;
                case 7:
                    printf("4 0\n");
                    break;
                case 8:
                    printf("2 0\n");
                    break;
                case 9:
                    printf("8 0\n");
                default:
                    break;
            }
        }
		else
		 {
            printf("0 0\n");
         }
        zestaw--;
    }
    return 0;
}
