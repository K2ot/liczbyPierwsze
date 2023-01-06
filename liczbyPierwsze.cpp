#include <iostream>
using namespace std;
bool czy_pierwsza(long long n)
{
	if (n < 2)
		return false; //gdy liczba jest mniejsza niż 2 to nie jest pierwszą

	for (long long i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false; //gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
	return true;
}

int main()
{
	long long n = 0;// 9999999999999999999;

	while(true)
	{
	
	if (czy_pierwsza(n)) //lub czy_pierwsza(n)==1
		cout << "Liczba " << n << " jest pierwsza" << endl;
	n++;
}
	return 0;
}
