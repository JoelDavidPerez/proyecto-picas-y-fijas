//Proyecto picas y fijas
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	
	//añadir los carácteres especiales 
	setlocale(LC_ALL, "spanish");
	
	//portada
	cout<<"PICAS Y FIJAS"<<endl;
	//cout<<"Tienes la habilidad para completarlo?\nPresiona __ para continuar"  //buscar como poner botones en c++
	
	//Instrucciones
	cout<<"Instrucciones";
	cout<<"~Un juego muy conocido es picas y fijas~\n\nconsiste en tratar de adivinar un número en la menor cantidad de intentos.\nEn cada intento, el jugador dice 4 dígitos (no repetidos) y el oponente le da pistas de cuántos aciertos tuvo, sin indicarle cuales fueron, de la siguiente forma:\n Si algún dígito que dice el jugador se encuentra dentro del número a adivinar, pero no está en la posición correcta, se llama PICA.\n Si el dígito se encuentra en la posición adecuada, se llama FIJA.\n Así, las pistas serán la cantidad de PICAS y la cantidad de FIJAS que se tienen.\n El juego termina cuando algún jugador tiene 4 FIJAS (4 dígitos en el orden adecuado).";
	
	//genera numero al azar 
	srand(time(NULL));
	int numeroAleatorio[4];
	
	for(int i=0; i<4; i++){
		numeroAleatorio[i]=rand()%9;
		cout<<numeroAleatorio[i];
	}
	
	cout<<"\n";
	
	//ingresa el numero
	int numeroIngresadoCompleto[4];
	int numero;
	
	for(int i=0; i<4; i++){
		cin>>numero;
		numeroIngresadoCompleto[i]=numero;
	}
	
	//Volver a pedir número si el número que se ingreso no es igual al número aleatorio >.<
	if(numeroIngresadoCompleto[1]!=numeroAleatorio[1])//lo arreglé con el arreglo en 1 porque con 4 generaba un error y lo leía diferente, no lo leía bien. Joel.
		{
			cout<<"ingresa de nuevo"<<endl;
			for(int i=0; i<4; i++){
			cin>>numero;
			numeroIngresadoCompleto[i]=numero;
			}
		}
	
	//imprime numero ingresado
	for(int i=0; i<4; i++){
		cout<<numeroIngresadoCompleto[i];
	}
	
	
	
	
}
