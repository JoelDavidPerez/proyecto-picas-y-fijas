#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
#include <time.h>

using namespace std;

int determinarPica(int num, int pos, int numero[]){
    int devuelve=0;
    for(int i=0; i<4; i++){
        if(num==numero[i] && pos!=(i+1)){
            devuelve=1;
            break;
        }
    }
    return devuelve;
}

int main(){
    
    int termino=0;
    int num, n1, n2, n3, n4, contadorPicas, contadorFijas,j,temp;
    int numero[4];
    
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
    
    while(termino==0){
        cout<<"Ingresa el numero: "<<endl;
        cin>>num;
        while(num>9999)
        {
            cout<<"Ingresa de nuevo el número, de 4 cifras";
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
            
            cout<<contadorPicas<<"picas,"<<contadorFijas<<"fijas ";
        }
        
    }
    _getch();
}