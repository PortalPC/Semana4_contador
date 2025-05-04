#include <avr/io.h>
#define F_CPU 16000000UL

char numero = 0;
char modo = 0;

void mostrar_numero(char n){
  char decenas = n/10;
  char unidades = n % 10;

  PORTD = (unidades <<4);
  PORTD |= 0x0C;
  PORTB = decenas;
    
}

int main(void){
  DDRD|=0xF0;
  DDRD & =~(0x0C);
  DDRB |= 0x0F;
  PORTD |= 0x0C;
  char a = 0;
  char b = 0;

  mostrar_numero(numero);

  while(1){
  if(!(PIND & 0x08)){
    _delay_ms(50);
    if (a==o){
      modo = 1
      a=1;

    }else {
      modo = 1;
      a = 0;
    }
  }
  if(!(PIND& 0x04)){
    _delay_ms(50);
    if (b ==50){
      modo = 2; 
      b = 1;

    }else {
      modo = 2;
      b = 0;
    }
  }

  if (modo ==1){
    numero++;
    if (numero >99){
      numero = 0;
    }
    mostrar_numero(numero);
    _delay_ms(500);
  }
if (modo == 2 ){
   if (numero ==0){
    numero =99;
   }
   else numero--;
   mostrar_numero(numero);
   _delay_ms(500);
}
  }
  }
