#include <iostream>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{
	int x,y;
    char c;
    while (cin >> c >> x >> y) 
	{
        switch (c) 
		{
            case '+':
                printf("%d\n", x + y);
                break;
            case '-':
                printf("%d\n", x - y);
                break;
            case '*':
                printf("%d\n", x * y);
                break;
            case '/':
                printf("%d\n", x / y);
                break;
            case '%':
                printf("%d\n", x % y);
                break;
                
            default:
                break;
        }
    }
    return 0;
}

