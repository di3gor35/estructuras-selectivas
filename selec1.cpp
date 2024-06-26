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
bool Validar_Respuesta(int r){
	if (r == 0 || r == 1){
		return true;
	}
	else {
		cout << "Opcion no válida." << endl;
		return false;
	}
}

int main(){
	float p_compra, p_final;
	int n_camisas;
	int res;
	bool r;
	cout << "Bienvenido al programa, para calcular el precio final de una compra." << endl;
	do {
		cout << "Ingrese el precio de la compra: ";
		cin >> p_compra;
		cout << "Ingrese el número de camisas: ";
		cin >> n_camisas;
		if (p_compra <= 0 || n_camisas <= 0){
			cout << "Error, las cantidades deben ser mayores a cero." << endl;
			do {
			cout << "¿Desea intentar de nuevo? (1: si/ 0: no): ", cin >> res;
			r = Validar_Respuesta(res);
			} while (r == false);

		} else {
			p_final = Calcular_PrecioFinal(p_compra, n_camisas);
			cout << "El precio final es: " << p_final << endl;
			do {
			cout << "¿Desea hacer otra consulta? (1: si/ 0: no): ", cin >> res;
			r = Validar_Respuesta(res);
			} while (r == false);

		}
	} while (res == 1);
	cout << "Gracias por usar el programa.";
	return 0;
}