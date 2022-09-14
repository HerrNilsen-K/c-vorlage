/*
 * printf formats:
 * %i - int
 * %f - float
 * %c - char
 * %s - string
 * %x - hex
 *  bsp: printf("Hello %s, %i", "World", 42);
 *  gibt: "Hello World, 42" aus
 *
 * Variable types:
 * int - integer
 * float - rationale Zahl
 * char - einzelnes Zeichen
 * char* - Zeichenkette/String | mit vorsicht geniessen
 *  bsp: int zahl = 42;
 *       float rationZahl = 3.14;
 *       char zeichen = 'a';
 *       char* string = "Hello World";
 *
 * scanf:
 * formatierungen bleiben gleich wie bei printf
 * bsp: int zahl;
 *      printf("Bitte Zahl eingeben: ");
 *      scanf("%i", &zahl); // & vor der variabel ist wichtig
 *      printf("Sie haben %i eingegeben", zahl);
 */

#include <stdio.h>


int main(int argc, char **argv) {

    printf("Hello, World");

    return 0;
}