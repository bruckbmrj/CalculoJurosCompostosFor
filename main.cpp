//Calculos de juros compostos com for
#include <iostream>

using namespace std;
#include <iomanip>
#include <cmath>

int main()
{
    double amount; //quantia em depoisto ao fim de cada ano
    double principal = 1000.0; //quantia inicial antes dos juros
    double rate = .05; //taxa de juros

    //exibe cabeçalhos
    cout << "Year " << setw(21) << "Amount on deposit" << endl;

    //configura o formato de numero de ponto flutuante
    cout << fixed << setprecision(2);

    //calcula a quantia de depósito para cada um dos dez anos
    for (int year =1; year <= 10; year++ )
    {
        //calcula nova quantia durante ano especificado
        amount = principal * pow(1.0 + rate , year );

        //exibe o ano e a quantia
        cout << setw(4) << year << setw(21) << amount << endl;
    } //fim do for

    return 0;
}
