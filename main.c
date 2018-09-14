#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void funcion(char nombre[30]);

int main(int argc, char *argv[])
{
 	funcion(argv[1]);
 	
 	system("pause");
 	return 0;
}

void funcion(char nombre[30])
{
 	fstream archivo(nombre,ios::in); // crea el vinculo con el archivo
 	char palabra[40];
 	int numero;
 	char cadena[80];
 	strcpy(cadena,"");
	while (archivo>>palabra>>numero){
		for(int i=0; i<numero+1; i++)
		{
			strcat(cadena,palabra);
		}
		int k=0;
		for(int i=0; i<strlen(palabra); i++)
		{
			for(int j=k++; j<strlen(palabra)*numero+i; j++)
			{
				cout<<cadena[j];
			}
		cout<<endl;
		}
 	}
 	archivo.close();
}
