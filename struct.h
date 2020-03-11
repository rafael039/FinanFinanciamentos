#ifndef STRUCT_H_INCLUDED
#define STRUCT_H_INCLUDED

struct cadastra{

    char nome[40];
    char endereco[60];
    char tel[13];
    char cpf[12];
    double renda;
    int idade;

};

struct financiamento{

    int codigoCliente;
    int tipoFinanciamento;
    double valorFinanciado;
    int numParcela;
    double valorParcela;
};

#endif // STRUCT_H_INCLUDED
