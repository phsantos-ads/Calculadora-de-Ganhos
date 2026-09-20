#include<stdio.h>

int main(){
    float kmrodado, litros, gastcombustivel, totdia, mediacarro, precogasosa, totliquido, valorkmbruto, valorkmliquido;
    printf("Quantos km voce rodou: \n");
    scanf("%f", &kmrodado);
    printf("Qual a media do carro: \n");
    scanf("%f", &mediacarro);
    printf("Qual preco da gasolina: \n");
    scanf("%f", &precogasosa);
    printf("Qual valor final do dia: \n");
    scanf("%f", &totdia);
    litros = kmrodado / mediacarro;
    gastcombustivel = litros * precogasosa;
    totliquido = totdia - gastcombustivel;
    valorkmbruto = totdia / kmrodado;
    valorkmliquido = totliquido / kmrodado;
    printf("Voce rodou: %.2f KM\ngastou: %.2f reais de combustivel\nobteve kmbruto: %.2f \ne kmliquido: %.2f \ngerando um lucro luquido de: %.2f\n", kmrodado, gastcombustivel, valorkmbruto, valorkmliquido, totliquido);

    return 0;


}