#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{
	string line,ch;
    while (cin >> ch >> line) 
	{
        for (int i = 0; i < line.length(); i++) 
		{
            if (line[i] != ch[0]) 
			{
                printf("%c", line[i]);
            }
        }
        puts("");
    }
    return 0;
}

