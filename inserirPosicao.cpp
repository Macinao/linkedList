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

void inserirPosicao(No *&cabeca, int valor, int posicao){
	
	No *novoNo = new No;
	novoNo->dados = valor;
	novoNo->proximo = NULL;
	
	No *medir = cabeca;
	int tamanho = 0;
	
	while(medir != NULL){
		medir = medir->proximo;
		tamanho += 1;
	}
	
	if(posicao == 0){
		
		novoNo->proximo = cabeca;
		cabeca = novoNo;
		return;
		
	}
	
	else if(posicao > tamanho || posicao < 0){
		
		cout << "Posicao invalida!" << endl;
		return;
	}
	
	No *contador = cabeca;
	No *anterior;
	
	for(int i = 0; i < posicao; i++){
		
		anterior = contador;
		contador = contador->proximo;
	}
	
	anterior->proximo = novoNo;
	novoNo->proximo = contador;
	
	
};

int main() {
	
	No *inicio = NULL;

	inserirPosicao(inicio,5,0);
	inserirPosicao(inicio,6,1);
	inserirPosicao(inicio,7,2);
	inserirPosicao(inicio,8,3);

	listar(inicio);
	
	inserirPosicao(inicio,1,0);
	inserirPosicao(inicio,2,1);
	inserirPosicao(inicio,3,2);
	inserirPosicao(inicio,4,3);
	
	listar(inicio);
	
	return 0;
}
