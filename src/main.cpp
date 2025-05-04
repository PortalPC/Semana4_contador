#include <avr/io.h>
#define F_CPU 16000000UL

char numero = 0;
char modo = 0;

void mostrar_numero(char n){
  char decenas = n/10;
  char unidades = n % 10;

  PORTD = (unidades <<4);
  PORTD |= 0x0C;
  PORTB = decenas
    
}

int main(void){
  DDRD|=0xF0;
  DDRD & =~(0x0C);
  DDRB |= 0x0F;
  PORTD |= 0x0C;
  char a = 0;
  char b = 0;

  mostrar_numero(numero);

  
  }
}