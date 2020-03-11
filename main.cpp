#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
#include "struct.h"
#include "telas.h"


using namespace std;

#define BVER  186      //BARRA VERTICAL
#define BHOR  205      //BARRA HORIZONTAL
#define CESQS 201      //CANTO ESQUERDO SUPERIOR
#define CESQI 200      //CANTO ESQUERDO INFERIOR
#define CDIRS 187      //CANTO DIREITO SUPERIOR
#define CDIRI 188      //CANTO DIREITO INFERIOR
#define CORFUNDO 15    //COR DE FUNDO DA TELA
#define CORTEXTO 6     //COR DO TEXTO


int main(){
    int coluna = 14,linha = 22, quantidadeFinanciamento = 0, quantidadeCliente = 0;
    char opcao;
    cadastra clientes[10];
    financiamento financiamentosEfetuados[10];

    do{
        textcolor(CORTEXTO);
        textbackground(CORFUNDO);

        clrscr();

        molduraTela(1,1,CORTEXTO,CORFUNDO);
        logomarca(55,10);

        moldura(coluna-1,linha+1,5,16,0,0);
        botaoCadastrar(coluna,linha,5,16,CORFUNDO,CORTEXTO);

        moldura(coluna+43,linha+1,5,16,0,0);
        botaoFinanciar(coluna+44,linha,5,16,CORFUNDO,CORTEXTO);

        moldura(coluna+87,linha+1,5,16,0,0);
        botaoListar(coluna+88,linha,5,16,CORFUNDO,CORTEXTO);

        moldura(coluna+43,linha+13,4,16,0,0);
        botaoSair(coluna+44,linha+12,4,16,CORFUNDO,CORTEXTO);

        opcao = getch();
        fflush(stdin);

        switch(opcao){
            case '1':
                efeitoBotao(1,coluna,linha);
                fichaCadastro(10,10,quantidadeCliente,clientes);
                clrscr();
            break;

            case '2':
                efeitoBotao(2,coluna,linha);
                fichaFinanciamento(10,6,quantidadeFinanciamento,financiamentosEfetuados,clientes,quantidadeCliente);
            break;

            case '3':
                efeitoBotao(3,coluna,linha);;
                listarFinanciamentos(8,4,quantidadeFinanciamento,financiamentosEfetuados,clientes);
                clrscr();
            break;

            case '4':
                efeitoBotao(4,coluna,linha);
            break;
        }
        delay(50);
    }while(opcao != '4');

    gotoxy(10,45);
    return 0;
}
