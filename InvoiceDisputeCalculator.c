#include<stdio.h>

#include<stdlib.h>

 

#define DIAS_MES 30

 

typedef struct Fatura{

    float valorCorreto;

    float valorCobrado;

    float desconto;

 

    float sciCorreto;

}Fatura;

 

Fatura assinatura, franquia, franquiaMovel, sd, ldn, velox, sva, ligacoesEOutros;

 

float valorCorreto, valorCobrado, desconto;

float totalFatura, totalDescontos,totalCobrado, valorFaturaPosCont, sciTotal;

 

void cabecalho(){

    system("color 02");

    printf("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");

    printf("\t\t\t   --------------------------");

    printf("\n\t\t\t   CALCULADORA DE CONTESTACAO v1.04");

    printf("\n\t\t\t   --------------------------");

    printf("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");

}

 

int respostaBoolean(){

    int resposta=0;

    scanf("%d",&resposta);

    while(resposta != 1 && resposta != 0){

        printf("\nRESPOSTA INVALIDA");

        printf("\n\nRESPONDA NOVAMENTE USANDO (1 / 0): ");

        scanf("%d",&resposta);

    }

 

    return resposta;

}

 

void contestaFalha(char* produto){

 

    float valorProduto;

    int qtdDiasProRata, stop=0;

 

    while(stop == 0){

        printf("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");

        printf("\nVALOR %s (OI ATENDE / ALEGACAO): R$ ",produto);

        scanf("%f",&valorProduto);

        printf("\nQUANTIDADE DE DIAS SISRAF (PRO-RATA/INTEGRAL): ");

        scanf("%d",&qtdDiasProRata);

        printf("\nVALOR COBRADO (SISRAF): R$ ");

        scanf("%f",&valorCobrado);

 

        valorCorreto = (valorProduto/DIAS_MES)*qtdDiasProRata;

        desconto = valorCorreto-valorCobrado;

 

        printf("\n--------------------------------------------------------------------------------");

        printf("\n>>VALOR A SER RESTITUIDO: R$ %.2f",desconto);

        printf("\n--------------------------------------------------------------------------------");

 

 

        printf("\n\n\n1 - PROSSEGUIR / 0 - CORRIGIR: ");

        stop = respostaBoolean();

        system("cls");

 

 

    }

 

 

}

 

void contestaBloqueio(char* produto){

 

    float valorProduto;

    int qtdDiasProRata, stop=0;

 

    while(stop == 0){

        printf("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");

        printf("\nVALOR %s (OI ATENDE / ALEGACAO): R$ ",produto);

        scanf("%f",&valorProduto);

        printf("\nQUANTIDADE DE DIAS SISRAF (PRO-RATA/INTEGRAL): ");

        scanf("%d",&qtdDiasProRata);

        printf("\nVALOR COBRADO (SISRAF): R$ ");

        scanf("%f",&valorCobrado);

 

        valorCorreto = (valorProduto/DIAS_MES)*qtdDiasProRata;

        desconto = valorCorreto-valorCobrado;

 

        printf("\n--------------------------------------------------------------------------------");

        printf("\n>>VALOR A SER RESTITUIDO: R$ %.2f",valorCorreto);

        printf("\n--------------------------------------------------------------------------------");

 

 

        printf("\n\n\n1 - PROSSEGUIR / 0 - CORRIGIR: ");

        stop = respostaBoolean();

        system("cls");

 

 

    }

 

 

}

 

void addLigacoesEOutros(){

    int stop = 0;

    float valor;

    while(stop == 0){

        printf("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");

        system("\"Planilha de Excedentes.ods\"");

        printf("\nCALCULE A SOMA DOS EXECEDENTES NA TABELA...");

        printf("\nINSIRA O VALOR DOS EXCEDENTES: ");

        scanf("%f",&valor);

        ligacoesEOutros.valorCorreto = valor;

        printf("\n\n\n1 - PROSSEGUIR / 0 - CORRIGIR: ");

        stop = respostaBoolean();

        system("cls");

    }

}

 

