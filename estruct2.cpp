#include <iostream>
#include <conio.h>

using namespace std;
struct direccion{
char calle[20];
int cp;
char ciudad[20];
};

struct persona{
char nombre[20];
int edad;
float estatura;
struct direccion dire;
};

int main (int argc, char** argv){
struct persona p1[5];
struct persona *apuntador;

cout<<"nombre:";
cin.getline(apuntador->nombre,20,'\n');
cout<<"Edad: ";
cin>>apuntador->edad;
cout<<"Estatura: ";
cin>>apuntador->estatura;
cout<<"Calle: ";

cin.getline(apuntador->dire.calle,20,'\n');
cin.getline(apuntador->dire.calle,20,'\n');
}

cout<<"nombre :"<<apuntador->nombre;
cout<<"edad : "<<apuntador->edad;
cout<<"estatura : "<<apuntador->estatura;
cout<<"calle : "<<apuntador->dire.calle;

getch();
return 0;
}

