#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float n1 ;
    float n2 ;
    float n3 ;
    float n4 ;
    //float s = (n1+n2+n3+n4)/4;


   printf ("\nColoque a 1° nota: ");
   scanf ("%f",&n1);

   printf ("\nColoque a 2° nota: ");
   scanf ("%f",&n2);

   printf ("\nColoque a 3° nota: ");
   scanf ("%f",&n3);

   printf ("\nColoque a 4° nota: ");
   scanf ("%f",&n4);

   float s = (n1+n2+n3+n4)/4;

    if (s < 3) {
        printf("\nReprovado: %.2f\n",s);
    } else if (s < 6) {
        printf("\nSubstitutiva: %.2f\n",s);
    } else if (s >= 6 ) {
        printf("\nAprovado: %.2f\n",s);
    }


    return 0;
}
