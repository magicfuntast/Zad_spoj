#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main (int argc, const char * argv[])
{
	int x, y, z;
    while (cin >> x >> y >> z) 
	{
        int tab[] = {x, y, z};
        sort(tab, tab+3);
        if (tab[0] + tab[1] <= tab[2]) 
		{
            puts("brak");
        }
		else if(tab[0] * tab[0] + tab[1] * tab[1] == tab[2] * tab[2] ) 
		{
            puts("prostokatny");
        }
		else if(tab[0] * tab[0] + tab[1] * tab[1] > tab[2] * tab[2] ) 
		{
            puts("ostrokatny");
        } 
		else 
		{
            puts("rozwartokatny");
        }
        
    }
    return 0;
}

