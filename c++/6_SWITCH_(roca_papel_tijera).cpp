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
    
    
    switch(tuOpcion){
    case 'r'://  tu opcion fue roca
          switch(pcOpcion){
            case 'r': 
                  cout<<"Es un empate";
                 break;
            case 'p':
                 cout<<"Tu pierdes :("; 
                 break;
            case 't':
                 cout<<"Tu ganas!";
                 break;     
          }
         break;
    case 'p':// tu opcion fue papel
         switch(pcOpcion){
            case 'r':
                 cout<<"Tu ganas!";
                 break;
            case 'p':
                 cout<<"Es un empate";
                 break;
            case 't':
                 cout<<"Tu pierdes :("; 
                 break;     
          }
         break;
    case 't':// tu opcion fue tijera
         switch(pcOpcion){
            case 'r':
                 cout<<"Tu pierdes :("; 
                 break;
            case 'p':
                 cout<<"Tu ganas!";
                 break;
            case 't':
                 cout<<"Es un empate";
                 break;     
          }
         break;
          
    default:
         //no ingresastes ni 'r' 'p' o 't' 
         cout<<"No podemos jugar, No ingresaste bien la opcion"<<endl;                   
    }
                  
}