void reset(){

    assinatura.valorCorreto = 0;

    assinatura.valorCobrado = 0;

    assinatura.desconto = 0;

    assinatura.sciCorreto = 0;

 

    franquia.valorCorreto = 0;

    franquia.valorCobrado = 0;

    franquia.desconto = 0;

    franquia.sciCorreto = 0;

 

    sd.valorCorreto = 0;

    sd.valorCobrado = 0;

    sd.desconto = 0;

    sd.sciCorreto = 0;

 

    franquiaMovel.valorCorreto = 0;

    franquiaMovel.valorCobrado = 0;

    franquiaMovel.desconto = 0;

    franquiaMovel.sciCorreto = 0;

 

    ldn.valorCorreto = 0;

    ldn.valorCobrado = 0;

    ldn.desconto = 0;

    ldn.sciCorreto = 0;

 

    velox.valorCorreto = 0;

    velox.valorCobrado = 0;

    velox.desconto = 0;

    velox.sciCorreto = 0;

 

    sva.valorCorreto = 0;

    sva.valorCobrado = 0;

    sva.desconto = 0;

    sva.sciCorreto = 0;

 

    ligacoesEOutros.valorCorreto = 0;

}

 

void sci(char* produto){

 

    int stop=0;

 

    while(stop == 0){

        printf("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");

        printf("\nVALOR %s COBRADO): R$ ",produto);

        scanf("%f",&valorCobrado);

 

        printf("\nVALOR DESCONTO (SUBTRACAO): R$ ");

        scanf("%f",&desconto);

 

        valorCorreto = valorCobrado - desconto;

 

        printf("\n--------------------------------------------------------------------------------");

        printf("\n>>VALOR CORRETO %s: R$ %.3f",produto,desconto);

        printf("\n--------------------------------------------------------------------------------");

 

 

        printf("\n\n\n1 - PROSSEGUIR / 0 - CORRIGIR: ");

        stop = respostaBoolean();

        system("cls");

 

 

    }

 

 

}

void falhaVendaMenu(){

    int option,quit = 0;

    cabecalho();

    while(quit == 0){

        system("color 02");

        printf("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");

        printf("\n\t\t\t     FALHA NA VENDA\n");

        printf("\n1 - ASSINATURA\n2 - FRANQUIA\n3 - SERVICOS DIGITAIS\n4 - FRANQUIA MOVEL\n5 - LDN\n6 - VELOX\n7 - SVA\n8 - LIGACOES E OUTROS EXCEDENTES\n9 - TOTAIS\n\n0 - RESETAR DADOS\n11 - VOLTAR\n\nOPCAO->");

        scanf("%d",&option);

        system("cls");

            switch(option){

            case 0:

                reset();

                break;

            case 1:

                contestaFalha("ASSINATURA");

                assinatura.valorCorreto = valorCorreto;

                assinatura.valorCobrado = valorCobrado;

                assinatura.desconto = desconto;

                break;

            case 2:

                contestaFalha("FRANQUIA");

                franquia.valorCorreto = valorCorreto;

                franquia.valorCobrado = valorCobrado;

                franquia.desconto = desconto;

                break;

            case 3:

                contestaFalha("SD");

                sd.valorCorreto = valorCorreto;

                sd.valorCobrado = valorCobrado;

                sd.desconto = desconto;

                break;

            case 4:

                contestaFalha("FRANQUIA MÓVEL");

                franquiaMovel.valorCorreto = valorCorreto;

                franquiaMovel.valorCobrado = valorCobrado;

                franquiaMovel.desconto = desconto;

                break;

            case 5:

                contestaFalha("LDN");

                ldn.valorCorreto = valorCorreto;

                ldn.valorCobrado = valorCobrado;

                ldn.desconto = desconto;

                break;

            case 6:

                contestaFalha("VELOX");

                velox.valorCorreto = valorCorreto;

                velox.valorCobrado = valorCobrado;

                velox.desconto = desconto;

                break;

            case 7:

                contestaFalha("SVA");

                sva.valorCorreto = valorCorreto;

                sva.valorCobrado = valorCobrado;

                sva.desconto = desconto;

                break;

            case 8:

                addLigacoesEOutros();

                break;

            case 9:

                totalFatura = assinatura.valorCorreto + franquia.valorCorreto + franquiaMovel.valorCorreto + sd.valorCorreto + ldn.valorCorreto + velox.valorCorreto + sva.valorCorreto+ligacoesEOutros.valorCorreto;

                totalDescontos = assinatura.desconto + franquia.desconto + franquiaMovel.desconto + sd.desconto + ldn.desconto + velox.desconto + sva.desconto;

                totalCobrado = assinatura.valorCobrado + franquia.valorCobrado + franquiaMovel.valorCobrado + sd.valorCobrado + ldn.valorCobrado + velox.valorCobrado + sva.valorCobrado+ligacoesEOutros.valorCorreto;

                valorFaturaPosCont = totalCobrado - totalFatura;

                system("color E");

                printf("\n\n>> O VALOR TOTAL DA FATURA APOS CONTESTACAO: %.2f",totalFatura);

                printf("\n\n>> O VALOR TOTAL DE DESCONTOS: %.2f\n\n\n",totalDescontos);

                system("pause");

                system("cls");

                break;

            case 11:

                reset();

                quit = 1;

                break;

            default:

                printf("\nOPCAO INVALIDA !");

                break;

            }

    }

}

 

