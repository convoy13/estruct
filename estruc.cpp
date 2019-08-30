#include<iostream>
using namespace std;

struct persona{
char nombre[20];
int edad;
}persona1,persona2;

int main (int argc, char** argv){
	
        cout<<"dame el nombre de la persona: "<<endl;
        cin.getline(persona2.nombre,20,'/n');
 
 
       cout<<"dame la edad de la persona: "<<endl;
      cin>>persona2.edad;
      
      cout<<"el nombre es: "<<persona2.nombre<<endl;
      cout<<"la edad es; "<<persona2.edad<<endl;
      system("pause");
      
      return 0;



}
