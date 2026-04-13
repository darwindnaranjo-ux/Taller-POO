//LIBRERIAS Y/O BIBLIOTECAS                                                                                                                                
#include <iostream>                                                                                                                                         
#include <string>                                                                                                                                                                                                                                                                                                       
using namespace std;

//FUNCION PRINCIPAL                                                                                                                                         
int main() {
	
	int age, cant; //EDAD,CANTIDAD_DE_ENTRADAS                                                                                                                   
	char sn = 'n'; //ES_O_NO_UNIVERSITARIO (inicializado por seguridad)                                                                                                                           
	string day;
	double total, entotal, fin, precio_base = 100, desc = 0.0; //PRECIO_BASE_ TOTAL DESCUENTOS                                                                                                                                                                                                                              
	
	//TITULO                                                                                                                                                   
	cout << "   --- CINE CALIDAD ---" << endl;
	
	do {
		//TOMA DE DATOS - EDAD                                                                                                                                      
		cout << "Ingrese su edad: ";
		cin >> age;
		if (age <= 0) {
			cout << "Ingreso inválido de datos." << endl;
		}
	} while (age <= 0);
	
	if (age >= 18 && age <= 25) { //CONDICIONAL PARA SABER SI SE APLICA DESCEUNTO DE UNIVERSITARIOS                                                                     
		do {
			cout << "¿Es estudiante universitario? (s/n): ";
			cin >> sn;
			if (sn != 'S' && sn != 's' && sn != 'N' && sn != 'n') { //MENSAJE ERROR PARA DATOS DISTINTOS                                                                       
				cout << "Entrada inválida. Por favor, ingrese S o N para continuar." << endl;
			}
		} while (sn != 'S' && sn != 's' && sn != 'N' && sn != 'n');
	}
	
	do {
		//TOMA DE DATODS PARA DIA DE LA SEMANA                                                                                                                      
		cout << "Ingrese el dia de la semana (lunes, martes, ..., domingo) en MAYÚSCULA o minúscula: ";
		cin >> day;
		
		if (day != "LUNES" && day != "lunes" && day != "MARTES" && day != "martes" &&
			day != "MIERCOLES" && day != "miercoles" && day != "JUEVES" && day != "jueves" &&
			day != "VIERNES" && day != "viernes" && day != "SABADO" && day != "sabado" &&
			day != "DOMINGO" && day != "domingo") {
			
			cout << "Ingreso invalido. Ingresa el día en (MAYÚSCULAS) o (miníscula)." << endl;
		}
		// Corregido "VINERES" por "VIERNES" en la validación del while
	} while (day != "LUNES" && day != "lunes" && day != "MARTES" && day != "martes" &&
			 day != "MIERCOLES" && day != "miercoles" && day != "JUEVES" && day != "jueves" &&
			 day != "VIERNES" && day != "viernes" && day != "SABADO" && day != "sabado" &&
			 day != "DOMINGO" && day != "domingo");
	
	do {
		//TOMA DE DATOS PARA CANTIDAD DE COMPRAS
		cout << "Ingrese la cantidad de entradas a comprar: ";
		cin >> cant;
		if (cant < 1) {
			cout << "Ingreso de datos inválidos." << endl;
		}
	} while (cant < 1);
	
	
	//APLICAR DESCUENTO POR EDAD
	if (age < 5) {
		desc = 0.6;
	} else if (age >= 5 && age <= 12) {
		desc = 0.5; //CINCUENTA PORCIENTO
	} else if (age >= 13 && age <= 17) {
		desc = 0.3;
	} else if (age >= 18 && age <= 64) {
		if (age <= 25 && (sn == 's' || sn == 'S')) {
			desc = 0.55;
		} else {
			desc = 0.0;
		}
	} else if (age >= 65) {
		desc = 0.4;
	}
	
	total = precio_base - (precio_base * desc);
	
	//INICIALIZAMOS 'fin' CON 'total' POR SI NO HAY DESCUENTO DE DÍA
	fin = total;
	
	//APLICAR DESCUENTO POR DIA DE LA SEMANA 
	if (day == "lunes" || day == "martes" || day == "miercoles" || day == "jueves" || 
		day == "LUNES" || day == "MARTES" || day == "MIERCOLES" || day == "JUEVES") {
		fin = total - (total * 0.1);
	}
	
	//INICIALIZAMOS 'entotal' CON 'fin' POR SI NO HAY DESCUENTO POR CANTIDAD
	entotal = fin;
	
	//APLICAR DESCUENTO POR NUMERO DE ENTRADAS COMPRADAS
	if (cant > 3) {
		entotal = fin - (fin * 0.05); //CINCO PORCIENTO
	}
	
	//RESULTADOS EN PANTALLA
	cout << "El precio final total a pagar es: " << entotal * cant << endl;
	
	//FINALIZACION DEL PROGRAMA
	return 0;
}
