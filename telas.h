#ifndef TELAS_H_INCLUDED
#define TELAS_H_INCLUDED

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
#include "struct.h"
#include "funcoes.h"

using namespace funcoes;

using namespace std;

#define BVER  186      //BARRA VERTICAL
#define BHOR  205      //BARRA HORIZONTAL
#define CESQS 201      //CANTO ESQUERDO SUPERIOR
#define CESQI 200      //CANTO ESQUERDO INFERIOR
#define CDIRS 187      //CANTO DIREITO SUPERIOR
#define CDIRI 188      //CANTO DIREITO INFERIOR
#define CORFUNDO 15    //COR DE FUNDO DA TELA
#define CORTEXTO 6     //COR DO TEXTO





void moldura(int coluna, int linha, int altura, int largura, int corTexto, int corFundo){

    int i;

    textcolor(corTexto);
    textbackground(corFundo);

    gotoxy(coluna,linha);
    printf("%c",CESQS);
    for(i=1;i<=largura;i++)
        printf("%c",BHOR);
    printf("%c",CDIRS);

    for(i=1;i<=altura;i++){
        gotoxy(coluna,linha+i);
        printf("%c",BVER);
        for(int j=0;j<largura;j++){
            gotoxy(coluna+j+1,linha+i);
            printf(" ");
        }
        printf("%c",BVER);
        //gotoxy(coluna+largura+1,linha+i);
    }

    gotoxy(coluna,linha+altura);
    printf("%c",CESQI);
    for(i=1;i<=largura;i++)
        printf("%c",BHOR);
    printf("%c",CDIRI);
}

void molduraTela(int coluna, int linha,int corTexto, int corFundo){

    int i,largura = 132, altura = 42;

    textcolor(corTexto);
    textbackground(corFundo);

    gotoxy(coluna,linha);
    printf("%c",178);
    for(i=1;i<=largura;i++)
        printf("%c",178);
    printf("%c",178);

    for(i=1;i<=altura;i++){
        gotoxy(coluna,linha+i);
        printf("%c",178);
        gotoxy(coluna+largura+1,linha+i);
        printf("%c",178);
    }

    gotoxy(coluna,linha+altura);
    printf("%c",178);
    for(i=1;i<=largura;i++)
        printf("%c",178);
    printf("%c",178);

}

void botaoCadastrar(int coluna, int linha, int altura, int largura, int corTexto, int corFundo){
    moldura(coluna,linha,altura,largura,corTexto,corFundo);
    gotoxy(coluna+2,linha+2);
    cout << "1 - CADASTRAR";
    gotoxy(coluna+5,linha+3);
    cout << "CLIENTES";
}

void botaoFinalizarCadastrar(int coluna, int linha, int altura, int largura, int corTexto, int corFundo){

    moldura(coluna,linha,altura,largura,corTexto,corFundo);
    gotoxy(coluna+2,linha+2);
    cout << "1 - CADASTRAR";
    gotoxy(coluna+5,linha+3);
    cout << "CLIENTE";
}

void botaoFinanciar(int coluna, int linha, int altura, int largura, int corTexto, int corFundo){
    moldura(coluna,linha,altura,largura,corTexto,corFundo);
    gotoxy(coluna+3,linha+2);
    cout << "2 - SIMULAR";
    gotoxy(coluna+2,linha+3);
    cout << "FINANCIAMENTO";
}

void botaoFinalizarFinanciamento(int coluna, int linha, int altura, int largura, int corTexto, int corFundo){
    moldura(coluna,linha,altura,largura,corTexto,corFundo);
    gotoxy(coluna+3,linha+2);
    cout << "1 - EFETUAR";
    gotoxy(coluna+2,linha+3);
    cout << "FINANCIAMENTO";
}

