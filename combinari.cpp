#include <iostream>

using namespace std;

int main()
{
	int n, m;

	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;
	
	int c[m+1], i, j, gata;

	for (i = 1; i <= m; i++)
	{
		c[i] = i;
	}

	gata = 0;

	while (!gata)
	{
		// afisez configuratia curenta

		for (i = 1; i <= m; i++)
		{
			cout << c[i] << ' ';
		}

		cout << '\n';
		
		// generez configuratia urmatoare

		for (i = m; i > 0 && c[i] == n-m+i; i--);

		if (i == 0)
		{
			gata = 1; // ultima configuratie
		}
		else
		{
			c[i]++;
		
			for (j = i+1; j <= m; j++)
			{
				c[j] = c[j-1] + 1;	
			}
		}
	}

	return 0;
}
