#include <iostream>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{
	int zestaw;
    scanf("%d\n", &zestaw);
    while (zestaw) 
	{
        int i = 0;
        int input = 0;
        int sum = 0;
        cin >> sum;
        char c;
        while (true) 
		{
            bool wyjdz = false;
            cin >> c;
            if(cin.peek()=='\n')break;
            switch (c) 
			{
                case '+':
                    cin >> input;
                    sum += input;
                    if(cin.peek()=='\n') wyjdz = true;
                    break;
                case '-':
                    cin >> input;
                    sum -= input;
                    if(cin.peek()=='\n')wyjdz = true;
                    break;
                        
                default:
                    break;
            }
            if (wyjdz) 
			{
                break;
            }
            
        }
        cout << sum << endl;
        zestaw--;
    }
    return 0;
}
