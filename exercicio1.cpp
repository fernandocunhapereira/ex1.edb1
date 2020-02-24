#include <iostream>
#include <cstdlib>
#include <ctime>

int main(int argc, char *argv[]){

	//declaracao de variaveis
	size_t tam=0;
	size_t *v;

	//usa o relogio para de alguma forma gerar numeros aleatorios
	std::srand(std::time(0));
	
	//imprime quantidade de argumentos, e o segundo argumento
	std::cout<<argc<<" <<< quantidade de argumentos"<<std::endl;
	std::cout<<argv[1]<<" <<< 2º argumento (tamanho vetor)"<<std::endl;

	//atribui o segundo parametro a variavel de tamanho
	tam=atoi(argv[1]);
	std::cout<<std::endl;
		
	//aloca memoria para o vetor (conforme variavel tamanho)
	//v=(size_t*) malloc(tam*sizeof(size_t)); 
	v= new size_t[tam];

	//preenche vetor com valores aleatorios
	for(size_t i=0; i<tam; i++){
		v[i]=rand()%1000;
	}	

	//imprime elementos antes da ordenacao do vetor
	for(size_t i=0; i<tam;i++){
		std::cout<<v[i]<<std::endl;
	}
	std::cout<<"^ antes da ordenação"<<std::endl;
	std::cout<<" "<<std::endl;

	//faz a ordenação dos elementos (crescente)
	for(size_t i=0; i<tam-1;i++){
		for(size_t j=i+1;j<tam;j++){
			if (v[i]>v[j]){
				int aux;
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
		}
	}

	//imprime elementos ordenados do vetor
	for(size_t i=0; i<tam;i++){
		std::cout<<v[i]<<std::endl;
	}
	std::cout<<"^ depois da ordenação"<<std::endl;
	std::cout<<" "<<std::endl;

	//libera memoria
	delete v;
return 0;
}