#include<stdio.h>

int main(){
    float kmrodado, litros, gastcombustivel, totdia, mediacarro, precombustivel, totliquido, valorkmbruto, valorkmliquido;
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
        scanf("%f", &kmrodado);
        printf("Qual a media do carro: \n");
        scanf("%f", &mediacarro);
        printf("Qual preco do combustivel: \n");
        scanf("%f", &precombustivel);
        printf("Qual valor final do dia: \n");
        scanf("%f", &totdia);
        litros = kmrodado / mediacarro;
        gastcombustivel = litros * precombustivel;
        totliquido = totdia - gastcombustivel;
        valorkmbruto = totdia / kmrodado;
        valorkmliquido = totliquido / kmrodado;
        printf("Voce rodou: %.2f KM\ngastou: %.2f reais de combustivel\nobteve valor bruto por km: %.2f \ne valor liquido por km: %.2f \ngerando um lucro liquido de: %.2f\n", kmrodado, gastcombustivel, valorkmbruto, valorkmliquido, totliquido);
    return 0;

    
}