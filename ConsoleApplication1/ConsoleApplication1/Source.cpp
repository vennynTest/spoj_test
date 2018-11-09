#include <iostream>
#include <cstdlib>

using namespace std;

const int n = 10;

void fill(int tabli[], int i);
void buble_sort(int tab[]);
int main()
{
	
	int tablica[n];
	


	fill(tablica, n);
	buble_sort(tablica);
	
	for (int i = 0; i < 10; i++)
	{
		cout << tablica[i];
	}
	
	return 0;
}

void fill(int tab[], int i)
{
	
	for (int n = 0; n < i; n++)
	{
		tab[n] = rand() % 10 + 1;
		cout << tab[n] <<endl;
	}
	cout << endl;
}

void buble_sort(int tab[])
{
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - 1; j++)
			if (tab[j] > tab[j + 1]) swap(tab[j], tab[j + 1]);
}