void bloqueioTotal(){

    int option,quit = 0;

    cabecalho();

    while(quit == 0){

        system("color 02");

        printf("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");

        printf("\n\t\t\t     BLOQUEIO TOTAL\n");

        printf("\n1 - ASSINATURA\n2 - FRANQUIA\n3 - SERVICOS DIGITAIS\n4 - FRANQUIA MOVEL\n5 - LDN\n6 - VELOX\n7 - SVA\n8 - LIGACOES E OUTROS EXCEDENTES\n9 - TOTAIS\n\n0 - RESETAR DADOS\n11 - VOLTAR\n\nOPCAO->");

        scanf("%d",&option);

        system("cls");

            switch(option){

            case 0:

                reset();

                break;

            case 1:

                contestaBloqueio("ASSINATURA");

                assinatura.valorCorreto = valorCorreto;

                assinatura.valorCobrado = valorCobrado;

                assinatura.desconto = desconto;

                break;

            case 2:

                contestaBloqueio("FRANQUIA");

                franquia.valorCorreto = valorCorreto;

                franquia.valorCobrado = valorCobrado;

                franquia.desconto = desconto;

                break;

            case 3:

                contestaBloqueio("SD");

                sd.valorCorreto = valorCorreto;

                sd.valorCobrado = valorCobrado;

                sd.desconto = desconto;

                break;

            case 4:

                contestaBloqueio("FRANQUIA MÓVEL");

                franquiaMovel.valorCorreto = valorCorreto;

                franquiaMovel.valorCobrado = valorCobrado;

                franquiaMovel.desconto = desconto;

                break;

            case 5:

                contestaBloqueio("LDN");

                ldn.valorCorreto = valorCorreto;

                ldn.valorCobrado = valorCobrado;

                ldn.desconto = desconto;

                break;

            case 6:

                contestaBloqueio("VELOX");

                velox.valorCorreto = valorCorreto;

                velox.valorCobrado = valorCobrado;

                velox.desconto = desconto;

                break;

            case 7:

                contestaBloqueio("SVA");

                sva.valorCorreto = valorCorreto;

                sva.valorCobrado = valorCobrado;

                sva.desconto = desconto;

                break;

            case 8:

                addLigacoesEOutros();

                break;

            case 9:

                totalFatura = assinatura.valorCorreto + franquia.valorCorreto + franquiaMovel.valorCorreto + sd.valorCorreto + ldn.valorCorreto + velox.valorCorreto + sva.valorCorreto+ligacoesEOutros.valorCorreto;

                totalDescontos = assinatura.desconto + franquia.desconto + franquiaMovel.desconto + sd.desconto + ldn.desconto + velox.desconto + sva.desconto;

                totalCobrado = assinatura.valorCobrado + franquia.valorCobrado + franquiaMovel.valorCobrado + sd.valorCobrado + ldn.valorCobrado + velox.valorCobrado + sva.valorCobrado+ligacoesEOutros.valorCorreto;

                valorFaturaPosCont = totalCobrado - totalFatura;

                system("color E");

                printf("\n\n>> O VALOR TOTAL A SER RESTITUIDO: %.2f",totalFatura-ligacoesEOutros.valorCorreto);

                printf("\n\n>> O VALOR DA FATURA APOS CONTESTACAO: %.2f\n\n\n",(-1*totalDescontos)+ligacoesEOutros.valorCorreto);

                system("pause");

                system("cls");

                break;

            case 11:

                reset();

                quit = 1;

                break;

            default:

                printf("\nOPCAO INVALIDA !");

                break;

            }

    }

}

 

