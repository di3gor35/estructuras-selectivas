#include <iostream>
using namespace std;

float Calcular_PrecioFinal(float p_inicial, int n){
	// Calcular el precio final
	if (n >= 3){
		return p_inicial - (0.2 * p_inicial);
	} else {
		return p_inicial - (0.1 * p_inicial);
	}
}

int main(){
	float p_compra, p_final;
	int n_camisas;
	cout << "Bienvenido al programa, para calcular el precio final de una compra" << endl;
	cout << "Ingrese el precio de la compra: ";
	cin >> p_compra;
	cout << "Ingrese el numero de camisas: ";
	cin >> n_camisas;
	if (p_compra <= 0 || n_camisas <= 0){
		cout << "Error, las cantidades deben ser mayores a cero";
	} else {
		p_final = Calcular_PrecioFinal(p_compra, n_camisas);
		cout << "El precio final es: " << p_final;
	}
	return 0;
}