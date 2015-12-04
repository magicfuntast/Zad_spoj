#include <iostream>
#include <cstdio>

using namespace std;
int main (int argc, const char * argv[])
{
	int liczb;
    long int liczba;
    long int tab[1000] = {0};
    scanf("%d\n", &liczb);
    for (int i = 0; i < liczb; i++) 
	{
        cin >> tab[i];
    }
    char c;
    
    cin >> c >> liczba;
    
    if (c == '>') 
	{
        for (int i = 0; i < liczb; i++) 
		{
            if (tab[i] > liczba) 
			{
                printf("%li\n", tab[i]);
            }
        }
    }
    else
	{
        for (int i = 0; i < liczb; i++) 
		{
            if (tab[i] < liczba)
			{
                printf("%li\n", tab[i]);
            }
        }
    }
    return 0;
}
