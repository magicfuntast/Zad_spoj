#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{
	string word;
    while (cin >> word) 
	{
        for (unsigned long i = word.length(); i > 0; i--) 
		{
            printf("%c", word[i-1]);
        }
        puts("");
    }
    return 0;
}

