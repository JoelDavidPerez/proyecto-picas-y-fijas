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
	int intentos = 0;
}datos;

int main()
{
	//añadir los carácteres especiales 
	setlocale(LC_ALL, "");
	//variables
	char opcion;
	int ancho = 1;
	int opcion2,opcion3,opcion4;
	
	do 
	{
			system("cls");
			cout<<"         ..      ..     "      ;                                                                        
		cout<<"         -. - .- .:     "      ;                                                                        
		cout<<"         :. : .: ::     "      ;                                                                        
		cout<<"         ..      ..      "     ;                                                                        
		cout<<"         -. = .- .:           . .. .  . .  .               "             ;                              
		cout<<"         :. .  . ::       .::..  . .  . .  ..::                         "        ;                      
		cout<<"         .. .  . ..      :                        .                        "             ;              
		cout<<"        -. = .- .: : ::                     :..:.   :                      "             ;             
		cout<<"        ..      ..                       .:.                                   "         ;             
		cout<<"         :. .    :                      :              ..                      "         ;              
		cout<<"        -. - .:              : :: :      .:.:.   ...:.   :                      "         ;            
		cout<<"         ..                   .                .:.                              "             ;         
		cout<<"         :. ::   .:.:         -      :.                     ..                    "              ;      
		cout<<"        -. :    -  :.        -       -                       .:: : :.                 "             ;  
		cout<<"         ..    .    .         :       .                               ..                "           ;   
		cout<<"          -    -    :         . ..    .                   ..           . ..             "            ; 
		cout<<"         :    :     :           .. :                   .: ...:           .. :              "         ;  
		cout<<"        .     ..    :                                          .              .           "          ;  
		cout<<"       -.        :: .                                -                                    "           ; 
		cout<<"      ..                                             -            :              :         "           ;
		cout<<"    ..                              .:                 ..         .                :          "        ;
		cout<<"    .:                             -..:                  .:. .   .-                .:       "          ;
		cout<<"    .:                             .  .                      .....                  .       "          ;
		cout<<"    ..              : :          :      :                                        : .:       "          ;
		cout<<"                 ..   .:        ::         :                                : ::   .:       "          ;
		cout<<"                .     .        .          .                            ... .       :         "        ;
		cout<<"  :.           :       :        :          :                           : .  .  . .:          "         ;
		cout<<" .:           ::      -.         -   .:.::                          :.   :: = :: -           "         ;
		cout<<"              .                   ...                            ...        .                 "         ;
		cout<<"             :.    :.                                         :  : ..        ..              "        ;
		                                                     
		          cout<<"                                                                          *                                                                                    *"<<endl;
		         cout<<"                                                   ***                                                                                  ***"<<endl;
		         cout<<"                          ¶¶¶¶                    *****                                                                                *****"<<endl;
		        cout<<"                          ¶¶¶¶                   *******                                                                              *******"<<endl;
		       cout<<"         ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶              *********                         -------------------------                          *********"<<endl;
		      cout<<"        ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶            ***********                        ||    PICAS Y FIJAS    ||                         ***********"<<endl;
			cout<<"       ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶          *************                       -------------------------                        *************"<<endl;
		    cout<<"      ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶        ***************                                                                      ***************"<<endl;
		   cout<<"      \t¶_________________________¶         *****************                                                                    *****************"<<endl;
		  cout<<"       \t¶__¶¶¶¶¶¶__¶¶¶¶¶__¶¶¶¶¶___¶        *******************       ~¿Si tienes lo necesario para completar este juego?~       *******************"<<endl;
		 cout<<"        ¶__¶¶¶¶¶¶__¶¶¶¶¶__¶¶¶¶¶___¶       *********************                                                                *********************"<<endl;
		cout<<"        ¶__¶¶¶¶¶¶__¶¶¶¶¶__¶¶¶¶¶___       ***********************                          presiona 1                          ***********************"<<endl;
		         cout<<"\t¶__¶¶¶¶¶¶_________________¶               *****                                                                                *****"<<endl;
		         cout<<"\t¶__¶¶¶¶¶¶_________________¶               *****                                                                                *****"<<endl;
		         cout<<"\t¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶               *****                                                                                *****"<<endl;
		         
	    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";     
		
		cin>>opcion2;
		
		while(opcion2 == 1){
			system("cls");
			cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t¿Quién eres?"<<endl;
			cin.ignore();
			cout<<"\n\n\t\t\t\t";
			getline(cin,datos.Nombre);
			cout<<"° \n\n\t\t\t\tpresiona 2 para continuar: ";
			
			cin>>opcion3;
			
			while(opcion3 = 2){
				system("cls");
				cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t  Instrucciones: "<<endl;
				cout<<"\n\n\n\t\t\tEn cada intento, el jugador dice 4 dígitos (no repetidos) y el programa le da pistas de"<<endl;
				cout<<"\n\t\t\tcuántos aciertos tuvo, sin indicarle cuales fueron, de la siguiente forma:"<<endl;
				cout<<"\n\n\n\t\t\t\t# Si algún dígito que dice el jugador se encuentra dentro del número"<<endl;
				cout<<"\n\t\t\t\t  a adivinar, pero no está en la posición correcta, se llama PICA."<<endl;
				cout<<"\n\n\t\t\t\t# Si el dígito se encuentra en la posición adecuada,se llama FIJA.";
				cout<<"\n\n\n\n\t\t\tAsí, las pistas serán la cantidad de PICAS y la cantidad de FIJAS que se tienen.";
				cout<<"\n\n\t\t\t- El juego termina cuando el jugador tiene 4 FIJAS (4 dígitos en el orden adecuado).";
				cout<<"\n\t\t\t\t\t\t  presiona 3 para continuar: ";
				
				cin>>opcion4;
				
				while(opcion4 == 3){
					system("cls");
					
					cout<<"\t\t\t\t ¡A JUGAR! "<<datos.Nombre<<"\n"<<endl;
					
					int finalizador=0;
					int numeroIngresado, unidad,decena,centena,milesima, contadorPicas, contadorFijas,j,temp;
					int numero[4];
					srand(time(NULL));
					
					for(int i=0; i<9; i++){
						numero[i]=i;
					}
					for(int i=0;i<4;i++){
						j=(rand()%9);
						temp=numero[i];
						numero[i]=numero[j];
						numero[j]=temp;
					}
					
					//numero aleatorio
					/*for(int i=0;i<4;i++)
					{
						cout<<numero[i];
					}*/
				
					while(finalizador==0){
						cout<<"\nIngresa el numero: "<<endl;
						cin>>numeroIngresado;
						
						while(numeroIngresado>9999){
							cout<<"Ingresa de nuevo el número, de 4 cifras"<<endl;
							cin>>numeroIngresado;
						}
						
						while(numeroIngresado<0){
							cout<<"Ingresa un valor correcto, positivo y de 4 cifras"<<endl;
							cin>>numeroIngresado;
						}
					
						unidad=(numeroIngresado/1000);
						decena=((numeroIngresado%1000)/100);
						centena=(((numeroIngresado%1000)%100)/10);
						milesima=((numeroIngresado%1000)%100)%10;
					
						contadorPicas=0;
						contadorFijas=0;
					
						if(unidad==numero[0] && decena==numero[1] && centena==numero[2] && milesima==numero[3]){
							cout<<"\n\n\t\t 4 fijas. Ganaste";
							finalizador=1;
						}
						else if(numeroIngresado==-1){
							cout<<"te rendiste :c";
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
							datos.intentos++;
							cout<<contadorPicas<<"picas,"<<contadorFijas<<"fijas\n ";
							cout<<"intentos: "<<datos.intentos<<endl;
						}	
					}
					_getch();
				}
			}
		}
		//Pregunta para volver a iniciar el proceso	
		cout << "\n\t\t-------------------------------------------------------" ;
		cout << "\n\n\n\t>Desea repetir el proceso? S/N" << endl;
		opcion = getch();			
	}while (opcion == 'Y' || opcion == 'y' || opcion == 'S' || opcion == 's');
	cout<<"\n\n\t\t~ Gracias por usar nuestros servicios. Tenga un bonito día ~"<<endl;
	return 0;
}
