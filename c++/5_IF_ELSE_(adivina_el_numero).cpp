#include <iostream>

using namespace std;

int main()
{
  
  int numeroSecreto;
  int tuAdivinanza;
  srand(time(0));
  numeroSecreto=rand()%20+1; // generamos un numero aleatorio entre  1 y 20
  cout<<"Adivina el numero secreto .. esta entre 1 y 20\nJuguemos!\nTienes 3 oportunidades para adivinar\n";
  cout<<"Tu adivinanza es:";
  cin>>tuAdivinanza;
  
  if(tuAdivinanza==numeroSecreto)
     cout<<"Genial Ganastes!"; 
  else {    
      if(tuAdivinanza>numeroSecreto)
         cout<<"El numero es muy alto.";
      if(tuAdivinanza<numeroSecreto)   
         cout<<"El numero es muy bajo.";  
      
      cout<<"Intentemoslo de nuevo! \n";
      cout<<"Tu adivinanza es:";
      cin>>tuAdivinanza;     
      if(tuAdivinanza==numeroSecreto)
         cout<<"Genial Ganastes!"; 
         
      else{   
          if(tuAdivinanza>numeroSecreto)
             cout<<"El numero aun es muy alto.";
          if(tuAdivinanza<numeroSecreto)   
             cout<<"El numero aun es muy bajo.";  
          
          cout<<"Intentemoslo una ultima vez! \n";
          cout<<"Tu adivinanza es:";
          cin>>tuAdivinanza;        
          if(tuAdivinanza==numeroSecreto)
             cout<<"Genial Ganastes!";  
          if(tuAdivinanza!=numeroSecreto)
             cout<<"Lo siento perdistes :( "; 
      }
  }
                 
}
