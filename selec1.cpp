#include <iostream>
using namespace std;
int main()
{
	float p_compra, p_final;
	int n_camisas;
	cout << "Ingrese el precio de la compra: ";
	cin >> p_compra;
	cout << "Ingrese el numero de camisas: ";
	cin >> n_camisas;
	if (n_camisas >= 3)
	{
		p_final = p_compra - (0.2 * p_compra);
		cout << "El precio final es: " << p_final;
	}
	else
	{
		p_final = p_compra - (0.1 * p_compra);
		cout << "El precio final es: " << p_final;
	}
	return 0;
}