#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Cantidad_monedas(vector<int>, int);

int main()
{

	vector<int> cambio_monedas = {1, 5, 10, 20, 50};

	int valor = 200;

	int monedas = Cantidad_monedas(cambio_monedas, valor);

	cout << "\nLa cantidad de monedas es: " << monedas;
}

int Cantidad_monedas(vector<int> tipo_monedas, int valor_cambiar)
{

	sort(tipo_monedas.begin(), tipo_monedas.end());

	int cantid_moneda = 0;
	bool bandera = true;

	while (valor_cambiar > 0 && bandera == true)
	{
		for (int i = tipo_monedas.size() - 1; 0 <= i; i--)
		{
			if (tipo_monedas[i] <= valor_cambiar)
			{
				valor_cambiar -= tipo_monedas[i];
				cantid_moneda++;

				break;
			}
			else if (i == 0)
			{
				bandera = false;
			}
		}
	}

	return cantid_moneda;
}