void sciMenu(){

    int option,quit = 0;

    cabecalho();

    while(quit == 0){

        system("color 02");

        printf("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");

        printf("\n\t\t\t\t     SUBTRACAO\n");

        printf("\n1 - ASSINATURA\n2 - FRANQUIA\n3 - SERVICOS DIGITAIS\n4 - FRANQUIA MOVEL\n5 - LDN\n6 - VELOX\n7 - SVA\n8 - LIGACOES E OUTROS EXCEDENTES\n9 - TOTAIS\n\n0 - RESETAR DADOS\n11 - VOLTAR\n\nOPCAO->");

        scanf("%d",&option);

        system("cls");

            switch(option){

            case 0:

                reset();

                break;

            case 1:

                sci("ASSINATURA");

                assinatura.sciCorreto = valorCorreto;

                break;

            case 2:

                sci("FRANQUIA");

                franquia.sciCorreto = valorCorreto;

                break;

            case 3:

                sci("SD");

                sd.sciCorreto = valorCorreto;

                break;

            case 4:

                sci("FRANQUIA MOVEL");

                franquiaMovel.sciCorreto = valorCorreto;

                break;

            case 5:

                sci("LDN");

                ldn.sciCorreto = valorCorreto;

                break;

            case 6:

                sci("VELOX");

                velox.sciCorreto = valorCorreto;

                break;

            case 7:

                sci("SVA");

                sva.sciCorreto = valorCorreto;

                break;

            case 8:

                addLigacoesEOutros();

                break;

            case 9:

                sciTotal = assinatura.desconto + franquia.desconto + franquiaMovel.desconto + sd.desconto + ldn.desconto + velox.desconto + sva.desconto+ligacoesEOutros.valorCorreto;

                system("color E");

                printf("\n\n>> O VALOR TOTAL DA FATURA APOS CONTESTACAO: %.2f\n\n",sciTotal);

                system("pause");

                system("cls");

                break;

            case 11:

                reset();

                quit = 1;

                break;

            default:

                printf("\nOPCAO INVALIDA !");

                break;

            }

    }

}

 

int main(){

    int option,quit = 0;

    while(quit == 0){

        cabecalho();

        printf("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");

        printf("\n\t\t\t\t     MENU\n");

        printf("\n1 - SUBTRACAO\n2 - FALHA NA VENDA\n3 - BLOQUEIO TOTAL\n4 - PLANILHA CALCULO\n\n0 - FINALIZAR \n\nOPCAO->");

       scanf("%d",&option);

        system("cls");

        switch(option){

            case 1:

                sciMenu();

                break;

            case 2:

                falhaVendaMenu();

                break;

            case 3:

                bloqueioTotal();

                break;

            case 4:

                printf("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");

                system("\"Planilha de Excedentes.ods\"");

                system("cls");

                break;

            case 0:

                quit = 1;

                break;

            default:

                printf("\nOPCAO INVALIDA !");

                break;

        }

    }

printf("\n\n\n\n");

return 0;

}