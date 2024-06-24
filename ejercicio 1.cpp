/*Cálculo del Área de un Círculo: Implementa un programa que calcule el área de un círculo dado su
radio. Utiliza la constante M_PI de la librería cmath para obtener el valor de pi. Solicita al usuario el
radio del círculo y utiliza la función pow de cmath para calcular el cuadrado del radio. Muestra el
resultado del área calculada.*/
#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
int main (){
	double radio, area_circulo;
	SetConsoleOutputCP(CP_UTF8);
	cout<<"Ingrese el valor del radio del círculo: ";
	cin>>radio;
	area_circulo= M_PI*pow(radio, 2);
	cout<< "El área del cículo es: "<<area_circulo<<endl;
	return 0;
}
