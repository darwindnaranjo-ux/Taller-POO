//Biblioteca
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


//Funcion Principal
int main(){

	//Variables
	float peso;
	string destino;
	char cliente;
	int num_paq;
	int opcion;
	float precio = 0;

	//Titulo
	cout << "       ---ENVIELOYA.COM---   " << endl;

	//Preguntas en pantalla y recoleccion de vriables
	cout << "1. Ingrese el peso del paquete (Kg): " ;
	cin >> peso;
	if(peso <= 0){

		cout << "Error... Peso no valido" << endl;
		return 1;
	}

	cout << "2. ¿El destino es Nacional o Internacional?: " ;
	cin >> destino;
	if (destino != "Internacional" && destino != "Nacional"){

		cout << "Error... Dato no valido." << endl;
		return 1;
	}
	if(destino == "Internacional"){

		cout << "seleccione una opcion: " << endl;
		cout << "1. America" << endl << "2. Europa" << endl << "3. Asia" << endl << "Opcion: " ;

		cin >> opcion;
		if(opcion < 1 || opcion > 3){

			cout << "Error... Seleccion no valida" << endl;
			return 1;
		}
	}


	cout << "3. ¿Es cliente frecuentente (s/n): " ;
	cin >> cliente;
	if(cliente != 's' && cliente != 'n'){

		cout << "Error... Dato no valido" << endl;
		return 1;
	}


	cout << "4. Ingrese la cantidad de paquetes a enviar: " ;
	cin >> num_paq ;
	if ( num_paq <= 0 ){

		cout << "Error... Cantidad no valida" << endl;
		return 1;
	}


	//sumas del paquete segun los datos recibidos
	if(peso < 1){

		precio += 50;

	}else if (peso >= 1 && peso < 5){

		precio+= 100;

	}else if(peso >= 5 && peso < 10){

		precio+= 150;

	}else if(peso >= 10){

		precio+= 200;

	}


	if(destino == "Internacional"){


	
		if(opcion == 1){

		
			precio += precio*0.15;

	
		}else if ( opcion == 2){

		
			precio += precio*0.25;

		}else if (opcion == 3){

	
			precio += precio*0.4;
	
		}

	}



	if( cliente == 's'){

		precio -= (precio*0.1);

	}
	

	precio *= num_paq;

	if(num_paq > 3){

		precio -= (precio*0.05);

	}


	cout << "R/ El costo total a pagar  es: $" << fixed << setprecision(2) << precio << endl;

	return 0;

}