void botaoListar(int coluna, int linha, int altura, int largura, int corTexto, int corFundo){
    moldura(coluna,linha,altura,largura,corTexto,corFundo);
    gotoxy(coluna+3,linha+2);
    cout << "3 - LISTAR";
    gotoxy(coluna+2,linha+3);
    cout << "FINANCIAMENTOS";
}

void botaoSair(int coluna, int linha, int altura, int largura, int corTexto, int corFundo){
    moldura(coluna,linha,altura,largura,corTexto,corFundo);
    gotoxy(coluna+4,linha+2);
    cout << "4 - SAIR";
}

void botaoRetornarFinanciamento(int coluna, int linha, int altura, int largura, int corTexto, int corFundo){
    moldura(coluna,linha,altura,largura,corTexto,corFundo);
    gotoxy(coluna+3,linha+2);
    cout << "2 - RETORNAR";
    gotoxy(coluna+5,linha+3);
    cout << "AO INICIO";
}

void botaoRetornar(int coluna, int linha, int altura, int largura, int corTexto, int corFundo){
    moldura(coluna,linha,altura,largura,corTexto,corFundo);
    gotoxy(coluna+3,linha+2);
    cout << "2 - RETORNAR";
    gotoxy(coluna+5,linha+3);
    cout << "AO INICIO";
}

void botaoRetornarListar(int coluna, int linha, int altura, int largura, int corTexto, int corFundo){
    moldura(coluna,linha,altura,largura,corTexto,corFundo);
    gotoxy(coluna+3,linha+2);
    cout << "2 - RETORNAR";
    gotoxy(coluna+5,linha+3);
    cout << "AO INICIO";
}

void efeitoBotao(int botao,int coluna, int linha){
    switch(botao){

        case 1:
            moldura(coluna,linha,5,16,CORFUNDO,CORFUNDO);
            delay(50);
            botaoCadastrar(coluna-1,linha+1,5,16,CORFUNDO,CORTEXTO);
            delay(50);
            moldura(coluna-1,linha+1,5,16,0,0);
            botaoCadastrar(coluna,linha,5,16,CORFUNDO,CORTEXTO);
            delay(100);
        break;
        case 2:
            moldura(coluna+44,linha,5,16,CORFUNDO,CORFUNDO);
            delay(50);
            botaoFinanciar(coluna+43,linha+1,5,16,CORFUNDO,CORTEXTO);
            delay(50);
            moldura(coluna+43,linha+1,5,16,0,0);
            botaoFinanciar(coluna+44,linha,5,16,CORFUNDO,CORTEXTO);
            delay(100);
        break;
        case 3:
            moldura(coluna+88,linha,5,16,CORFUNDO,CORFUNDO);
            delay(50);
            botaoListar(coluna+87,linha+1,5,16,CORFUNDO,CORTEXTO);
            delay(50);
            moldura(coluna+87,linha+1,5,16,0,0);
            botaoListar(coluna+88,linha,5,16,CORFUNDO,CORTEXTO);
            delay(100);
        break;
        case 4:
            moldura(coluna+44,linha+12,4,16,CORFUNDO,CORFUNDO);
            delay(50);
            botaoSair(coluna+43,linha+13,4,16,CORFUNDO,CORTEXTO);
            delay(50);
            moldura(coluna+43,linha+13,4,16,0,0);
            botaoSair(coluna+44,linha+12,4,16,CORFUNDO,CORTEXTO);
            delay(100);
        break;
        case 5:
            moldura(coluna+6,linha+15,5,16,CORFUNDO,CORFUNDO);
            delay(50);
            botaoFinalizarCadastrar(coluna+5,linha+16,5,16,CORFUNDO,CORTEXTO);
            delay(50);
            moldura(coluna+5,linha+16,5,16,0,0);
            botaoFinalizarCadastrar(coluna+6,linha+15,5,16,CORFUNDO,CORTEXTO);
            delay(100);
        break;
        case 6:
            moldura(coluna+48,linha+15,5,16,CORFUNDO,CORFUNDO);
            delay(50);
            botaoRetornar(coluna+47,linha+16,5,16,CORFUNDO,CORTEXTO);
            delay(50);
            moldura(coluna+47,linha+16,5,16,0,0);
            botaoRetornar(coluna+48,linha+15,5,16,CORFUNDO,CORTEXTO);
            delay(100);
        break;
        case 7:
            moldura(coluna+51,linha+30,5,16,CORFUNDO,CORFUNDO);
            delay(50);
            botaoRetornarListar(coluna+50,linha+31,5,16,CORFUNDO,CORTEXTO);
            delay(50);
            moldura(coluna+50,linha+31,5,16,0,0);
            botaoRetornarListar(coluna+51,linha+30,5,16,CORFUNDO,CORTEXTO);
            delay(100);
        break;
        case 8:
            moldura(coluna+6,linha+21,5,16,CORFUNDO,CORFUNDO);
            delay(50);
            botaoFinalizarFinanciamento(coluna+5,linha+22,5,16,CORFUNDO,CORTEXTO);
            delay(50);
            moldura(coluna+5,linha+22,5,16,0,0);
            botaoFinalizarFinanciamento(coluna+6,linha+21,5,16,CORFUNDO,CORTEXTO);
            delay(100);
        break;
        case 9:
            moldura(coluna+48,linha+21,5,16,CORFUNDO,CORFUNDO);
            delay(50);
            botaoRetornarFinanciamento(coluna+47,linha+22,5,16,CORFUNDO,CORTEXTO);
            delay(50);
            moldura(coluna+47,linha+22,5,16,0,0);
            botaoRetornarFinanciamento(coluna+48,linha+21,5,16,CORFUNDO,CORTEXTO);
            delay(100);
        break;

    }
}

