#include<iostream> 
#include<vector> 
#include<string.h>
using namespace std;

double NumberSum() {
    int sum1, sum2, sum;
    vector<int> SumX(20);
    string ansr;

        cout << "Insira os valores separados por espaço: \t";
        cin >> sum1 >> sum2;

        sum = sum1+ sum2;
        cout << "A soma dos valores é: \t" << sum << "\n";

        cout << "Deseja continuar realizando alguma operação(S/N): \t";
        cin >> ansr;

        if(ansr == "S") {
            return 1;
        }

    return 0;
}

double NumberDef(){
    return 0;
}

double NumberTimes(){
    return 0;
}

double NumberDivd() {
    return 0;
}

double RootAndPower() {
    return 0;
}

double Factorization() { //Factiorization of a number, wich wil return the T/F for the division (double or boolean?)
    return 0;
}

double TrigFunctions() { //Trigonometric functions, wich it means that will keep the sin, cos and tan functions
    return 0;
}


int calculadora() {
    
    cout << "Selecione uma operação: \n";
    double NumberSum();

    return 0;
}
