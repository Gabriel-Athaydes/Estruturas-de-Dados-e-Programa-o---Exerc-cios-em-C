#include <stdio.h>
#include "vetordinamico.h"

int main() {

    // Criar um vetor dinâmico com capacidade inicial de 5 elementos
    VetorDinamico *vetor = criar_vetor(5);

    // Adicionar elementos ao vetor
    adicionar_elemento(vetor, 10);
    adicionar_elemento(vetor, 20);
    adicionar_elemento(vetor, 30);
    adicionar_elemento(vetor, 40);
    adicionar_elemento(vetor, 50);

    // Imprimir o vetor
    printf("Vetor após adicionar elementos:\n");
    imprimir_vetor(vetor);

    // Consultar informações do vetor utilizando as funções do TAD
    printf("Tamanho: %d\n", obter_tamanho(vetor));
    printf("Capacidade: %d\n", obter_capacidade(vetor));

    // Remover o elemento na posição 2
    remover_elemento(vetor, 2);

    // Imprimir o vetor após a remoção (IMPLEMENTAR A REMOÇÃO)
    printf("Vetor após remover o elemento na posição 2:\n");
    imprimir_vetor(vetor);
    
    alterar_elemento(vetor,1,10);
    imprimir_vetor(vetor);
    
    printf("A ocorrência do número 10 é %d vezes\n", contar_ocorrencias(vetor,10));
    
    printf("Está vazio? %s\n", esta_vazio(vetor)?"sim":"não");
    imprimir_vetor(vetor);

    // Liberar a memória alocada para o vetor
    liberar_vetor(vetor);

    return 0;
}