/************************************** 
* Trabalho 2 de Programacao de Computadores I - Retangulo
* Curso de Sistemas da informacao
* Aluno: Lucas Fernandes - matricula: 0050010522
* Professor: Alex Salgado
***************************************/

#include<stdio.h>

int main ()
{
        char continuar;
        int i,j,k;
        int largura, alt;
        char ascii;
        
    do{
        
        printf("\nSimbolo do pixel: (qualquer simbolo)\n");
        scanf(" %c", &ascii);
        fflush(stdin);
        
        printf("Tamanho da largura: (qualquer numero)\n");
        scanf("%d", &largura);
    
    
        printf("Tamanho da altura: (qualquer numero)\n");
        scanf("%d", &alt);
        
        printf("Ola, meu nome eh Lucas e o retangulo ficou assim:\n\n");
        
        
        for(i=1;i<=largura;i++)
        {
            printf("%c", ascii); // primeira linha
            
            if(i==largura)
                {
                    for(j=0;j<=alt;j++) //altura
                    {
                        printf("\n"); //pula linha
                        
                        for(k=1;k<=largura;k++)
                        {
                            if(k==1 || k==largura) // primeiro e ultimo pilar
                            {
                                printf("%c", ascii);
                            }
                            else
                            {
                                printf(" "); //espaço entre 1 e largura
                            }
                        }
                        if(j==alt)
                        {
                            printf("\n");
                           for(i=1;i<=largura;i++)
                                {
                                    printf("%c", ascii); //ultima linha
                                }
                        }
                    }
                    
                }
        }  
    printf("\n");
    printf("Deseja continuar (s/n)?\n");
    
    scanf(" %c", &continuar); // recomecar o programa
    fflush(stdin);
        }while(continuar == 's');
    
    
    return 0;
}