#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
#include <time.h>
#include <fstream>
#include <windows.h>
#include "MMSystem.h"

using namespace std;

int determinarPica(int numeroIngresado, int posicion, int numero[])
{
	int devuelve = 0;
	for(int i=1;i<5;i++)
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
	int intentosFin;
}datos;

void crearAnadir();
void ListasOrganizada();
void crearAnadir2();
void musica();

int main()
{
	/*char soundfile[] = "C:\soundtrack_.wav";
    cout<<PlaySound((LPCSTR)soundfile,NULL,SND_FILENAME | SND_ASYNC);

    system("pause");*/
    musica();

	//añadir los carácteres especiales 
	setlocale(LC_ALL, "");
	//variables
	int n=0;
	char opcion;
	int opcion2,opcion3,opcion4;
	int intentos;
		
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
		                                                     
		          cout<<"                                                                       *                                                                                    *"<<endl;
		         cout<<"                                                ***                                                                                  ***"<<endl;
		         cout<<"                       ¶¶¶¶                    *****                                                                                *****"<<endl;
		        cout<<"                       ¶¶¶¶                   *******                                                                              *******"<<endl;
		       cout<<"      ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶              *********                         -------------------------                          *********"<<endl;
		      cout<<"     ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶            ***********                        ||    PICAS Y FIJAS    ||                         ***********"<<endl;
			cout<<"    ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶          *************                       -------------------------                        *************"<<endl;
		    cout<<"   ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶        ***************                                                                      ***************"<<endl;
		   cout<<"     ¶_________________________¶         *****************                                                                    *****************"<<endl;
		  cout<<"     ¶__¶¶¶¶¶¶__¶¶¶¶¶__¶¶¶¶¶___¶        *******************       ~¿Si tienes lo necesario para completar este juego?~       *******************"<<endl;
		 cout<<"     ¶__¶¶¶¶¶¶__¶¶¶¶¶__¶¶¶¶¶___¶       *********************                                                                *********************"<<endl;
		cout<<"     ¶__¶¶¶¶¶¶__¶¶¶¶¶__¶¶¶¶¶___       ***********************               presiona 1 y enter para continuar              ***********************"<<endl;
		         cout<<"     ¶__¶¶¶¶¶¶_________________¶               *****         (\\\_/)                                                                  *****          (\\\_/)"<<endl;
		         cout<<"     ¶__¶¶¶¶¶¶_________________¶               *****         (_..)                                                                  *****          (_..)"<<endl;
		         cout<<"     ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶               *****         c(')(')_                                                               *****          c(')(')_"                       <<endl;
		         
	    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<"\n\n";  
		cout<<"\n\t\t\t\t\t       +-----------------++-----------------++-----------------++-----------------+";   
		cout<<"\n\t\t\t\t\t       |                    UNIVERSIDAD FRANCISCO JOSE DE CALDAS                  |"; 
		cout<<"\n\t\t\t\t\t       +-----------------++-----------------++-----------------++-----------------+";
		cout<<"\n\t\t\t\t\t       |                    PROYECTO FINAL - PROGRAMACION BASICA                  |";
		cout<<"\n\t\t\t\t\t       +-----------------++-----------------++-----------------++-----------------+";
		cout<<"\n\t\t\t\t\t       ¦                                 NOMBRES:                                 ¦";
		cout<<"\n\t\t\t\t\t       +-----------------++-----------------++-----------------++-----------------+";
		cout<<"\n\t\t\t\t\t       |__|__|                +  Lilly Sofia Ayala Rojas                    |__|__|"; 
		cout<<"\n\t\t\t\t\t       |__|__|                + Joel David Perez Arroyave                   |__|__|";
		cout<<"\n\t\t\t\t\t       |__|__|                + Maicol Steven Fagua Rojas                   |__|__|";
		cout<<"\n\t\t\t\t\t       +-----------------++-----------------++-----------------++-----------------+";
		cin>>opcion2;
		while(opcion2 == 1){
			system("cls");
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
			cout<<"\t\t\t\t        |\\\___/|                .-.-."<<endl;
			cout<<"\t\t\t\t       =) ^Y^ (=             ==`. .'=="<<endl;
			cout<<"\t\t\t\t        \\\  ^  /                  '"<<endl;
			cout<<"\t\t\t\t         )=*=(              QUIEN ERES?"<<endl;
			cout<<"\t\t\t\t        /     \\\         .-.-.  .-.-.  .-.-.            +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
			cout<<"\t\t\t\t        |     |        =`. .'==`. .'==`. .'=           +-   Digita tu                usuario    -+"<<endl;
			cout<<"\t\t\t\t       /| | | |\\\          '      '      '              +-               nombre de               -+"<<endl;
			cout<<"\t\t\t\t       \\\| | |_|/\\\                                      +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
			cout<<"\t\t\t\t   _/\\\_//_// ___/\\\_/\\\_/\\\_/\\\_/\\\_/\\\_/\\\_/\\\_/\\\_"<<endl;
			cout<<"\t\t\t\t   |  |  | \\\_) |  |  |  |  |  |  |  |  |  |"<<endl;
			cout<<"\t\t\t\t   |  |  |  |  |  |  |  |  |  |  |  |  |  |"<<endl;
			cout<<"\t\t\t\t   |  |  |  |  |  |  |  |  |  |  |  |  |  |"<<endl;
			cout<<"\t\t\t\t   |  |  |  |  |  |  |  |  |  |  |  |  |  |"<<endl;
			cout<<"\t\t\t\t   |  |  |  |  |  |  |  |  |  |  |  |  |  |"<<endl;
			cout<<"\t\t\t\t ||||||||||||||||||||||||||||||||||||||||||||"<<endl;
			cout<<"\t\t\t\t\t\t\t\t\t\t      > ";
			crearAnadir();
			cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t      preiona 2 y enter para continuar...  ";
			
			cin>>opcion3;
			
			while(opcion3 = 2){
				system("cls");
				cout<<"\n"<<endl; 
				cout<<"           .       . .        *";
				cout<<" *   .   .'    * ,      .       .  ,     *";
				cout<<"   .     *     .'";
				cout<<"   '     .     .  *        *  .'.";
				cout<<"       .   ' '        .    .    '   .";
				cout<<".  *        ,   *               '      *";
				cout<<"                             .";
				cout<<"         *          .   *  *    .  *       .   ,          *";
				cout<<"           .       . .        *";
				cout<<" *   .   .'    * ,      .       .  ,     *";
				cout<<"   .     *     .'";
				cout<<"   '     .     .  *        *  .'.";
				cout<<"       .   ' '        .    .    '   .";
				cout<<".  *        ,   *               '      *";
				cout<<"                             .";
				cout<<"         *          .   *  *    .  *       .   ,          *";
				cout<<"           .       . .        *";
				cout<<" *   .   .'    * ,      .       .  ,     *";
				cout<<"   .     *     .'";
				cout<<"   '     .     .  *        *  .'.";
				cout<<"       .   ' '        .    .    '   .";
				cout<<".  *        ,   *               '      *";
				cout<<"                             .";
				cout<<"         *          .   *  *    .  *       .   ,          *";
				cout<<"           .       . .        *";
				cout<<" *   .   .'    * ,      .       .  ,     *";
				cout<<"   .     *     .'";
				cout<<"   '     .     .  *        *  .'.";
				cout<<"       .   ' '        .    .    '   .";
				cout<<".  *        ,   *               '      *";
				cout<<"                             .";
				cout<<"         *          .   *  *    .  *       .   ,          *";
				cout<<"           .       . .        *";
				cout<<" *   .   .'    * ,      .       .  ,     *";
				cout<<"   .     *     .'";
				cout<<"   '     .     .  *        *  .'.";
				cout<<"       .   ' '        .    .    '   .";
				cout<<".  *        ,   *               '      *";
				cout<<"                             .";
				cout<<"         *          .   *"<<endl;
				cout<<"                                             ___..--'  .`."<<endl;
				cout<<"                                    ___...--'     -  .` `.`."<<endl;
				cout<<"                           ___...--' _      -  _   .` -   `.`.                           ________________________________________________________________________"<<endl;
				cout<<"                  ___...--'  -       _   -       .`  `. - _ `.`.                        |   __________________________________________________________________   |"<<endl;
				cout<<"           __..--'_______________ -         _  .`  _   `.   - `.`.                      |  |                          INSTRUCCIONES                           |  |"<<endl;
				cout<<"        .`    _ /\    -        .`      _     .`__________`. _  -`.`.                     |  |                                                                  |  |"<<endl;
				cout<<"      .` -   _ /  \_     -   .`  _         .` |    <3     |`.   - `.`.                   |  |  En cada intento, el jugador dice 4 dígitos (no repetidos) y el  |  |"<<endl;
				cout<<"    .`-    _  /   /\   -   .`        _   .`   |___________|  `. _   `.`.                 |  |  programa le da pistas de cuántos aciertos tuvo, sin indicarle   |  |"<<endl;
				cout<<"  .`________ /__ /_ \____.`____________.`     ___       ___  - `._____`|                 |  |  cuales fueron de la siguiente forma:                            |  |"<<endl;
				cout<<"    |   -  __  -|    | - |  ____  |   | | _  |   |  _  |   |  _ |                       |  |                                                                  |  |"<<endl;
				cout<<"    | _   |  |  | -  |   | |.--.| |___| |    |___|     |___|    |                       |  |                                                                  |  |"<<endl;
				cout<<"    |     |--|  |    | _ | |'--'| |---| |   _|---|     |---|_   |        *-*,           |  |    # Si algún dígito que dice el jugador esta dentro del         |  |"<<endl;
				cout<<"    |   - |__| _|  - |   | |.--.| |   | |    |   |_  _ |   |    |    ,*\/|`| \            |  |      numero a adivinar, pero no en la posición correcta,         |  |"<<endl;
				cout<<" ---``--._      |    |   |=|'--'|=|___|=|====|___|=====|___|====|    \'  | |'| *,        |  |      se llama PICA                                               |  |"<<endl;
				cout<<" -- . ''  ``--._| _  |  -|_|.--.|_______|_______________________|     \ `| | |/ )        |  |                                                                  |  |"<<endl;
				cout<<"`--._           '--- |_  |:|'--'|:::::::|:::::::::::::::::::::::|      | |'| , /        |  |    # Si el dígito esta en la posición adecuada, se llama         |  |"<<endl;
				cout<<"_____`--._ ''      . '---'``--._|:::::::|:::::::::::::::::::::::|      |'| |, /         |  |      FIJA                                                        |  |"<<endl;
				cout<<"----------`--._          ''      ``--.._|:::::::::::::::::::::::|    __|_|_|_|__        |  |                                                                  |  |"<<endl;
				cout<<"`--._ _________`--._'        --     .   ''-----.................'   [___________]       |  |                                                                  |  |"<<endl;
				cout<<"     `--._----------`--._.  _           -- . :''           -    ''   |         |        |  |  Así, las pistas serán la cantidad de PICAS y FIJAS que hayan y  |  |"<<endl;
				cout<<"          `--._ _________`--._ :'              -- . :''      -- . '' |         |        |  |  el juego termina cuando el jugador tiene 4 FIJAS                |  |"<<endl;
				cout<<" -- . ''       `--._ ---------`--._   -- . :''                       |         |        |  |__________________________________________________________________|  |"<<endl;                             
				cout<<"          :'        `--._ _________`--._:'  -- . ''      -- . ''     |_________|        |________________________________________________________________________|"<<endl;
				cout<<"  -- . ''     -- . ''    `--._----------`--._      -- . ''     -- . ''"<<endl;
				cout<<"                              `--._ _________`--._                                      =^..^= =^..^= =^..^=| Puedes rendirte ingresando -1 |=^..^= =^..^= =^..^="<<endl;
				cout<<" -- . ''           :'              `--._ ---------`--._-- . ''    -- . ''"<<endl;
				cout<<"          -- . ''       -- . ''         `--._ _________`--._   -- . ''                                      presiona 3 y enter para continuar..."<<endl;
				cout<<":'                 -- . ''          -- . ''  `--._----------`--._"<<endl;
				cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t     ";	   
				cin>>opcion4;
				
				while(opcion4 == 3){
					system("cls");
					cout<<"\t\t		   o_.-._                            .   . ."<<endl;
					cout<<"\t\t	             |_.-._|                        .  . .  '                            oo                                     dP "<<endl;        
					cout<<"\t\t	             |                         . '. '                                    oo                                     dP "<<endl;
					cout<<"\t\t	        ^^^^^^^                       :'                             .d8888b.    dP dP    dP .d8888b. .d8888b. 88d888b. 88 "<<endl;
					cout<<"\t\t	^^^ ^^^ | : : | ^^^ ^^^              .;      m p         o s         88'  `88    88 88    88 88'  `88 88'  `88 88'  `88 dP"<<endl;
					cout<<"\t\t	| |_| |_|     |_| |_| |              ..    e     e     m             88.  .88    88 88.  .88 88.  .88 88.  .88 88         "<<endl;
					cout<<"\t\t	|                     |           .--++-.          z a               `88888P8    88 `88888P' `8888P88 `88888P8 dP       oo"<<endl;
					cout<<"\t\t	|  :   :  .-.  :   :  |        .__|]_[]_'-......                                 88               .88                     "<<endl;
					cout<<"\t\t	|         | |         |         \\\ o o o '=-=-=-!                                 dP           d8888P                      "<<endl;
					cout<<"\t\t	|||||||||||||||||||||||~~~~~~~~~~\\\_____________|~~~~~~~~~~~~~~~"""<<endl;
					cout<<"\n\n";
					int termino=0;
					int num, n1, n2, n3, n4, contadorPicas, contadorFijas,j,temp;
					int numero[4];
					int intentos=0;
					int intentosReinicioFor=0;

                    //numero aleatorio
					srand(time(NULL));
					for(int i=1; i<10; i++){
						numero[i]=i;
					}
					for(int i=1;i<4;i++)
					{
						j=(rand()%9+1);
						temp=numero[i];
						numero[i]=numero[j];
						numero[j]=temp;
					}
					/*for(int i=1;i<5;i++)
					{
						cout<<numero[i];
					}*/

					while(termino==0){
							cout<<"\n\n\t\t\tIngresa el numero: "<<"\n\n";
							cout<<"\t\t\t";
							cin>>num;
							while(num>9999)
							{
								cout<<"\t\t\tIngresa de nuevo el número, de 4 cifras\n\n";
								cout<<"\t\t\t----------------8<---------------------------8<----------------\n";
								cout<<"\n\t\t\tIngresa el numero:\n\n\t\t\t";
								cin>>num;
							}
							while(num<1000 && num!=-1)
							{
								cout<<"\t\t\tIngresa un valor correcto de 4 cifras \n\n ";
								cout<<"\t\t\t----------------8<---------------------------8<----------------\n";
								cout<<"\n\t\t\tIngresa el numero:\n\n\t\t\t";
								cin>> num;
							}

							while(num<-1)
							{
								cout<<"\t\t\tIngresa un valor correcto. Tiene que ser positivo y de 4 cifras\n\n";
							    cout<<"\t\t\t----------------8<---------------------------8<----------------\n";
							    cout<<"\n\t\t\tIngresa el numero:\n\n\t\t\t";
								cin>>num;
							}
							n1=(num/1000);
							n2=((num%1000)/100);
							n3=(((num%1000)%100)/10);
							n4=((num%1000)%100)%10;

							contadorPicas=0;
							contadorFijas=0;

							if(n1==numero[1] && n2==numero[2] && n3==numero[3] && n4==numero[4]){
								cout<<"\n\n\n";
								cout<<"\t\t\t  	                           ^     ^     ^\n";
								cout<<"\t\t\t\t(          (    *         |V|   |V|   |V|        )   *   )       (\n";
								cout<<"\t\t\t\t )   *      )             | |   | |   | |        (       (   *    )\n";
								cout<<"\t\t\t\t(          (           (*******************)    *       *    )    *\n";
								cout<<"\t\t\t\t(     (    (           (    *         *    )               )    (\n";
								cout<<"\t\t\t\t )   * )    )          (   \|/       \|/     )         *    (      )\n";
								cout<<"\t\t\t\t(     (     *          (<<<<<<<<<*>>>>>>>>>)               )    (\n";
								cout<<"\t\t\t\t )     )        ((*******************************))       (  *   )\n";
								cout<<"\t\t\t\t(     (   *     ((      4 PICAS. ¡¡GANASTE!!     ))      * )    (\n";
								cout<<"\t\t\t\t ) *   )        ((   *    *   *    *    *    *   ))   *   (      )\n";
								cout<<"\t\t\t\t(     (         ((  \|/  \|/ \|/  \|/  \|/  \|/        ))        )    (\n";
								cout<<"\t\t\t\t*)     )        ((^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^))       (      )\n";
								cout<<"\t\t\t\t(     (  (**********************************************) )  * (\n";
								cout<<"\n\n\t\t\t\tpresiona enter para continuar...";
								termino=1;
							}
							else if(num==-1)
							{
								cout<<"\n\n\n";
								cout<<"\t\t\t\t             *  _|_"<<endl;
								cout<<"\t\t\t\t             .-' * '-. *"<<endl;
								cout<<"\t\t\t\t            /       * \\\""<<endl;
								cout<<"\t\t\t\t         *  ^^^^^|^^^^^"""<<endl;
								cout<<"\t\t\t\t             .~. |  .~."""<<endl;
								cout<<"\t\t\t\t            / ^ \\\| / ^ \\\""<<endl;
								cout<<"\t\t\t\t           (|   |J/|   |)"""<<endl;
								cout<<"\t\t\t\t           '\\\   /` \\\   /`"<<endl;
								cout<<"\t\t\t\t -- '' -'-'  ^`^    ^`^  -- '' -'-'"<<endl;
								cout<<"\n\t\t\t\t\t   te rendiste :c ";
								cout<<"\n\t\t\t\t\t El número era: ";
									for(int i=1;i<5;i++)
									{
										cout<<numero[i];
									}
									cout<<"\n\n\t\t\t\t   presiona enter para continuar...";
									termino=1;
							}
							else{
								contadorPicas=contadorPicas + determinarPica(n1, 2, numero);
								contadorPicas=contadorPicas + determinarPica(n2, 3, numero);
								contadorPicas=contadorPicas + determinarPica(n3, 4, numero);
								contadorPicas=contadorPicas + determinarPica(n4, 5, numero);

								if(n1==numero[1]){
									contadorFijas=contadorFijas+1;
								}
								if(n2==numero[2]){
									contadorFijas=contadorFijas+1;
								}
								if(n3==numero[3]){
									contadorFijas=contadorFijas+1;
								}
								if(n4==numero[4]){
									contadorFijas=contadorFijas+1;
								}
								intentos++;
								intentosReinicioFor++;
								cout<<"\t\t\t"<<contadorPicas<<"picas,"<<contadorFijas<<"fijas "<<"\t\t   ";
								cout<<"intentos: "<<intentos<<"\n\n";
								cout<<"\t\t\t----------------8<---------------------------8<----------------";
							}

							for(int intentosFor=0;intentosReinicioFor==10;intentosFor++)
							{
								cout<<"\n\n\n\n\t\t\tquieres rendirte? ";
								cin>>num;
									if(num==-1)
									{
									cout<<"\n\n\n";
									cout<<"\t\t\t\t             *  _|_"<<endl;
									cout<<"\t\t\t\t             .-' * '-. *"<<endl;
									cout<<"\t\t\t\t            /       * \\\""<<endl;
									cout<<"\t\t\t\t         *  ^^^^^|^^^^^"""<<endl;
									cout<<"\t\t\t\t             .~. |  .~."""<<endl;
									cout<<"\t\t\t\t            / ^ \\\| / ^ \\\""<<endl;
									cout<<"\t\t\t\t           (|   |J/|   |)"""<<endl;
									cout<<"\t\t\t\t           '\\\   /` \\\   /`"<<endl;
									cout<<"\t\t\t\t -- '' -'-'  ^`^    ^`^  -- '' -'-'"<<endl;
									cout<<"\n\t\t\t\t\t   te rendiste :c ";
									cout<<"\n\t\t\t\t\t El número era: ";
									for(int i=1;i<5;i++)
									{
										cout<<numero[i];
									}
									cout<<"\n\n\t\t\t\t   presiona enter para continuar...";
									termino=1;
									}
								intentosReinicioFor=0;
								intentosFor=0;
							}
					}
					datos.intentosFin = intentos;
					_getch();
				}
				break;
			}
			break;
		}
		crearAnadir2();
		//Pregunta para volver a iniciar el proceso	
		system("cls");
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
			cout<<"\t\t\t\t        |\\\___/|                .-.-."<<endl;
			cout<<"\t\t\t\t       =) ^Y^ (=             ==`. .'=="<<endl;
			cout<<"\t\t\t\t        \\\  ^  /                  '"<<endl;
			cout<<"\t\t\t\t         )=*=(         hola!! soy yo de nuevo."<<endl;
			cout<<"\t\t\t\t        /     \\\         .-.-.  .-.-.  .-.-.            +---------------------------------+"<<endl;
			cout<<"\t\t\t\t        |     |        =`. .'==`. .'==`. .'=           + || >Deseas volver al inicio? || +"<<endl;
			cout<<"\t\t\t\t       /| | | |\\\          '      '      '              +                S/N              +"<<endl;
			cout<<"\t\t\t\t       \\\| | |_|/\\\                                      +-------------------------------- +"<<endl;
			cout<<"\t\t\t\t   _/\\\_//_// ___/\\\_/\\\_/\\\_/\\\_/\\\_/\\\_/\\\_/\\\_/\\\_"<<endl;
			cout<<"\t\t\t\t   |  |  | \\\_) |  |  |  |  |  |  |  |  |  |"<<endl;
			cout<<"\t\t\t\t   |  |  |  |  |  |  |  |  |  |  |  |  |  |"<<endl;
			cout<<"\t\t\t\t   |  |  |  |  |  |  |  |  |  |  |  |  |  |"<<endl;
			cout<<"\t\t\t\t   |  |  |  |  |  |  |  |  |  |  |  |  |  |"<<endl;
			cout<<"\t\t\t\t   |  |  |  |  |  |  |  |  |  |  |  |  |  |"<<endl;
			cout<<"\t\t\t\t ||||||||||||||||||||||||||||||||||||||||||||"<<endl;
		
		opcion = getch();			
	}while (opcion == 'Y' || opcion == 'y' || opcion == 'S' || opcion == 's');
	system("cls");
	ListasOrganizada();
	cin.get();
	cin.ignore();
	system("cls");
	cout<<"\n\n\n\n"<<endl;
	cout<<"\t\t\t	         _ _"<<endl;
	cout<<"\t\t\t                ( Y )"<<endl;
	cout<<"\t\t\t                 \\\ /  "<<endl;
	cout<<"\t\t\t                  \\\          /^\\"<<endl;
	cout<<"\t\t\t                    )       //^\\\\"<<endl;
	cout<<"\t\t\t                 (         //   \\\\"<<endl;
	cout<<"\t\t\t                   )      //     \\\\"<<endl;
	cout<<"\t\t\t                  __     //       \\\\"<<endl;
	cout<<"\t\t\t                 |=^|   //    _    \\\\"<<endl;
	cout<<"\t\t\t               __|= |__//    (+)    \\\\"<<endl;
	cout<<"\t\t\t              /LLLLLLL//      ~      \\\\                             ___                                            ___"<<endl; 
	cout<<"\t\t\t             /LLLLLLL//               \\\\                            | |____________________________________________| |__  "<<endl;
	cout<<"\t\t\t            /LLLLLLL//                 \\\\                        (__   ____________________________________________   __)"<<endl;
	cout<<"\t\t\t           /LLLLLLL//  |~[|]~| |~[|]~|  \\\\                          | |                                            | |"<<endl;
	cout<<"\t\t\t           ^| [|] //   | [|] | | [|] |   \\\\                         | |                                            | |  "<<endl;
	cout<<"\t\t\t            | [|] ^|   |_[|]_| |_[|]_|   |^                         | |            ~ GRACIAS POR JUGAR ~           | |"<<endl;
	cout<<"\t\t\t         ___|______|                     |                          | |                                            | |"<<endl;
	cout<<"\t\t\t        /LLLLLLLLLL|_____________________|                          | |       °Esperamos volver a verte pronto     | |"<<endl;
	cout<<"\t\t\t       /LLLLLLLLLLL/LLLLLLLLLLLLLLLLLLLLLL\\\                         | |                                            | |"<<endl;
	cout<<"\t\t\t      /LLLLLLLLLLL/LLLLLLLLLLLLLLLLLLLLLLLL\\\                        | |____________________________________________| |__"<<endl;
	cout<<"\t\t\t      ^||^^^^^^^^/LLLLLLLLLLLLLLLLLLLLLLLLLL\\\                    (__   ____________________________________________   __)"<<endl;
	cout<<"\t\t\t       || |~[|]~|^^||^^^^^^^^^^||^|~[|]~|^||^^                      | |                                            | |"<<endl;
	cout<<"\t\t\t       || | [|] |  ||  |~~~~|  || | [|] | ||                        ^^^                                            ^^^ "<<endl;
	cout<<"\t\t\t       || |_[|]_|  ||  | [] |  || |_[|]_| ||"<<endl;
	cout<<"\t\t\t       ||__________||  |   o|  ||_________||                 |\\\___/|"<<endl;
	cout<<"\t\t\t     .'||][][][][][||  | [] |  ||[][][][][||.'.             =) ^Y^ (="<<endl;
	cout<<"\t\t\t    . '||[][][][][]||_-`----'-_||][][][][]||""                 \\\  ^  /"<<endl;
	cout<<"\t\t\t  ^^^^^^^^^^^^^^^^^@/-- -- - --\\\@^^^^^^^^^^^^^^^^             )=*=("<<endl;
	cout<<"\t\t\t  ^^^^^^^^^^^^^^^^@/-- -- - -- -\\\@^^^^^^^^^^^^^^^^^          /     \\\ "<<endl;
	cout<<"\t\t\t ^^^^^^^^^^^^^^^^@/- - --- -- - -\\\@^^^^^^^^^^^^^^^^^         |     |"<<endl;
	cout<<"\t\t\t^^^^^^^^^^^^^^^^@/ - -- -- -- -- -\\\@^^^^^^^^^^^^^^^^        /| | | |\\\ "<<endl;
	cout<<"\t\t\t^^^^^^^^^^^^^^^@/ -- --- --- -- - -\\\@^^^^^^^^^^^^^^^^       \\\| | |_|/\\\ "<<endl;
	cout<<"\t   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
	cout<<"\n\n\n\n\n";
	return 0;
}

