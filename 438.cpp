#include <cstdio>
#include <cstdlib>
 
 
int main()
{
 
 int k = 0;
    int beginingNumber = 100000;
    bool *numbersTable = new bool[beginingNumber];
    for (int i = 0; i < beginingNumber; i++) 
	
	{
        numbersTable[i] = false;
    }
    for (int i = 2; i*i < beginingNumber; i++ )
	{
        if (numbersTable[i] == true) 
            continue;
        for (int j = 2 * i ; j < beginingNumber; j += i)
            numbersTable[j] = true;  
    }
    scanf("%d", &k);
    
	int primary;
    while (k) 
	{
        scanf("%d", &primary);
        if (primary == 1) 
		{
            printf("NIE\n");
        }
        
		else if (numbersTable[primary] == false) 
            printf("TAK\n");
        else
            printf("NIE\n");
        k--;
    }
    
    
    return 0;
    
}
