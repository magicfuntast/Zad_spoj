#include <iostream>
#include <cstdio>

using namespace std;

long long int kadane(long long int tab[], int n)
{
    long long int maximum = 0;
    long long int j = 0;
    for (int i = 0; i < n; i++) 
	{
        j = (j + tab[i] > 0) ? j + tab[i] : 0;
        maximum = (j > maximum) ? j : maximum;
    }
    if (maximum <= 0) 
	{
        return 0;
    }
	else 
	{
        return maximum;
    }
}

int main (int argc, const char * argv[])
{
	int zestaw;
    cin >> zestaw;
    long long int tab[100000] = {0};
    for (int i = 0; i < zestaw; i++) 
	{
        cin >> tab[i];
    }
    long long int wynik = kadane(tab, zestaw);
    printf("%lld\n", wynik);
   
}
