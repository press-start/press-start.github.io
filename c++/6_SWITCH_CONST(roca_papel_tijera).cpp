// error sitch , se genera error al usar una variable en case (variable): 
#include <iostream>

using namespace std;

int main()
{

    const char roca = 'r';
    const char papel = 'p';
    const char tijera= 't';
    char tuOpcion;
    char pcOpcion;
    srand(time(0));// genera  semilla basado en el reloj 
    cout<<"Juguemos!\nIngresa tu opcion ...\tRoca: \'r\'\tPapel:\'p\' \tTijeras:\'t\'\nIngresa tu jugada:";
    cin>>tuOpcion;     
    //generamos la eleccion del computador
    int aleatorio= rand()%3;// generar numeros aleatorios entre  0 - 2

    if(aleatorio==0)
       pcOpcion=roca;
    else if(aleatorio==1)
       pcOpcion=papel;
    else 
       pcOpcion=tijera;
    
    
    switch(tuOpcion){
    case roca://  tu opcion fue roca
    
          switch(pcOpcion){
            case roca: 
                  cout<<"Es un empate";
                 break;
            case papel:
                 cout<<"Tu pierdes :("; 
                 break;
            case tijera:
                 cout<<"Tu ganas!";
                 break;     
          }
         break;
    case papel:// tu opcion fue papel
         switch(pcOpcion){
            case roca:
                 cout<<"Tu ganas!";
                 break;
            case papel:
                 cout<<"Es un empate";
                 break;
            case tijera:
                 cout<<"Tu pierdes :("; 
                 break;     
          }
         break;
    case tijera:// tu opcion fue tijera
         switch(pcOpcion){
            case roca:
                 cout<<"Tu pierdes :("; 
                 break;
            case papel:
                 cout<<"Tu ganas!";
                 break;
            case tijera:
                 cout<<"Es un empate";
                 break;     
          }
         break;
          
    default:
         //no ingresastes ni 'r' 'p' o 't' 
         cout<<"No podemos jugar, No ingresaste bien la opcion"<<endl;                   
    }
                             
}
