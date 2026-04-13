#include <iostream>
#include <string>
using namespace std;

int main(){

	//VARIABLES
	int nota;
	int porcentaje_asis;
	string comportamiento;


	//Titulo.
	cout << "        -- NOTA FINAL DEL ESTUDIANTE---" << endl;

	//Funciones para mostrar en pantalla que requiere que el usuario agregre
 	//y recoleccion de datos y uso de If para comprobar datos validos.
	cout << "- Ingrese la nota final (0 a 100):" ;
	cin >> nota ;
	if(nota < 0 || nota > 100){

		cout << "Error... Nota no valida" << endl;

		return 1;
	}


	cout << "- Ingrese el porcentaje de asistencia (0 a 100):" ;
	cin >> porcentaje_asis;
	if(porcentaje_asis < 0 || porcentaje_asis > 100){

		cout << "Error... Porcentaje no valido" << endl;
		return 1;
	}



	cout << "- Ingrese la calificacion de comportamiento" << endl;
	cout << "(Excelente, Bueno, Aceptable o Deficiente): ";
	cin >> comportamiento;
	if (comportamiento != "Excelente" && comportamiento != "Bueno" && comportamiento != "Aceptable" && comportamiento != "Deficiente"){


		cout << "Error... Comportamiento no valido" << endl;
		return 1;
	}


	
	
	//condiciones de calificacion
	
	if(comportamiento == "Excelente" || comportamiento == "Bueno"){

		if(nota >= 70 && porcentaje_asis >= 85){

			cout << "Aprobado con excelencia" << endl;
			return 0;
		}
		else if(nota < 70 || porcentaje_asis < 85){

			cout << "Reprobado por rendimiento" << endl;
			return 0;
		}
	}
	else if(comportamiento == "Aceptable"){
	
		if(nota >= 70 && porcentaje_asis >= 85){
		
			cout << "Aprobado con observacion" << endl;
			return 0;
		}
		else if(nota < 70 || porcentaje_asis < 85){
		
			cout << "Reprobado por rendimiento" << endl;
			return 0;
		}

	}
	else if(comportamiento == "Deficiente"){

		cout << "Reprobado por conducta" << endl;
		return 0;
	}

	return 0; 

	}