void logomarca(int coluna, int linha){

    moldura(coluna-2,linha-1,10,15,CORTEXTO,CORFUNDO);
    //F
    gotoxy(coluna,linha);
    printf("%c%c%c%c%c%c%c%c",CESQS,BHOR,BHOR,BHOR,BHOR,BHOR,BHOR,BHOR); //7
    gotoxy(coluna,linha+1);
    printf("%c",BVER);
    gotoxy(coluna,linha+2);
    printf("%c",BVER);
    gotoxy(coluna,linha+3);
    printf("%c%c%c%c%c",204,BHOR,BHOR,BHOR,BHOR);
    gotoxy(coluna,linha+4);
    printf("%c",BVER);
    gotoxy(coluna,linha+5);
    printf("%c",BVER);
    gotoxy(coluna,linha+6);
    printf("%c",BVER);

    // I
    gotoxy(coluna+6,linha+2);
    printf("%c",254);

    gotoxy(coluna+6,linha+4);
    printf("%c",BVER);
    gotoxy(coluna+6,linha+5);
    printf("%c",BVER);
    gotoxy(coluna+6,linha+6);
    printf("%c",BVER);

    //N
    gotoxy(coluna+8,linha+3);
    printf("%c%c%c%c",CESQS,BHOR,BHOR,CDIRS);
    gotoxy(coluna+8,linha+4);
    printf("%c%3c",BVER,BVER);
    gotoxy(coluna+8,linha+5);
    printf("%c%3c",BVER,BVER);
    gotoxy(coluna+8,linha+6);
    printf("%c%3c",BVER,BVER);

    //A
    gotoxy(coluna+13,linha+3);
    printf("%c%c%c%c",CESQS,BHOR,BHOR,CDIRS);
    gotoxy(coluna+13,linha+4);
    printf("%c%3c",BVER,BVER);
    gotoxy(coluna+13,linha+5);
    printf("%c%c%c%c",204,BHOR,BHOR,185);
    gotoxy(coluna+13,linha+6);
    printf("%c%3c",BVER,BVER);

    //N
    gotoxy(coluna+18,linha+3);
    printf("%c%c%c%c",CESQS,BHOR,BHOR,CDIRS);
    gotoxy(coluna+18,linha+4);
    printf("%c%3c",BVER,BVER);
    gotoxy(coluna+18,linha+5);
    printf("%c%3c",BVER,BVER);
    gotoxy(coluna+18,linha+6);
    printf("%c%3c",BVER,BVER);

    gotoxy(coluna+18,linha+8);
    cout << "FINANCIAMENTOS";


}

