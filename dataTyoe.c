#include <stdio.h> 
// '\n'	nueva línea	10	0x0A
// '\r'	retorno de carro	13	0x0D
// '\f'	nueva página (form feed)	2	x0C
// '\t'	tabulador horizontal	9	0x09
// '\b'	retroceso (backspace)	8	0x08
// '\''	comilla simple	39	0x27
// '\"'	comillas	4	0x22
// '\\ '	barra invertida	92	0x5C
// '\? '	interrogación	63	0x3F
// '\nnn'	cualquier carácter (donde nnn es el código ASCII expresado en octal)
// '\xnn'	cualquier carácter (donde nn es el código ASCII expresado en hexadecimal)

int main() {
  char caracter = 'Z';
  int a = 3;
  float b = 4.5;
  double c = 5.25;

  /* Tu codigo va aqui*/
  printf("El valor de caracter es: %c\n", caracter);
  printf("El valor de a es: %d\n", a);
  printf("El valor de b es: %f\n", b);
  printf("El valor de c es: %f\n", c);
  return 0;
}
