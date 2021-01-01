/*
    Calculadora Pro escrita en C
    Autor: Adrián Jiménez Pizarro
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Número de argumentos inválido\n");
        return 1;
    }
    char *cmd = argv[1];
    float n, m, r;
    int j, k, l;
    if (strcmp(cmd, "sum") == 0) {
        printf("n1 = ");
        scanf("%f", &m);
        printf("n2 = ");
        scanf("%f", &n);
        r = m + n;
        printf("Resultado = %.2f\n", r);
    } else if (strcmp(cmd, "subt") == 0) {
        printf("n1 = ");
        scanf("%f", &m);
        printf("n2 = ");
        scanf("%f", &n);
        r = m - n;
        printf("Resultado = %.2f\n", r);
    } else if (strcmp(cmd, "mult") == 0) {
        printf("n1 = ");
        scanf("%f", &m);
        printf("n2 = ");
        scanf("%f", &n);
        r = m * n;
        printf("Resultado = %.2f\n", r);
    } else if (strcmp(cmd, "div") == 0) {
        printf("n1 = ");
        scanf("%f", &m);
        printf("n2 = ");
        scanf("%f", &n);
        r = m / n;
        printf("Resultado = %.2f\n", r);
    } else if (strcmp(cmd, "mod") == 0) {
        printf("n1 = ");
        scanf("%f", &j);
        printf("n2 = ");
        scanf("%f", &l);
        k = j % l;
        printf("Resultado = %.2f\n", r);       
    } else if (strcmp(cmd, "exp") == 0) {
        printf("base = ");
        scanf("%f", &m);
        printf("exp = ");
        scanf("%f", &n);
        r = pow(m, n);
        printf("Resultado = %.2f\n", r);
    } else if (strcmp(cmd, "sqrt") == 0) {
        printf("n = ");
        scanf("%f", &n);
        r = sqrt(n);
        printf("Resultado = %.2f\n", r);
    } else if (strcmp(cmd, "log10") == 0) {
        printf("n = ");
        scanf("%f", &n);
        r = log10(n);
        printf("Resultado = %.2f\n", r);
    } else if (strcmp(cmd, "log") == 0) {
        printf("n = ");
        scanf("%f", &n);
        r = log(n);
        printf("Resultado = %.2f\n", r);
    } else if (strcmp(cmd, "sin") == 0) {
        printf("n = ");
        scanf("%f", &n);
        r = sin(n);
        printf("Resultado = %.2f\n", r);
    } else if (strcmp(cmd, "cos") == 0) {
        printf("n = ");
        scanf("%f", &n);
        r = cos(n);
        printf("Resultado = %.2f\n", r);
    } else if (strcmp(cmd, "tan") == 0) {
        printf("n = ");
        scanf("%f", &n);
        r = tan(n);
        printf("Resultado = %.2f\n", r);
    } else if (strcmp(cmd, "--help") == 0 || strcmp(cmd, "-h") == 0) {
        printf("[+] Los parametros disponibles son: \n");
        printf("\n");
        printf("[-] sum -> retorna la suma de dos números\n");
        printf("[-] subt -> retorna la resta de dos números\n");
        printf("[-] mult -> retorna el producto de dos números\n");
        printf("[-] div -> retorna la división de dos números\n");
        printf("[-] mod -> retorna el módulo (resto) de dos números\n");
        printf("[-] exp -> eleva una base a un exponente\n");
        printf("[-] sqrt -> calcula la raiz cuadrada de un número\n");
        printf("[-] log10 -> retorna el logaritmo de base 10 de un número\n");
        printf("[-] log -> retorna el logaritmo neperiano de un número\n");
        printf("[-] sin -> retorna el seno de un número\n");
        printf("[-] cos -> retorna el coseno de un número\n");
        printf("[-] tan -> retorna la tangente de un número\n");
    }
    return 0; // Como buena práctica de programación
}