#include <iostream>

using namespace std;

void printTable(int tablica[], int size)
{
	cout << "[ ";
	for(int i=0;i<size;i++)
		cout << tablica[i] << " ";
	cout << "]" << endl;
}

int podziel(int tablica[], int poczatek, int koniec)
{
	int p = tablica[poczatek];
	int i = poczatek;
	
	for(int j=poczatek+1;j<=koniec;j++)
	{
		if(tablica[j] <= p)
		{
			i++;
			int tmp = tablica[i];
			tablica[i] = tablica[j];
			tablica[j] = tmp;
		}
	}
	int tmp = tablica[poczatek];
	tablica[poczatek] = tablica[i];
	tablica[i] = tmp;
	return i;
}

void quicksort(int tablica[], int poczatek, int koniec)
{
	if(poczatek>=koniec)
		return;
	int s = podziel(tablica, poczatek, koniec);
	quicksort(tablica, poczatek, s-1);
	quicksort(tablica, s+1, koniec);
}

int main()
{
	int tab[] = {5, 8, 6, 4, 2, 3, 6, 9, 4, 4, 1, 2, 5};
	
	printTable(tab, sizeof(tab)/sizeof(tab[0]));
	quicksort(tab, 0, sizeof(tab)/sizeof(tab[0]));
// 	podziel(tab, 0, sizeof(tab)/sizeof(tab[0]));
	printTable(tab, sizeof(tab)/sizeof(tab[0]));
	
	return 100;
}
