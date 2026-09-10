#include "vetordinamico.h"
#include <stdio.h>
#include <stdlib.h>

struct VetorDinamico {
    int tamanho;       // quantidade atual de elementos
    int capacidade;    // capacidade atual do vetor
    int *elementos;    // array para armazenar os elementos
};


VetorDinamico* criar_vetor(int capacidade_inicial) {
    VetorDinamico *vetor = (VetorDinamico*)malloc(sizeof(VetorDinamico));

    if (vetor == NULL) {
        printf("Erro ao alocar memória para o vetor.\n");
        return NULL;
    }

    vetor->tamanho = 0;
    vetor->capacidade = capacidade_inicial;

    vetor->elementos =
        (int*)malloc(capacidade_inicial * sizeof(int));

    if (vetor->elementos == NULL) {
        printf("Erro ao alocar memória para os elementos do vetor.\n");
        free(vetor);
        return NULL;
    }

    return vetor;
}


void liberar_vetor(VetorDinamico *vetor) {
    if (vetor != NULL) {
        free(vetor->elementos);
        free(vetor);
    }
}


void adicionar_elemento(VetorDinamico *vetor, int elemento) {

    if (vetor->tamanho == vetor->capacidade) {

        int nova_capacidade = vetor->capacidade * 2;

        int *novo_array =
            (int*)realloc(vetor->elementos,
                          nova_capacidade * sizeof(int));

        if (novo_array == NULL) {
            printf("Erro ao realocar memória para os elementos do vetor.\n");
            return;
        }

        vetor->elementos = novo_array;
        vetor->capacidade = nova_capacidade;
    }

    vetor->elementos[vetor->tamanho] = elemento;
    vetor->tamanho++;
}


void remover_elemento(VetorDinamico *vetor, int posicao) {
    // Complete aqui
}


int buscar_elemento(VetorDinamico *vetor, int valor) {
    // Complete aqui
}


void inserir_elemento(VetorDinamico *vetor, int posicao, int elemento) {
    // Complete aqui
}


int remover_ocorrencias(VetorDinamico *vetor, int valor) {
    // Complete aqui
}


int obter_elemento(VetorDinamico *vetor, int posicao) {
    if (vetor->elementos[posicao])
        return vetor->elementos[posicao];
    else
        return NULL;
}


void alterar_elemento(VetorDinamico *vetor, int posicao, int valor) {
    if (vetor->elementos[posicao])
        vetor->elementos[posicao] = valor;
    else
        printf("A posição %d não existe", posicao);
}


void inverter_vetor(VetorDinamico *vetor) {
    // Complete aqui
}


int contar_ocorrencias(VetorDinamico *vetor, int valor) {
    int ocorrencias = 0;
    for (int i=0;i<=vetor->tamanho; i++)
        if (vetor->elementos[i]==valor)
            ocorrencias++;
    return ocorrencias;
}


void limpar_vetor(VetorDinamico *vetor) {
    // Complete aqui
}


int esta_vazio(VetorDinamico *vetor) {
    if (vetor->tamanho == 0)
        return 1;
    return 0;
}


void imprimir_vetor(VetorDinamico *vetor) {

    if (vetor->tamanho == 0) {
        printf("Vetor está vazio.\n");
        return;
    }

    printf("Elementos do vetor: ");

    for (int i = 0; i < vetor->tamanho; i++) {
        printf("%d ", vetor->elementos[i]);
    }

    printf("\n");
}


int obter_tamanho(VetorDinamico *vetor) {
    return vetor->tamanho;
}


int obter_capacidade(VetorDinamico *vetor) {
    return vetor->capacidade;
}
