//Manuel Alejandro Sahagun Mendoza  349857 
//Programa que lea 3 numeros, desplegar el mayor (OP Logicos)
//28 sept 2016
//SMMA_Ll2
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num1,num2,num3;
  printf("Dame el primer numero: ");
  scanf("%d",&num1);
  printf("Dame el segundo numero: ");
  scanf("%d",&num2);
  printf("Dame el tercer numero: ");
  scanf("%d",&num3);
  if (num1 > num2 && num1 > num3) 
     {
            printf("\n El mayor es: %d",num1);
            }
            else
            {
             if (num2 > num3 && num2 > num1)
             {
                      printf("\n El mayor es: %d",num2);
                      }
                      else
                      {
                      printf("\n El mayores es: %d",num3); 
                      }
            }
  printf("\n");
  system("PAUSE");	
  return 0;
}
