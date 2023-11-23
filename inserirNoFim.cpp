#include <iostream>

using namespace std;

struct  No {
	
    int dados;
    No *proximo;
};

void listar(No *cabeca){

	cout << "\n[ ";

    while (cabeca != NULL){
        cout << cabeca -> dados << " ";
        cabeca = cabeca -> proximo;
    }
    cout << "]" << endl;
};

void inserirFim(No *&cabeca, int valor){
	
	No *novoNo = new No;
	novoNo->dados = valor;
	novoNo->proximo = NULL;
	
	if(cabeca == NULL){
		
		cabeca = novoNo;
		return;
		
	}
	
	No *aux = cabeca;
	
	while(aux->proximo != NULL){
		
		aux = aux->proximo;
		
	}
	
	aux->proximo = novoNo;
	
};

int main() {
	
	No *inicio = NULL;

	inserirFim(inicio,1);
	inserirFim(inicio,2);
	inserirFim(inicio,3);
	
    listar(inicio);
    
    inserirFim(inicio,4);
	inserirFim(inicio,5);
	inserirFim(inicio,6);
	
    listar(inicio);
	
	return 0;
}
