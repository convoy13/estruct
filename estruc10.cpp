#include <iostream>
#include <conio.h>
#include<string.h>
using namespace std;
void menu();

struct inscripcion{
char nombre[20];
int tiempo;
char revista[20];
};

int main (int argc, char** argv){
menu();
getch();

return 0;
}
void menu(){
	struct inscripcion P[10];
	struct inscripcion *apuntador;
	apuntador=P;
	int opcion,C;
	bool opcion2=false;
	 char eliminar[20];
    do{
        system("cls");
        cin.clear();
        cout << "menu" << endl;
        cout << "\t1 .- Alta de usuario" << endl;
        cout << "\t2 .- borrar usuario" << endl;
        cout << "\t3 .- Checar usuarios" << endl;
        cout<<"\t4 .- Salir"<<endl;
        cout << "Elije una opcion: ";
        cin >> opcion;
        
        for(int i=0; i<10; i++){
        	P[i].nombre[0]=='n';
		}
 
		switch(opcion)
		{
			case 1:
				for(int i=0;i<10; i++){
                if(P[i].nombre[0]!='n'){
                    cout<<"Nombre: "; fflush(stdin);cin.getline(P[i].nombre,20,'\n');
                    cout<<"Tiempo(meses): "; cin>>P[i].tiempo;
                    cout<<"Nombre de la revista: "; fflush(stdin); cin.getline(P[i].revista,20,'\n');
                    cout<<'\n';
                    break;
                    }else
                    cout<<"El "<<i+1<<"º espacio esta ocupado"<<endl;
    
				}
			    system(" pause");
				break;
 
			case 2:
				system("cls");
				cout<< "Has elejido borrar usuario.\n";
				fflush(stdin);
				cin.getline(eliminar,20,'\n');
				for(int i=0; i<10; i++){
					C=strcmp(apuntador->nombre,eliminar);
					if(C!=0)
					apuntador++;
				    else{
				    P[i].nombre[0]='n';
					cout<<"usuario eliminado";
					break;	
					}
				}
			    system(" pause");
				break;
 
			case 3:
				system("cls");
				for(int i=0; i<1; i++){
				cout << "Has elejido Checar usuarios.\n";
				cout<<"Nombre del subscriptor:"<<apuntador->nombre;
				cout<<"	Tiempo de subscripcion : "<<apuntador->tiempo;
				cout<<"	Nombre de la revista : "<<apuntador->revista;
				cout<<endl;
				cout<<endl;
			}
			    system(" pause");
				break;
		    case 4:
				system("cls");
				cout << "Has elejido salir del programa.\n";
				system(" pause");
				break;
 
			default:
				system("cls");
				cout << "Opcion no valida.\a\n";
				system(" pause");
				break;
		}
    }while(opcion2!=true);
    
}

