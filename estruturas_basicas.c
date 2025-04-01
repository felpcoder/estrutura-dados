#include <stdio.h>
#include <math.h> // para funções matemáticas
// gcc estruturas_basicas.c -o temp -lm && ./temp && rm temp precisa adicionar o lm por causa da biblioteca
int main() {
    // operacoes aritméticas
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Digitos usuario: %d", a);
    printf(", %d\n", b);
    int soma = a + b; // adição entre dois numeros operador +
    printf("Soma: %d\n", soma);
    int distancia = a - b; // substração entre dois numeros operador -
    printf("Subtração: %d\n", distancia);
    int produto = a * b; // multiplicação entre dois numeros operador *
    printf("Multiplicação: %d\n", produto);
    int divisao_inteira = a / b; // divisao entre dois numeros operador /
    printf("Divisao Inteira: %d\n", divisao_inteira); // retorna parte inteira da divisao
    int resto = a % b;
    printf("Resto divisão: %d\n", resto);
    // para a divisao decimal, como os numeros digitados eram originalmente inteiros,
    // precisa-se transformar de inteiro para float
    float a_float = (float)a; // conversão de int para float
    float b_float = (float)b; // conversão de int para float
    float divisao_decimal = a_float / b_float;
    printf("Divisao decimal: %f\n", divisao_decimal);
    
    // com o módulo math temos outras operações como
    double raiz = sqrt(a_float);         // raiz quadrada
    double potencia = pow(b_float, 3);  // 2 elevado a
    printf("Raiz do primeiro numero digitado: %.2lf\n", raiz);
    printf("Potência de 3 do segundo numero digitado: %.2lf\n", potencia);


    // if else 
    if (a > b) {     // > -> verifica se é maior que
        printf("Primeiro numero é maior que o segundo.\n");
    } else if (a == b) { // == -> verifica se é igual
        printf("Os numeros são iguais.\n"); // essa condição só acontece se a <= b.
    } else {
        printf("O segundo numero é maior que o primeiro.\n");
    }

    if (a != 0){ // != -> (not) diferente de
        printf("O primeiro numero é diferente de 0.\n");
    } else if (b==0 || a==0) { // || -> (or) apenas uma das condições precisa ser verdadeira
        printf("Pelo menos um número é igual a 0.\n"); 
    } else if (b!=0 && a!=0) { // && -> (and) ambas as condições precisa ser verdadeiras
        printf("O segundo numero é igual a zero.\n");
    }
    // Pode-se usar também
    // && → se o primeiro for falso, o segundo nem é avaliado
    // || → se o primeiro for verdadeiro, o segundo nem é avaliado

    // loops
    printf("Laço de 0 até 4: ");

    for (int i = 0; i < 5; i++) { // respectivamente: variavel a ser interada i; condição de até quando iterar; incremento taxa de att;
        printf("%d", i);
    }
    printf("\n");

    printf("Laço de 0 até primeiro numero digitado: ");

    for (int i = 0; i < a; i++) { // utiliza-se a variavel para limitar;
        printf("%d", i);
    }
    printf("\n");

    // exemplos utilizando variaveis ja existentes e if else
    printf("Verifica qual o menor numero digitado e faz um laço printando os numeros que tem entre os dois: \n");

    if (a < b)  {
        printf("O segundo número é maior. \n");
        printf("Laço de %d", a);
        printf(" até %d", b);
        printf(":\n");
        for (int i = a; i < b; i++){
            printf("%d", i);
        }
        printf("\n");
    } else if (b < a) {
        printf("O primeiro número é maior. \n");
        printf("Laço de %d", b);
        printf(" até %d", a);
        printf(":\n");
        for (int i=b; i<a; i++) {
            printf("%d", i);
        }
        printf("\n");
    } else {
        printf("Os números digitados são iguais!\n");
    }

    // exemplo com incremental diferente 1
    printf("Exemplo printando números de 2 em 2 de 0 até 10: \n");
    for (int i = 0; i<=10; i+=2) {
        printf("%d", i);
    }
    printf("\n");
    printf("Exemplo printando números com incremental menor que 10 e menor que b: \n");
    // exemplo com mais de uma condição
    for (int i =0; i<=10 && i<=b; i++) { // pode-se utilizar mais de uma condição no for loop
        printf("%d", i);
    }
    printf("\n");


    printf("Exemplo printa números, faz break no 7 e continue em pares: \n");
    // exemplos utilizando break e continue
    for (int i =0; i<=10; i++) { // pode-se utilizar mais de uma condição no for loop
        if (i==7){
            printf("Break se o incremental for igual a 7.\n");
            break; // para o loop
        } else if (i%2==0) {
            printf("Continue, não printa número par\n");
            continue; // pula para o proximo loop
        } else {
            printf("Se o número não é igual a 7 nem par printa o número: ");
            printf("%d", i);
            printf("\n");
        }
    }
    // exemplo while
    printf("Exemplo com while: \n");
    int i = 0;
    while (i < 5) {
        printf("%d", i);
        i++;
    }
    printf("\n");

    printf("Exemplo com do while: \n");

    return 0;
}
