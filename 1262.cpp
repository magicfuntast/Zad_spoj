#include <iostream>
#include <deque>
#include <cstdio>

using namespace std;


int main (int argc, const char * argv[])
{
    deque<int> q;
    int wartosc, rol, liczba;
    scanf("%d %d\n", &wartosc, &rol);
    while (wartosc) 
	{
        scanf("%d", &liczba);
        q.push_back(liczba);
        wartosc--;
    }
    
    for (int i = 0; i < rol; i++) 
	{
        int l = q.front();
        q.push_back(l);
        q.pop_front();
        
    }
    deque<int>::iterator i = q.begin();
    for (; i != q.end(); i++) 
	{
        printf("%d ", *i);
    }
    printf("\n");
    return 0;
}
