/*
   Escreva um programa que imprima todos os números inteiros de 100 a 1 (em
   ordem decrescente).
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {

        for (int i = 100; i >= 1; i--) {
          printf("%d\n", i);
        }

        return 0;
}
