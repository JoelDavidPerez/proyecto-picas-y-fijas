#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
#include <time.h>

using namespace std;

int determinarPica(int numeroIngresado, int posicion, int numero[])
{
	int devuelve = 0;
	for(int i=0;i<4;i++)
	{
		if(numeroIngresado==numero[i] && posicion!=(i+1))//determina el número que sea igual y que la posición sea igual
		{
			devuelve=1;
			break;
		}
	}
	return devuelve;
}

struct Usuario
{
	string Nombre;
	int intentos;
}datos;

int main()
{
	char opcion;
	do 
	{
	
	int finalizador=0;
	int numeroIngresado, unidad,decena,centena,milesima, contadorPicas, contadorFijas,j,temp;
	int numero[4];
	system("cls");
	srand(time(NULL));
	for(int i=0; i<9; i++){
		numero[i]=i;
	}
	for(int i=0;i<4;i++)
	{
		j=(rand()%9);
		temp=numero[i];
		numero[i]=numero[j];
		numero[j]=temp;
	}
	for(int i=0;i<4;i++)
	{
		cout<<numero[i];
	}
	
	while(finalizador==0){
		cout<<"Ingresa el numero: "<<endl;
		cin>>numeroIngresado;
		while(numeroIngresado>9999)
		{
			cout<<"Ingresa de nuevo el número, de 4 cifras"<<endl;
			cin>>numeroIngresado;
		}
		
		unidad=(numeroIngresado/1000);
		decena=((numeroIngresado%1000)/100);
		centena=(((numeroIngresado%1000)%100)/10);
		milesima=((numeroIngresado%1000)%100)%10;
		
		contadorPicas=0;
		contadorFijas=0;
		
		if(unidad==numero[0] && decena==numero[1] && centena==numero[2] && milesima==numero[3]){
			cout<<"4 fijas. Ganaste";
			finalizador=1;
		}
		else{
			contadorPicas=contadorPicas + determinarPica(unidad, 1, numero);
			contadorPicas=contadorPicas + determinarPica(decena, 2, numero);
			contadorPicas=contadorPicas + determinarPica(centena, 3, numero);
			contadorPicas=contadorPicas + determinarPica(milesima, 4, numero);
			
			if(unidad==numero[0]){
				contadorFijas=contadorFijas+1;
			}
			if(decena==numero[1]){
				contadorFijas=contadorFijas+1;
			}
			if(centena==numero[2]){
				contadorFijas=contadorFijas+1;
			}
			if(milesima==numero[3]){
				contadorFijas=contadorFijas+1;
			}
			
			cout<<contadorPicas<<"picas,"<<contadorFijas<<"fijas ";
		}
		
	}
	_getch();
	//Pregunta para volver a iniciar el proceso	
		cout << "\n\t\t-------------------------------------------------------" ;
		cout << "\n\n\n\t>Desea repetir el proceso? S/N" << endl;
		opcion = getch();	
	}
	while (opcion == 'Y' || opcion == 'y' || opcion == 'S' || opcion == 's');
	cout<<"\n\n\t\t~ Gracias por usar nuestros servicios. Tenga un bonito día ~"<<endl;
	return 0;
}
