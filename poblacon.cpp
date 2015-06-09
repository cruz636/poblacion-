#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int c;
	
	FILE * archivo1;
	
	
	archivo1 = fopen("poblacion.txt","wt");
	for(int i=0;i<45;i++){
		cout << "ingrese cantidad de habitantes de la ciudad numero" << i<<endl;
		cin >> c;
		char d = c;
		
		fwrite(&d, sizeof(c),sizeof(c) ,archivo1);
	}
	
	fclose(archivo1);
	return 0;
}
