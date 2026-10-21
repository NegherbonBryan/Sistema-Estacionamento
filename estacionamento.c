#include <stdio.h>
#include <string.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    // Variáveis //

    int opcao ;
    int veiculoEscolhido ;
    int quantidadeHoras ;
    int quantidadeMotos = 0 ;
    int quantidadeCarros = 0 ;
    int quantidadeVans = 0 ;
    float valorMaximo = 0.00 ;
    float valorMoto = 0.00 ;
    float valorVan = 0.00 ;
    float valorCarro = 0.00 ;
    float valorHoraMoto = 4.00 ;
    float AdicionalMoto = 2.00 ;
    float valorHoraCarro = 8.00 ;
    float AdicionalCarro = 5.00 ;
    float valorHoraVan = 12.00 ;
    float AdicionalVan = 7.00 ;
    float valorTotal = 0.00 ;
    float limiteMaximoMoto = 20.00 ;
    float limiteMaximoCarro = 45.00 ;
    float limiteMaximoVan = 65.00 ;

    // Variáveis //

    // Menu Principal //

    do {
        printf("\n========== ESTACIONAMENTO ==========\n");
        printf("\n1 - Cadastrar Veículo\n");
        printf("2 - relatório Diário\n");
        printf("3 - Encerrar Dia\n");
        scanf("%d", &opcao);
        switch (opcao){

        // Fim Menu Principal //

            // submenu //
            case 1:
                printf("\n========== Registrar Veículo ==========\n");
                printf("\n1 - Moto\n");
                printf("2 - Carro\n");
                printf("3 - Van\n");
                scanf("%d", &veiculoEscolhido);
                switch (veiculoEscolhido){
                // submenu //

                    // Início Moto //

                    case 1:
                        printf("\n========== Tabela de Valores ==========\n");
                        printf("\nVeículo   Primeira Hora   Hora Adicional   Limite Diário\n");
                        printf("Moto            R$ 4,00           R$ 2,00          R$ 20,00\n");
                        scanf("%d", &quantidadeHoras);
                        while (quantidadeHoras <=0 || quantidadeHoras >=25){
                            printf("Hora Inválida\n");
                            printf("\nTente Novamente\n");
                            scanf("%d", &quantidadeHoras);
                        }
                        printf("\nHora(s) Registradas!!!\n");
                        (valorTotal=(quantidadeHoras-1)*AdicionalMoto+valorHoraMoto);
                        if(valorTotal>limiteMaximoMoto){
                            valorTotal=limiteMaximoMoto ;
                        }
                        (quantidadeMotos++) ;
                        printf("Moto Adicionada ao sistema com Sucesso\n");
                        printf("Quantidade Atual: %d\n", quantidadeMotos);
                        printf("\nValor Final: R$: %.2f\n", valorTotal);
                        (valorMoto=valorTotal+valorMoto);
                        if (valorTotal > valorMaximo) {
                            valorMaximo = valorTotal;
                        }
                        break;

                    // Fim Moto //

                    // Início Carro //

                    case 2:
                        printf("\n========== Tabela de Valores ==========\n");
                        printf("\nVeículo   Primeira Hora   Hora Adicional   Limite Diário\n");
                        printf("Carro           R$ 8,00           R$ 5,00          R$ 45,00\n");
                        scanf("%d", &quantidadeHoras);
                        while (quantidadeHoras <=0 || quantidadeHoras >=25){
                            printf("Hora Inválida\n");
                            printf("\nTente Novamente\n");
                            scanf("%d", &quantidadeHoras);
                        }
                        printf("\nHora(s) Registradas!!!\n");
                        (valorTotal=(quantidadeHoras-1)*AdicionalCarro+valorHoraCarro);
                        if(valorTotal>limiteMaximoCarro){
                            valorTotal=limiteMaximoCarro ;
                        }
                        (quantidadeCarros++) ;
                        printf("Carro Adicionada ao sistema com Sucesso\n");
                        printf("Quantidade Atual: %d\n", quantidadeCarros);
                        printf("\nValor Final: R$: %.2f\n", valorTotal);
                        (valorCarro=valorTotal+valorCarro);
                        if (valorTotal > valorMaximo) {
                            valorMaximo = valorTotal;
                        }
                        break;

                    // Fim Carro //

                    // Início Van //

                    case 3:
                        printf("\n========== Tabela de Valores ==========\n");
                        printf("\nVeículo   Primeira Hora   Hora Adicional   Limite Diário\n");
                        printf("Van            R$ 12,00           R$ 7,00          R$ 65,00\n");
                        scanf("%d", &quantidadeHoras);
                        while (quantidadeHoras <=0 || quantidadeHoras >=25){
                            printf("Hora Inválida\n");
                            printf("\nTente Novamente\n");
                            scanf("%d", &quantidadeHoras);
                        }
                        printf("\nHora(s) Registradas!!!\n");
                        (valorTotal=(quantidadeHoras-1)*AdicionalVan+valorHoraVan);
                        if(valorTotal>limiteMaximoVan){
                            valorTotal=limiteMaximoVan ;
                        }
                        (quantidadeVans++) ;
                        printf("Van Adicionada ao sistema com Sucesso\n");
                        printf("Quantidade Atual: %d\n", quantidadeVans);
                        printf("\nValor Final: R$: %.2f\n", valorTotal);
                        (valorVan=valorTotal+valorVan);
                        if (valorTotal > valorMaximo) {
                            valorMaximo = valorTotal;
                        }
                        break;

                    // Fim Van //
                }
                break;

        // Início Relatório //

            case 2:
                printf("\n========== Relatório Diário ==========\n");
                printf("Total de Veículos: %d\n", quantidadeMotos+quantidadeCarros+quantidadeVans);
                printf("\nMotos: %d\n", quantidadeMotos);
                printf("Valor Total Motos: %.2f\n", valorMoto);
                printf("\nCarros: %d\n", quantidadeCarros);
                printf("Valor Total Carros: %.2f\n", valorCarro);
                printf("\nVans: %d\n", quantidadeVans);
                printf("Valor Total Vans: %.2f\n", valorVan);
                printf("\nTotal Arrecadado: R$: %.2f\n", valorMoto+valorCarro+valorVan);
                printf("Valor Médio por Veículo: R$ %.2f\n", (valorMoto+valorCarro+valorVan)/(quantidadeMotos+quantidadeCarros+quantidadeVans));
                printf("Maior Valor Arrecadado: R$ %.2f\n", valorMaximo);
                break;
            default:
                printf("\nOpção Inválida, Escolha uma opção válida\n");

        // Fim Relatório //

        }
    }

    // Início Finalização //

    while (opcao != 3); {
        printf("Relatório Finalizado, Ótimo Trabalho e Bom Descanso");
    }

    // Fim Finalização //

}
