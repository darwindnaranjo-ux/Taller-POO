//LIBRERIAS Y/O BIBLIOTECAS
#include <iostream>

using namespace std;

//FUNCION PRINCIPAL
int main() {

    int arreglo[10] = {1, 3, 5, 3, 7, 3, 9, 3, 2, 3}; //declarar arreglo
    int num, contador = 0;

    //IMPRIMIR EN PANTALLA CON UN BUCLE
    cout << "Arreglo: ";
    for (int i = 0; i < 10; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl; //salto de linea

    //SOLICITAR EL NUEMRO QUE SE QUIERE BUSCAR
    cout << "Ingrese el numero que desea buscar: ";
    cin >> num;

    //CUANTAS VECES APARECE EL NUMERO EN EL ARREGLO
    for (int i = 0; i < 10; i++) {
        if (arreglo[i] == num) {
            contador++;
        }
    }

    //RESULTADOS EN PANTALLA
    if (contador > 0) {
        cout << "El numero " << num << " aparece " << contador << " veces en el arreglo." << endl;
    } else {
        cout << "El numero " << num << " no se encuentra en el arreglo." << endl;
    }

    //FINALIZACION DEL PROGRAMA
    return 0;
}