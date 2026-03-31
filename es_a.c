#include <stdio.h>
int globale_init   = 42;
int globale_uninit;
int main() {
    int locale = 100;
    printf("globale_init   = %p\n", (void*)&globale_init);
    printf("globale_uninit = %p\n", (void*)&globale_uninit);
    printf("locale         = %p\n", (void*)&locale);
    printf("main (codice)  = %p\n", (void*)main);
    return 0;
}