void fichaCadastro(int coluna,int linha,int &contador,cadastra clientes[]){

    char opcao;
    cadastra cliente;

    do{

        textcolor(CORTEXTO);
        textbackground(CORFUNDO);

        clrscr();

        molduraTela(1,1,CORTEXTO,CORFUNDO);
        moldura(coluna,linha,10,70,CORTEXTO,CORFUNDO);
        gotoxy(coluna+27,linha+2);
        cout << "FICHA CADASTRAL";

        gotoxy(coluna,linha+4);
        printf("%c",204);
        for(int i=0;i<70;i++)
            printf("%c",BHOR);
        printf("%c",185);

        //TEXTO
        gotoxy(coluna+2,linha+6);
        cout << "# NOME:";
        gotoxy(coluna+47,linha+6);
        cout << "# CPF:";

        gotoxy(coluna+2,linha+7);
        cout << "# ENDERECO:";
        gotoxy(coluna+47,linha+7);
        cout << "# TELEFONE:";
        gotoxy(coluna+2,linha+8);
        cout << "# RENDA:";
        gotoxy(coluna+47,linha+8);
        cout << "# IDADE:";

        //BOTOES
        moldura(coluna+5,linha+16,5,16,0,0);
        botaoFinalizarCadastrar(coluna+6,linha+15,5,16,CORFUNDO,CORTEXTO);

        moldura(coluna+47,linha+16,5,16,0,0);
        botaoRetornar(coluna+48,linha+15,5,16,CORFUNDO,CORTEXTO);

        fflush(stdin);
        opcao = getch();
        fflush(stdin);

        switch(opcao){
            case '1':
                efeitoBotao(5,coluna,linha);
                textbackground(CORFUNDO);
                textcolor(CORTEXTO);
                //LER DO TECLADO
                gotoxy(coluna+9,linha+6);
               gets(cliente.nome);
                fflush(stdin);

                gotoxy(coluna+53,linha+6);
                gets(cliente.cpf);
                fflush(stdin);

                gotoxy(coluna+13,linha+7);
                gets(cliente.endereco);
                fflush(stdin);

                gotoxy(coluna+58,linha+7);
                gets(cliente.tel);
                fflush(stdin);

                gotoxy(coluna+10,linha+8);
                cin >> cliente.renda;

                gotoxy(coluna+55,linha+8);
                cin >> cliente.idade;

                gotoxy(coluna+27,linha+12);
                cout << "EFETUADO COM SUCESSO!";
                delay(1000);
                clientes[contador] = cliente;
                contador++;
            break;
            case '2':
                 efeitoBotao(6,coluna,linha);
            break;
        }

    }while(opcao != '2');
}

