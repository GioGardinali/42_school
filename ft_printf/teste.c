#include "stdio.h"
#include "ft_printf.h"

#include <stdio.h>
#include <stdarg.h>

// Protótipo da função check_flag
int main() {
	int result;
   int result1, result2;

	// Exemplo com a flag 'c' para um caractere
	result = 'A';
	printf("Resultado para 'c': %c\n", result);
	ft_printf("REPLICA - Resultado para 'c': %c\n", result);

	// Exemplo com a flag 's' para uma string
	printf("Resultado para 's': %s\n", "Hello, World!");
	ft_printf("REPLICA - Resultado para 's': %s\n", "Hello, World!");
	// Exemplo com a flag 'p' para um ponteiro
	unsigned long int ptr_value = 0x12345678;
	result = (void*)&ptr_value;
	printf("Resultado para 'p': %p\n", result);
	ft_printf("REPLICA - Resultado para 'p': %p\n", result);
	// Exemplo com a flag 'd' para um número inteiro
	result = 42;
	printf("Resultado para 'd': %d\n", result);
	ft_printf("REPLICA - Resultado para 'd': %d\n", result);
	// Exemplo com a flag 'u' para um número inteiro sem sinal
	result = 12345u;
	printf("Resultado para 'u': %u\n", result);
	ft_printf("REPLICA - Resultado para 'u': %u\n", result);
	// Exemplo com a flag 'x' para um número hexadecimal
	result = 0x1A;
	printf("Resultado para 'x': %x\n", result);
	ft_printf("REPLICA - Resultado para 'x': %x\n", result);
	// Exemplo com a flag '%' para o caractere '%'
	result = 0;
	printf("Resultado para '%%': %%\n", result);
	ft_printf("REPLICA - Resultado para '%%': %%\n", result);
	// Exemplo com uma flag inválida
	result = 0;
	printf("Resultado para '!': %d\n", result);
	ft_printf("REPLICA - Resultado para '!': %d\n", result);


	// Exemplo 2: Chama ft_printf com uma string de formato nula
	result1 = ft_printf(NULL);
	printf("Resultado do ft_printf: %d\n", result1);


	// Exemplo 4: Chama printf tradicional com uma string de formato inválida
	printf("Resultado do printf: %d\n", "teste");

	return 0;
}
	// // Exemplo 1: Chama ft_printf com uma string de formato válida
	// result1 = ft_printf("Resultado do ft_printf: %d\n", 42);
	// printf("Resultado do ft_printf: %d\n", result1);

	// // Exemplo 3: Chama printf tradicional com uma string de formato válida
	// result2 = printf("Resultado do printf: %d\n", 42);
	// printf("Resultado do printf: %d\n", result2);
/* int main() {
    int *ptr = NULL;
    
    if (ptr == NULL) {
        printf("O ponteiro é nulo: %p\n", (void*)ptr);
    } else {
        printf("O ponteiro não é nulo: %p\n", (void*)ptr);
    }
    
    return 0;
} */