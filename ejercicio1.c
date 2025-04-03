//Cruz Alegria Valeria Montserrat 
//Programa en C que calcule n numeros de pares y n numeros impares ymuestre el ultimo numero para e impar
#include <stdio.h>

int main()
{
    int n , num;
    int par = 0, impar = 0;
    printf("numero de pares e impares:");
    scanf ("%d", &n);
    int i = 1;
    
    while(i<=n);
    {
     if(num % 2==0)
     {
         par = i;
     }
     else
     {
         impar= i;
     }
     i++;
    }
    
    if(n=0);
    printf("numero par= %d\i" par);
    printf ("numero impar= %d\i" impar);


    

