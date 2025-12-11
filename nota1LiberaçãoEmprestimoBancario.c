 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

float taxa_edividamento, salario, total_dividas, valor_parcela, limite_max;
float valor_do_emprestimo, percentual_do_valor_salario;
int quantidade_parcelas, tempo_estavel_emprego,max_parcelas;
char user [20];


 int main() {

    
    printf("\n===== Sistema de Emprestimos Bancarios BPlus====\n");

    printf("        Digite seu nome de Usuario\n\n");
    scanf(   "%s",&user);// entrada padrão. captura oq é digitado pelo usuario no teclado
   
    printf ("Ola, %s. Seja bem vindo (a) Informe seu salario \n", user);
    scanf("%f", &salario);
 
    printf ("Informe suas dividas:\n ");
    scanf ("%f", &total_dividas);

    printf ("informe a quantidade de anos de contratacao do seu emprego atual:\n");
    scanf ("%d", &tempo_estavel_emprego);

    printf("Qual valor do emprestimo que voce deseja fazer?\n");
    scanf("%f", &valor_do_emprestimo);

    printf ("Informe o numero de parcelas:\n ");
    scanf ("%d", &quantidade_parcelas);

    taxa_edividamento = ( total_dividas/salario)*100;
    valor_parcela=valor_do_emprestimo/quantidade_parcelas;
    percentual_do_valor_salario=(valor_parcela/salario)*100;


     
      // parte para quantidade de parcelas sob a condição do tempo de emprego
        if (tempo_estavel_emprego <1)
        {
            max_parcelas=12;
        } 
        else if (tempo_estavel_emprego>1&& tempo_estavel_emprego <3)
        {
           max_parcelas=24 ;
        } else
        {
            max_parcelas=60;
            return 0;
        }


    if (quantidade_parcelas>max_parcelas){

        printf("Seu emprestimo foi recusado\n");
        printf("O numero de parcelas ultrapassou a quantidade permitida\n");
        return 0;
     
        } 

        if (percentual_do_valor_salario>30)
    {
        printf("O Emprestimo foi recusado\n");
        printf("parcela superior a 30%% do seu salario.\n");
        return 0;
    }
            if (taxa_edividamento>50)
        {

        printf("Emprestimo recusado\n");
        printf("Sua taxa de endividamento e superior a 50%%\n");
        printf("Taxa:  %2.f %% \n", taxa_edividamento );
        }
        
        
        else {    
        
         //caso emprestimo aprovado 
        printf("%s Seu emprestimo foi aprovado!\n"), user;
        printf("Valor do emprestimo: %.2f\n ", valor_do_emprestimo);
        printf("Valor da parcela: %.2f\n ", valor_parcela);
        printf("Quantidade de parcelas: %.2d \n", quantidade_parcelas);
        printf("Sua taxa de endividamneto e de: %2.f % \n", taxa_edividamento );
        printf("Percentual da parcela: %.2f\n ", percentual_do_valor_salario); 
        
        return 0;}

    
 }





 