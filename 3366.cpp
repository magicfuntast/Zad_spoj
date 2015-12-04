#include <iostream>
#include <map>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{
	int tab[9];
    int zestaw;
    cin >> zestaw;
    while (zestaw) 
	{
        int i = 0;
        int sudo[9][9] = {0};
        bool sudoOk = true;
       
        int indexOne = 0, indexTwo = 0;
        for (i = 0; i < 81; i++) 
		{
            scanf("%d", &sudo[indexOne][indexTwo]);
            if (sudo[indexOne][indexTwo] < 1 || sudo[indexOne][indexTwo] > 9) 
			{
                sudoOk = false;
            }
            indexTwo++;
            if (indexTwo % 9 == 0) 
			{
                indexOne++;
                indexTwo = 0;
            }
            
        }
       
        if (!sudoOk) 
		{
            zestaw--;
            puts("NIE");
            continue;
        }
        int poczatkowyX = 0, poczatkowyY = 0;
        for (int j = 0; j < 9; j++) 
		{
            int k = poczatkowyX;
            int l = poczatkowyY;
            int koniecX = k + 3;
            int koniecY = l + 3;
            map<int, int> hash;
            int init[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
            for (int m = 0; m < 9; m++) 
			{
                hash[init[m]] = 0;
            }
            for (k = poczatkowyX; k < koniecX; k++) 
			{
                for (l = poczatkowyY; l < koniecY; l++) 
				{
                    hash[sudo[k][l]] = hash[sudo[k][l]] + 1; 
                }
            }
            for (map<int, int>::iterator it = hash.begin(); it != hash.end(); it++) 
			{
                if (it->second != 1) 
				{
                    
                    sudoOk = false;
                }
            }
            cout << endl;
            poczatkowyY += 3;
            poczatkowyY = poczatkowyY % 9;
            if (poczatkowyY == 0) {
                poczatkowyX += 3;
            }
        }
        if (!sudoOk)
		{
            zestaw--;
            puts("NIE");
            continue;
        }
        for (i = 0; i < 9; i++) 
		{
            map<int, int> hash;
            int init[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
            for (int m = 0; m < 9; m++) 
			{
                hash[init[m]] = 0;
            }
            for (int j = 0; j < 9; j++) 
			{
                hash[sudo[i][j]] = hash[sudo[i][j]] + 1;
                if (hash[sudo[i][j]] != 1) 
				{
                    sudoOk = false;
                    
                }
            }
        }
        if (!sudoOk) 
		{
            zestaw--;
            puts("NIE");
            continue;
        }
        for (i = 0; i < 9; i++) 
		{
            map<int, int> hash;
            int init[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
            for (int m = 0; m < 9; m++) 
			{
                hash[init[m]] = 0;
            }
            for (int j = 0; j < 9; j++) 
			{
                hash[sudo[j][i]] = hash[sudo[j][i]] + 1;
                if (hash[sudo[j][i]] != 1) 
				{
                    sudoOk = false;
                }
            }
        }
        if (!sudoOk) 
		{
            puts("NIE");
            zestaw--;
            continue;
        } else {
            puts("TAK");
        }
        zestaw--;
    }

    return 0;
}