void fichaFinanciamento(int coluna, int linha, int &contador,financiamento financiamentosEfetuados[],cadastra clientes[],int qtdClientes){

    char opcao;
    financiamento financiado;
    float entrada;
    do{
        textcolor(CORTEXTO);
        textbackground(CORFUNDO);

        clrscr();

        molduraTela(1,1,CORTEXTO,CORFUNDO);
        moldura(coluna,linha,19,70,CORTEXTO,CORFUNDO);
        gotoxy(coluna+26,linha+2);
        cout << "FICHA DE FINANCIAMENTO";

        gotoxy(coluna,linha+4);
        printf("%c",204);
        for(int i=0;i<70;i++)
            printf("%c",BHOR);
        printf("%c",185);

        gotoxy(coluna+35,linha+4);
        printf("%c",203);

        gotoxy(coluna+35,linha+5);
        printf("%c",BVER);

        gotoxy(coluna,linha+6);
        printf("%c",204);
        for(int i=0;i<70;i++)
            printf("%c",BHOR);
        printf("%c",185);
        gotoxy(coluna+35,linha+6);
        printf("%c",206);

        gotoxy(coluna+35,linha+7);
        printf("%c",BVER);

        gotoxy(coluna,linha+8);
        printf("%c",204);
        for(int i=0;i<70;i++)
            printf("%c",BHOR);
        printf("%c",185);
        gotoxy(coluna+35,linha+8);
        printf("%c",202);

        gotoxy(coluna,linha+14);
        printf("%c",204);
        for(int i=0;i<70;i++)
            printf("%c",BHOR);
        printf("%c",185);

        //TEXTO
        gotoxy(coluna+2,linha+5);
        cout << "1 - CREDITO DIRETO AO CONSUMIDOR";

        gotoxy(coluna+2,linha+7);
        cout << "CONSULTAR CPF:";

        gotoxy(coluna+37,linha+7);
        cout << "TIPO DE FINANCIAMENTO:";

        gotoxy(coluna+37,linha+5);
        cout << "2- LEASING";

        gotoxy(coluna+2,linha+10);
        cout << "# NOME:";
        gotoxy(coluna+2,linha+11);
        cout << "# ENDERECO:";
        gotoxy(coluna+43,linha+11);
        cout << "# TELEFONE:";
        gotoxy(coluna+2,linha+12);
        cout << "# RENDA:";
        gotoxy(coluna+43,linha+12);
        cout << "# IDADE:";
        //LER DO TECLADO
        gotoxy(coluna+2,linha+16);
        cout << "# VALOR DE FINANCIAMENTO:";
        gotoxy(coluna+40,linha+16);
        cout << "# VALOR DE ENTRADA:";
        gotoxy(coluna+2,linha+17);
        cout << "# PARCELAS:";
        gotoxy(coluna+40,linha+17);
        cout << "# VALOR DA PARCELA:";

        //BOTOES
        moldura(coluna+5,linha+22,5,16,0,0);
        botaoFinalizarFinanciamento(coluna+6,linha+21,5,16,CORFUNDO,CORTEXTO);

        moldura(coluna+47,linha+22,5,16,0,0);
        botaoRetornarFinanciamento(coluna+48,linha+21,5,16,CORFUNDO,CORTEXTO);

        fflush(stdin);
        opcao = getch();
        fflush(stdin);
        int codigoCliente;
        switch(opcao){
            case '1':
                efeitoBotao(8,coluna,linha);
                char cpf[14];
                textcolor(CORTEXTO);
                textbackground(CORFUNDO);
                gotoxy(coluna+16,linha+7);
                cin >> cpf;
                codigoCliente = buscaCliente(cpf,clientes,qtdClientes);
                financiado.codigoCliente = codigoCliente;
                if(codigoCliente == -1){
                    gotoxy(coluna+10,linha+10);
                    printf("CLIENTE NAO ENCONTRADO");
                    getch();
                }else{
                    gotoxy(coluna+9,linha+10);
                    printf("%s",clientes[codigoCliente].nome);
                    gotoxy(coluna+13,linha+11);
                    printf("%s",clientes[codigoCliente].endereco);
                    gotoxy(coluna+54,linha+11);
                    printf("%s",clientes[codigoCliente].tel);
                    gotoxy(coluna+10,linha+12);
                    printf("%.2f",clientes[codigoCliente].renda);
                    gotoxy(coluna+51,linha+12);
                    printf("%d",clientes[codigoCliente].idade);
                    if(clientes[codigoCliente].idade < 18){
                        gotoxy(coluna+16,linha+13);
                        printf("NAO E PERMITIDO FINANCIAR, DEVIDO A IDADE");
                        getch();
                    }else{
                        gotoxy(coluna+59,linha+7);
                        cin >> financiado.tipoFinanciamento;
                        gotoxy(coluna+27,linha+16);
                        cin >> financiado.valorFinanciado;
                        if(financiado.tipoFinanciamento == 1){
                            gotoxy(coluna+59,linha+16);
                            cin >> entrada;
                        }
                        gotoxy(coluna+13,linha+17);
                        cin >> financiado.numParcela;
                        //CALCULO FINANCIAMENTO
                        if(financiado.tipoFinanciamento == 1)
                            financiar(financiado,entrada);
                        else
                            financiar(financiado);

                        gotoxy(coluna+59,linha+17);
                        printf("%.2f",financiado.valorParcela);
                        financiamentosEfetuados[contador] = financiado;
                        contador++;
                        gotoxy(coluna+26,linha+18);
                        printf("EFETUADO COM SUCESSO");
                        getch();
                    }
                }
            break;
            case '2':
                 efeitoBotao(9,coluna,linha);
                 delay(1000);
            break;
        }

    }while(opcao != '2');
}

