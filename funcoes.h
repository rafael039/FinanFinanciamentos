#include "struct.h"
#include <math.h>
#include <string.h>

const double TIOF = 0.005;
const double X = 0.015;

namespace funcoes{

    int buscaCliente(char cpf[],cadastra clientes[],int quantidadeClientes){

        for(int j = 0; j <= quantidadeClientes; j++ ){
            if(strcmp(cpf,clientes[j].cpf) == 0) {
                return j;
            }
        }

        return -1;
    }

    //CDC
    void financiar(financiamento &financiado, float valorEntrada){

        double cdc;
        cdc = (financiado.valorFinanciado - valorEntrada)/ (1 - TIOF);
        financiado.valorParcela = cdc * ((pow(1.038,financiado.numParcela) * 0.038) / (pow(1.038,financiado.numParcela)-1));
    }

    //LEASING
    void financiar(financiamento &financiado){

        double cf; //Coeficiente de Financiamento
        cf = X / (1 - (pow( 1 + X,-12)));
        financiado.valorParcela = cf * financiado.valorFinanciado;
    }

}

