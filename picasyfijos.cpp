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
		cout<<"     ¶__¶¶¶¶¶¶__¶¶¶¶¶__¶¶¶¶¶___       ***********************                          presiona 1                          ***********************"<<endl;
		         cout<<"     ¶__¶¶¶¶¶¶_________________¶               *****         (\_/)                                                                   *****          (\_/)"<<endl;
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
		cout<<"\n\t\t\t\t\t       +-----------------++-----------------++-----------------++-----------------+                                        ";
		cin>>opcion2;
		
		while(opcion2 == 1){
			system("cls");
			cout<<"\n\n\n";
			cout<<"\t.:  ::      -.         -   .:.::          :.   :: = :: -       *                                                             "<<endl;  
			cout<<"\t    .            *       ...                            ...        .                                                                           "<<endl;
			cout<<"\t  :.    :.                     *  :  : ..        ..    *                                                                                       "  <<endl;
			cout<<"\t  _____     *   ____     _______________   ________      _________                              QUIEN ERES?                                   '"<<endl;
			cout<<"\t |o o o|_______|    |___|               | | # # #  |____| o o o o | *                   .-.-.  .-.-.  .-.-.  .-.-.                      "<<endl;
			cout<<"\t |o o o|  * * *|: ::|. .|               |o| # # #  |. . | o o o o |                    =`. .'==`. .'==`. .'==`. .'=                          "<<endl;
			cout<<"\t |o o o|* * *  |::  |. .| []  []  []  []|o| # # #  |. . | o o o o |                       '      '      '      '                      "<<endl;
			cout<<"\t |o o o|**  ** |:  :|. .| []  []  []    |o| # # #  |. . | o o o o |              "<<endl;
			cout<<"\t |_[]__|__[]___|_||_|__<|____________;;_|-|___/\___ |_ ._|____[]___|          "<<"\n";  
			cout<<"\t------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n";
			cout<<"												          ______                      "<<endl;
			cout<<"												         /|_||_\`.__                      "<<endl;
			cout<<"												        (   _    _ _\                   "<<endl;
			cout<<"												        =`-(_)--(_)-'           "<<endl;
			cout<<"\t------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;                                   
			cout<<"	            []                                       []                         []                                       []                         []"<<endl;
			cout<<"	          .:[]:_                                   ,:[]:.                     .:[]:_                                   ,:[]:.                     .:[]"<<endl;
			cout<<"	        .: :[]: :-.                             ,-: :[]: :.                 .: :[]: :-.                             ,-: :[]: :.                 .: :[]"<<endl;
			cout<<"	      .: : :[]: : :`._                       ,.': : :[]: : :.             .: : :[]: : :`._                       ,.': : :[]: : :.             .: : :[]"<<endl;
			cout<<"	    .: : : :[]: : : : :-._               _,-: : : : :[]: : : :.         .: : : :[]: : : : :-._               _,-: : : : :[]: : : :.         .: : : :[]"<<endl;
			cout<<"	_..: : : : :[]: : : : : : :-._________.-: : : : : : :[]: : : : :-._ _..: : : : :[]: : : : : : :-._________.-: : : : : : :[]: : : : :-._ _..: : : : :[]"<<endl;
			cout<<"	_:_:_:_:_:_:[]:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:[]:_:_:_:_:_:_ _:_:_:_:_:_:[]:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:[]:_:_:_:_:_:_ _:_:_:_:_:_:[]"<<endl;
			cout<<"	!!!!!!!!!!!![]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![]!!!!!!!!!!!!!!!!!!!!!!!!![]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![]!!!!!!!!!!!!!!!!!!!!!!!!![]"<<endl;
			cout<<"	^^^^^^^^^^^^[]^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^[]^^^^^^^^^^^^^^^^^^^^^^^^^[]^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^[]^^^^^^^^^^^^^^^^^^^^^^^^^[]"<<endl;
			cout<<"                                        |'\\"<<endl; 
			cout<<"                                        |_'\\  "<<endl; 
			cout<<"                                        |__'\\                                           +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;                        
			cout<<"                                        |___'\\                                          +-   Digita tu                usuario    -+    "<<endl; 
			cout<<"                                        |____'\\                                         +-               nombre de               -+ "<<endl;  
			cout<<"                                        |_____'\\                                        +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+           " <<endl; 
			cout<<"                                        |______'\\" <<endl; 
			cout<<"                                  _____ |_______'\\____" <<endl; 
			cout<<"                                  \___________________/~~~~" <<endl; 
			cout<<"\t,.-~*´¨¯¨`*•~-.¸,.-~*´¨¯¨`*•~-.¸,.-~*´¨¯¨`*•~-.¸,.-~*´¨¯¨`*•~-.¸,.-~* ,.-~*´¨¯¨`*•~-.¸,."<<endl;  
			cout<<"\tx´¨¯¨`*•~-.¸,.-~*´¨¯¨`*•~-.¸,.-~*´¨¯¨`*•~-.¸,.-~*´ `*•~-.¸,.-~*´`*•~-.¸,.-~*´•~-.¸,.-~*´"; 
			cin.ignore();
			cout<<"             ";
			getline(cin,datos.Nombre);
			cout<<"° \n\n\t\t\t\t\t\t\t\t\t\t\tpresiona 2 para continuar: ";
			
			cin>>opcion3;
			
			while(opcion3 = 2){
				system("cls");
				cout<<"\n\n"<<endl; 
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
				cout<<"          -- . ''       -- . ''         `--._ _________`--._   -- . ''                                           presiona 3 para continuar..."<<endl;
				cout<<":'                 -- . ''          -- . ''  `--._----------`--._"<<endl;
				cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t     ";	   
				cin>>opcion4;
				
				while(opcion4 == 3){
					system("cls");
					cout<<"\t\t				 o_.-._                            .   . ."<<endl;
					cout<<"\t\t	             |_.-._|                        .  . .  '                            oo                                     dP "<<endl;        
					cout<<"\t\t	             |                         . '. '                                    oo                                     dP "<<endl;
					cout<<"\t\t	        ^^^^^^^                       :'                             .d8888b.    dP dP    dP .d8888b. .d8888b. 88d888b. 88 "<<endl;
					cout<<"\t\t	^^^ ^^^ | : : | ^^^ ^^^              .;      m p         o s         88'  `88    88 88    88 88'  `88 88'  `88 88'  `88 dP"<<endl;
					cout<<"\t\t	| |_| |_|     |_| |_| |              ..    e     e     m             88.  .88    88 88.  .88 88.  .88 88.  .88 88         "<<endl;
					cout<<"\t\t	|                     |           .--++-.          z a               `88888P8    88 `88888P' `8888P88 `88888P8 dP       oo"<<endl;
					cout<<"\t\t	|  :   :  .-.  :   :  |        .__|]_[]_'-......                                 88               .88                     "<<endl;
					cout<<"\t\t	|         | |         |         \\\ o o o '=-=-=-!                                 dP           d8888P                      "<<endl;
					cout<<"\t\t	-------------------------~~~~~~~~\\\_____________|~~~~MC~~~~"""<<endl;
					
					int termino=0;
					int num, n1, n2, n3, n4, contadorPicas, contadorFijas,j,temp;
					int numero[4];
					int intentos=0;
					int intentosReinicioFor=0;


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

					while(termino==0){
							cout<<"Ingresa el numero: "<<endl;
							cin>>num;
							while(num>9999)
							{
								cout<<"Ingresa de nuevo el número, de 4 cifras";
								cin>>num;
							}
							/*while(num<100)
							{
								cout<<"Ingresa un valor correcto de 4 cifras por favor: ";
								cin>> num;
							}*/
							while(num<-1)
							{
								cout<<"Ingresa un valor correcto. Tiene que ser positivo y de 4 cifras";
								cin>>num;
							}
							n1=(num/1000);
							n2=((num%1000)/100);
							n3=(((num%1000)%100)/10);
							n4=((num%1000)%100)%10;

							contadorPicas=0;
							contadorFijas=0;

							if(n1==numero[0] && n2==numero[1] && n3==numero[2] && n4==numero[3]){
								cout<<"4 fijas. Ganaste";
								termino=1;
							}
							else if(num==-1)
							{
								cout<<"te rendiste :c";
								termino=1;
							}
							else{
								contadorPicas=contadorPicas + determinarPica(n1, 1, numero);
								contadorPicas=contadorPicas + determinarPica(n2, 2, numero);
								contadorPicas=contadorPicas + determinarPica(n3, 3, numero);
								contadorPicas=contadorPicas + determinarPica(n4, 4, numero);

								if(n1==numero[0]){
									contadorFijas=contadorFijas+1;
								}
								if(n2==numero[1]){
									contadorFijas=contadorFijas+1;
								}
								if(n3==numero[2]){
									contadorFijas=contadorFijas+1;
								}
								if(n4==numero[3]){
									contadorFijas=contadorFijas+1;
								}
								intentos++;
								intentosReinicioFor++;
								cout<<contadorPicas<<"picas,"<<contadorFijas<<"fijas "<<endl;
								cout<<"intentos: "<<intentos<<endl;
							}

							for(int intentosFor=0;intentosReinicioFor==20;intentosFor++)
							{
								cout<<"rindete";
								cin>>num;
									if(num==-1)
									{
									cout<<"te rendiste :c\n";
									cout<<"El número era: ";
									for(int i=0;i<4;i++)
									{
										cout<<numero[i];
									}
									termino=1;
									}
								intentosReinicioFor=0;
								intentosFor=0;
							}
					}
					_getch();
				}
				break;
			}
			break;
		}
		//Pregunta para volver a iniciar el proceso	
		cout << "\n\t\t-------------------------------------------------------" ;
		cout << "\n\n\n\t>Desea repetir el proceso? S/N" << endl;
		opcion = getch();			
	}while (opcion == 'Y' || opcion == 'y' || opcion == 'S' || opcion == 's');
	cout<<"\n\n\t\t~ Gracias por usar nuestros servicios. Tenga un bonito día ~"<<endl;
	return 0;
}
