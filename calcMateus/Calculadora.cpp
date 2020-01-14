#include<iostream> 
#include<math.h>
#include<string.h>

using namespace std;

double SomaDeNumeros() {
    double sum1, sum2, sum3, sumX, sumi;
    int i;
    string soma;

        cout << "Insira os valores separados por espaço: \t";
        cin >> sum1 >> sum2;

        sum3 = sum1 + sum2;
        sum1 += (sum3 - sum1);
        cout << "A soma é: \t" << sum3 << "\n";
        
        cout << "Deseja continuar a operar? (S/N): \t";
        cin >> soma;

        if(soma == "S") {
            
            for(i = 0; i < 20; i++) {

                cout << "Insira o valor a ser somado: \t";
                cin >> sumi;
                sumX = sum1 + sumi;
                sum1 += (sumX - sum1);
                cout << "A soma é: " << sumX << "\n";
            }
        }
        else if(soma == "N")
            exit(-1);
    return 0;
}

double SubDeNumeros(){
      double sub1, sub2, sub3, subX, subi;
    int i;
    string sub;

        cout << "Insira os valores separados por espaço: \t";
        cin >> sub1 >> sub2;

        sub3 = sub2 - sub1;
        sub1 += (sub3 - sub1);
        cout << "A soma é: \t" << sub3 << "\n";
        
        cout << "Deseja continuar a operar? (S/N): \t";
        cin >> sub;

        if(sub == "S") {
            
            for(i = 0; i < 20; i++) {

                cout << "Insira o valor a ser somado: \t";
                cin >> subi;
                subX = sub1 - subi;
                sub1 += (subX - sub1);
                cout << "A soma é: " << subX << "\n";
            }
        }
        else if(sub == "N")
            exit(-1);
    return 0;
}

double ProdDeNumeros() {
    double prod1, prod2;

    cout << "Insira os valores seprados por espaço: \t";
    cin >> prod1 >> prod2;
 
    cout << "O produto dos números é: " << prod1 * prod2 << "\n";
    return prod1 * prod2;
}

double RazaoDeNumeros() {
    double raz1, raz2;

    cout << "Insira os valores sepaarados por espaço: \t";
    cin >> raz1 >> raz2;

    cout << "O resultado da divisão é: " << raz1 / raz2 << "\n";
    
    return raz1 / raz2;
}

int Radiciacao() { //usar o comando pow para mudar o índice e a potência
    int radi, expoente, indice;

    cout << "Insira o valor da base e do expoente: \t";
    cin >> radi >> expoente;
    cout << "Insira o valor do indice: \t";
    cin >> indice;
    cout << "O valor da raiz é: " << pow(radi, expoente/indice);
    
    return pow(radi, expoente/indice);
}

int Potenciacao() {
    int base, expo;

    cout << "Insira o valor da base e do expoente, separados por espaço: \t";
    cin >> base >> expo;

    cout << "O resultado é: " << pow(base, expo);
    
    return pow(base, expo);
}

int Pa() {
     int a1, a2, a3;
    int razao, PN, termo_geral;
    
cout << "Insira a PA e a posição numerica \n";
cin >> a1 >> a2 >> a3 >> PN;

if (a3 - a2 == a2 - a1) {
    
    razao = a2 - a1;
    termo_geral = a1 + (PN - 1)*razao;
}
else {
    cout << "ERROR 404 \n";
}

cout << "O termo geral é: " << termo_geral;

    return 0;
}

double Fatoracao() {
    int fator, resto;

    cout << "Insira um valor a ser dividido: \t";
    cin >> fator;

    resto = fator % 2;

    if(resto == 0)
        cout << "O número é par \n";
    else 
        cout << "O número é ímpar \n";

    return resto;
}

int Calculadora() {
    int a;

    do {
    cout << "Selecione a operação a realizar: \n";
    cout << "1.Soma \n" << "2.Subtração \n" << "3.Produto \n" << "4.Divisão \n" << "5.Radiciação \n" << "6.Potenciação \n" << "7.PA \n" << "8.Fatoração \n";  
    cin >> a;

    if(a == 1)
        SomaDeNumeros();
    else if(a == 2) 
        SubDeNumeros();
    else if(a == 3)
        ProdDeNumeros();
    else if(a == 4) 
        RazaoDeNumeros();
    else if(a == 5) 
        Radiciacao();
    else if(a == 6) 
        Potenciacao();
    else if(a == 7) 
        Pa();
    else if(a == 8)
        Fatoracao();
    else 
        cout << "Não foi possível identificar a operação \n";
    }
    while (!system("pause"));
    return 0;
}