#include <iostream>

using namespace std;

struct  No {
	
    int dados;
    No *proximo;
    
};

void listar(No *cabeca){

	cout << "\n[ ";

    while (cabeca->proximo != NULL){
        cout << cabeca -> dados << " ";
        cabeca = cabeca -> proximo;
    }
    cout << "]" << endl;
};

void inserirInicio(No *&cabeca, int valor){
	
	No *novoNo = new No;
	novoNo->dados = valor;
	novoNo->proximo = cabeca;
	
	cabeca = novoNo;
	
};

int main() {
	
	No *inicio;

	inserirInicio(inicio,1);
	inserirInicio(inicio,2);
	inserirInicio(inicio,3);
	
    listar(inicio);
    
    inserirInicio(inicio,4);
	inserirInicio(inicio,5);
	inserirInicio(inicio,6);
	
    listar(inicio);
	
	return 0;
}
