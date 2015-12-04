#include <iostream>
#include <set>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{
	long long int x, number;
    while (true) 
	{
        cin >> x;
        if(cin.eof())break;
        set<long long int> s;
        while (cin.peek()!='\n') 
		{
            cin >> number;
            s.insert(number);
        }
        set<long long int>::iterator it;
        long long int i = 0;
        if (s.size() < x) 
		{
            puts("-");
            continue;
        }
        for (it = s.end(); it != s.begin(); it--, i++) 
		{
            if (i+1 == x) 
			{
                it--;
                cout << *(it) << endl;
                break;
            }
        }
        
    }
    return 0;
}
