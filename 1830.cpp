#include <iostream>
#include <cstdio>

using namespace std;

void insertionSort(float arr[], int length) 
{
    int i, j, tmp;
    for (i = 1; i < length; i++) 
	{
        j = i;
        while (j > 0 && arr[j - 1] > arr[j]) 
		{
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }
    }
}

int main (int argc, const char * argv[])
{
	float tab[3];
    while (cin >> tab[0] >> tab[1] >> tab[2]) 
	{
        insertionSort(tab, 3);
        if (tab[0] + tab[1] > tab[2]) 
		{
            puts("1");
        }
        else
            puts("0");
    }
    return 0;
}
