#include <stdio.h>
#include <stdbool.h>


void main() { // usa-se void pois a função não retorna nada, alguns compiladores vão reclamar, melhor usar int e retornar 0
    // números
    short int numero_inteiro_16bits = 20; //16bits
    int numero_inteiro_32bits = 10; //32bits

    float numero_real_32bits = 16.766666f; //32bits
    double numero_real_64bits = 25.99999495666651; //64bits


    // arrays
    //int numeros_lista_sem_tamanho[];
    int array_declaracao[5];     // declarando array de inteiros com 5 posicao
    int array_declara_inicia[5] = {10, 20, 30, 40, 50}; //declarando e inicializando array de inteiros com 5 posições

    // caracteres
    char letra = 'A'; // apenas uma letra, nao existe o tipo nativo de string no C
    char nome[] = "Nome"; // array de char - "string" é equivalente a char nome[] = {'A', 'n', 'a', '\0'};
    
    
    // booleano
    bool verdadeiro = true; // necessário importar biblioteca #include <stdbool.h>
    bool falso = false; // necessário importar biblioteca #include <stdbool.h>

    
    // como printar diferentes tipos de dados:
    printf("Hello Word \n"); //print simples sem variavel
    printf("short int: %d\n", numero_inteiro_16bits);	// usa-se %d para numeros short int
    printf("int: %d\n", numero_inteiro_32bits);	// usa-se %d para numeros int
    printf("float: %f\n", numero_real_32bits); // usa-se %f para numeros float
    printf("double: %lf\n", numero_real_64bits); // usa-se %lf para double (em printf, %f também funciona)
    printf("double arredondado: %.2lf\n", numero_real_64bits); // acrescenta-se .n em %f -> %.nf para se arredondar n casas
    printf("char: %c\n", letra); // usa-se %c para char
    printf("char[](array char): %s\n", nome); // usa-se %s para printar array de chars, print com array só funciona para char
    printf("bool(true): %d\n", verdadeiro); // imprime: 1 para true e 0 para false
    printf("bool(false): %d\n", falso); // imprime: 1 para true e 0 para false
    printf("Endereço da variável 'numero_inteiro_32bits': %p\n", (void*)&numero_inteiro_32bits);
    printf("Digite uma letra: ");
    scanf(" %c", &letra); // envio de informação pelo usuario
    // espaço antes do %c para ignorar o \n pendente do buffer
    printf("Letra digitada: %c\n", letra);

}
