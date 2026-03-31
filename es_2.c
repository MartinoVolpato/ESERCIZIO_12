#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int log_messaggio(const char *msg) {
    static int contatore = 0;
    static int TREsec = 0;


    for (contatore = 0; contatore < numero; contatore++) {
        printf("[" + contatore + "] messaggio\n");
    }
    return 0;

}
int main(void) {
    int numero = rand() % 100;
    for (int i = 0; i < numero; i++) {
        log_messaggio("Ciao");
    }
    return 0;
}