void crearAnadir()
{
	string nombre;
    ofstream archivo2;
    archivo2.open("datos.txt",ios::out | ios::app);//añadir cosas
    cin >> nombre;
 	
    if(archivo2.fail())
    {
        cout<<"no se pudo abrir el archivo";
        exit(1);
    }
    else
    {
    	archivo2 << " " << nombre;
	}
    archivo2.close();
}
void crearAnadir2()
{
    ofstream archivo4;
    datos.intentosFin;
    archivo4.open("datos.txt",ios::out | ios::app);//añadir cosas
    if(archivo4.fail())
    {
        cout<<"no se pudo abrir el archivo";
        exit(1);
    }
    
	else
    {
    	archivo4 << " " << datos.intentosFin;
	}
    archivo4.close();
}
void ListasOrganizada()
{
    string nombre;
    int intentos;
    int conteoRegistro = 0;
    int i = 0;
    ifstream archivo1("datos.txt");
	while(!archivo1.eof()){
     	archivo1 >> datos.Nombre;
       	archivo1 >> datos.intentosFin;
       	conteoRegistro++;
	}
	Usuario tablero[conteoRegistro];
	archivo1.close();
	ifstream archivo3("datos.txt");
	while(!archivo3.eof()){
     	archivo3 >> tablero[i].Nombre;
       	archivo3 >> tablero[i].intentosFin;
       	i++;
	}
	for(int h = 0; h < conteoRegistro; h++) {
		for(int x = 0; x < conteoRegistro; x++){
			if(tablero[h].intentosFin < tablero[x].intentosFin) {
				swap(tablero[h], tablero[x]);
			}
		}
	}
	cout<<"\n\n\n\n\n\n\n\t\t\t\t\t  dP                        d8888b. "<<endl;
	cout<<"\t\t\t\t\t  88                            `88 "<<endl;
	cout<<"\t\t\t\t\td8888P .d8888b. 88d888b.     aaad8' "<<endl;
	cout<<"\t\t\t\t\t  88   88'  `88 88'  `88        `88 "<<endl;
	cout<<"\t\t\t\t\t  88   88.  .88 88.  .88        .88 "<<endl;
	cout<<"\t\t\t\t\t  dP   `88888P' 88Y888P'    d88888P "<<endl;
	cout<<"\t\t\t\t\t                88                  "<<endl;
	cout<<"\t\t\t\t\t                dP "<<endl;
	for(int z = 0; z < 3; z++) {
		cout<<tablero[z].Nombre<<tablero[z].intentosFin<<endl;
	}
	cout<<"\t\t\t\t	                                                |>>>"<<endl;
	cout<<"\t\t\t\t\t                                                |"<<endl;
	cout<<"\t\t\t\t\t                                            _  _|_  _"<<endl;
	cout<<"\t\t\t\t\t                                           |;|_|;|_|;|"<<endl;
	cout<<"\t\t\t\t\t                                           \\\\.    .  /"<<endl;
	cout<<"\t\t\t\t\t                                            \\\\:  .  /"<<endl;
	cout<<"\t\t\t\t\t                                             ||:   |"<<endl;
	cout<<"\t\t\t\t\t                                             ||:.  |"<<endl;
	cout<<"\t\t\t\t\t                                             ||:  .|"<<endl;
	cout<<"\t\t\t\t\t                                             ||:   |       \\\,/"<<endl;
	cout<<"\t\t\t\t\t                                             ||: , |            /`\\\ "<<endl;
	cout<<"\t\t\t\t\t                                             ||:   |"<<endl;
	cout<<"\t\t\t\t\t                                             ||: . |"<<endl;
	cout<<"\t\t\t\t\t              __                            _||_   |"<<endl;
	cout<<"\t\t\t\t\t     ____--`~    '--~~__            __ ----~    ~`---,              ___"<<endl;
	cout<<"\t\t\t\t\t-~--~                   ~---__ ,--~'                  ~~----_____-~'   `~----~~"<<endl;
    archivo3.close();
}

void musica()
{
	char soundfile[] = "C:\soundtrack_.wav";
    PlaySound((LPCSTR)soundfile,NULL,SND_FILENAME | SND_ASYNC);

}
