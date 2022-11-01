#include <stdio.h>

void ciclo (int n, int limite) {
   for (int i=n; i<= limite; i++) {
        printf("%d\n" , i);
   }
}

int main()
{
    ciclo(2,10);

    return 0;
}