void listarFinanciamentos(int coluna, int linha, int financiados, financiamento financiamentos[],cadastra clientes[]){

    char opcao;

    financiados += 1;

    do{

        textcolor(CORTEXTO);
        textbackground(CORFUNDO);

        clrscr();

        molduraTela(1,1,CORTEXTO,CORFUNDO);
        moldura(coluna,linha,financiados+5,120,CORTEXTO,CORFUNDO);
        gotoxy(coluna+43,linha+2);
        cout << "REGISTRO DE FINANCIAMENTOS";

        gotoxy(coluna,linha+4);
        printf("%c",204);
        for(int i=0;i<120;i++)
            printf("%c",BHOR);
        printf("%c",185);

        //BOTOES
        moldura(coluna+50,linha+31,5,16,0,0);
        botaoRetornarListar(coluna+51,linha+30,5,16,CORFUNDO,CORTEXTO);

        //LISTA
        textcolor(CORTEXTO);
        textbackground(CORFUNDO);
        gotoxy(coluna+2,linha+5);
        printf("CODIGO");

        gotoxy(coluna+15,linha+5);
        printf("CPF");

        gotoxy(coluna+26,linha+5);
        printf("NOME");

        gotoxy(coluna+66,linha+5);
        printf("TIPO");

        gotoxy(coluna+75,linha+5);
        printf("FINANCIADO");

        gotoxy(coluna+89,linha+5);
        printf("N%c PARCELAS",248);

        gotoxy(coluna+102,linha+5);
        printf("VALOR PARCELA");

        int codigoCliente;
        int linhaAux = linha + 6;

        for(int i = 0; i < financiados - 1; i++){
            // TEXTO
            codigoCliente = financiamentos[i].codigoCliente;
            gotoxy(coluna+5,linhaAux+i);
            printf("%d",codigoCliente);

            gotoxy(coluna+26,linhaAux+i);
            printf("%s",clientes[codigoCliente].nome);

            gotoxy(coluna+10,linhaAux+i);
            printf("%s",clientes[codigoCliente].cpf);

            gotoxy(coluna+66,linhaAux+i);
            if(financiamentos[i].tipoFinanciamento == 1)
                printf("CDC");
            else
                printf("LEASING");

            gotoxy(coluna+76,linhaAux+i);
            printf("%.2f",financiamentos[i].valorFinanciado);

            gotoxy(coluna+94,linhaAux+i);
            printf("%d",financiamentos[i].numParcela);

            gotoxy(coluna+105,linhaAux+i);
            printf("%.2f",financiamentos[i].valorParcela);
        }
        fflush(stdin);
        opcao = getch();

        switch(opcao){
            case '2':
                 efeitoBotao(7,coluna,linha);
            break;
        }

    }while(opcao != '2');
}

#endif // TELAS_H_INCLUDED
