#ifndef VETORDINAMICO_H
#define VETORDINAMICO_H

// Definição incompleta do registro para evitar que o usuário
// modifique os valores internos diretamente
typedef struct VetorDinamico VetorDinamico;

// Cria um novo VetorDinamico
VetorDinamico* criar_vetor(int capacidade_inicial);

// Libera a memória alocada para o VetorDinamico
void liberar_vetor(VetorDinamico *vetor);

// Adiciona um elemento ao final do VetorDinamico
void adicionar_elemento(VetorDinamico *vetor, int elemento);

// Remove o elemento de uma posição específica
void remover_elemento(VetorDinamico *vetor, int posicao);

// Busca a posição da primeira ocorrência de um valor
int buscar_elemento(VetorDinamico *vetor, int valor);

// Insere um elemento em uma posição específica
void inserir_elemento(VetorDinamico *vetor, int posicao, int elemento);

// Remove todas as ocorrências de um determinado valor
// Retorna a quantidade de elementos removidos
int remover_ocorrencias(VetorDinamico *vetor, int valor);

// Retorna o elemento armazenado em uma posição
int obter_elemento(VetorDinamico *vetor, int posicao);

// Altera o elemento armazenado em uma posição
void alterar_elemento(VetorDinamico *vetor, int posicao, int valor);

// Inverte a ordem dos elementos do vetor
void inverter_vetor(VetorDinamico *vetor);

// Conta quantas vezes um valor aparece no vetor
int contar_ocorrencias(VetorDinamico *vetor, int valor);

// Remove todos os elementos do vetor
void limpar_vetor(VetorDinamico *vetor);

// Retorna 1 se o vetor estiver vazio e 0 caso contrário
int esta_vazio(VetorDinamico *vetor);

// Imprime os elementos do VetorDinamico
void imprimir_vetor(VetorDinamico *vetor);

// Retorna a quantidade atual de elementos armazenados
int obter_tamanho(VetorDinamico *vetor);

// Retorna a capacidade atual do vetor
int obter_capacidade(VetorDinamico *vetor);

#endif /* VETORDINAMICO_H */