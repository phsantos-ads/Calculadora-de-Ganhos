#include<stdio.h>

//funcao para calcular o gasto de combustivel, recebe 2 parametros, litros e preco do combustivel, retorna o valor gasto
float calcularGastoCombustivel (float litros, float precoCombustivel){
    return litros * precoCombustivel;
}

int main(){
    float kmRodado, litros, gastoCombustivel, totalDia, mediaCarro, precoCombustivel, totalLiquido, valorKmBruto, valorKmLiquido;
    int  opcao;
    printf("Qual combustivel foi usado?\n Digite 1-gasolina ou 2-etanol ");
    scanf("%i", &opcao);
    switch (opcao)
    {
    case 1:
  
        break;
    case 2:    
        
        break;
    default:
        printf("\nOpcao invalida, digite 1 ou 2");
        return 0;
    }
        printf("Quantos km voce rodou: \n");
        scanf("%f", &kmRodado);
        printf("Qual a media do carro: \n");
        scanf("%f", &mediaCarro);
        printf("Qual preco do combustivel: \n");
        scanf("%f", &precoCombustivel);
        printf("Qual valor final do dia: \n");
        scanf("%f", &totalDia);
        litros = kmRodado / mediaCarro;
        
        //variavel gastoCombustivel recebe o valor retornado da funcao calcularGastoCombustivel, passando como parametros litros e precoCombustivel
        gastoCombustivel = calcularGastoCombustivel(litros, precoCombustivel);
        
        totalLiquido = totalDia - gastoCombustivel;
        valorKmBruto = totalDia / kmRodado;
        valorKmLiquido = totalLiquido / kmRodado;
        printf("Voce rodou: %.2f KM\ngastou: %.2f reais de combustivel\nobteve valor bruto por km: %.2f \ne valor liquido por km: %.2f \ngerando um lucro liquido de: %.2f\n", kmRodado, gastoCombustivel, valorKmBruto, valorKmLiquido, totalLiquido);
    return 0;

    
}