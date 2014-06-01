#include <iostream>

using namespace std;

int main()
{
    
    char tuOpcion;
    char pcOpcion;
    srand(time(0));// genera  semilla basado en el reloj 
    cout<<"Juguemos!\nIngresa tu opcion ...\tRoca: \'r\'\tPapel:\'p\' \tTijeras:\'t\'\nIngresa tu jugada:";
    cin>>tuOpcion;     
    //generamos la eleccion del computador
    int aleatorio= rand()%3;// generar numeros aleatorios entre  0 - 2

    if(aleatorio==0)
       pcOpcion='r';
    else if(aleatorio==1)
       pcOpcion='p';
    else 
       pcOpcion='t';
    
    if(tuOpcion==pcOpcion)
       cout<<"Es un empate";
    else if(tuOpcion=='r'){//si no hubo empate, analizaremos las juagadas q realizaron
         if(pcOpcion=='t')
            cout<<"Tu ganas!";
         else // si la pc no elijio 't' ,entonces elijio 'p' (papel) 
            cout<<"Tu pierdes :(";    
         }
     else if(tuOpcion=='p'){
          if(pcOpcion=='r')
             cout<<"Tu ganas!";
         else
            cout<<"Tu pierdes :(";    
          }           
     else if(tuOpcion=='t') { 
          if(pcOpcion=='p')
             cout<<"Tu ganas!";
         else
            cout<<"Tu pierdes :(";    
          }
     else {//no ingresastes ni 'r' 'p' o 't' 
          cout<<"No podemos jugar, No ingresaste bien la opcion"<<endl;
          }                       
}
