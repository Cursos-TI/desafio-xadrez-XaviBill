#include <stdio.h>

int main(){

int bispo = 1;
int rainha = 1;
int torre = 1;                //Declaração variaveis



while (bispo <= 5){                  //while do bispo

    printf("Bispo:Cima,Direita\n");  //Movimentação do bispo



    bispo++;
}



do                                    //do while da rinha
{

    
        
        printf("Rainha:Esquerda\n"); 
        rainha++;                      //Movimentação rainha
        
    
    

} while (rainha <= 8);


for (torre; torre <= 5; torre++) //for da torre
{
    printf("Torre:Direita\n");
}








return 0;






}