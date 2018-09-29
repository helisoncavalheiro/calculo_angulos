//O presente código tem por objetivo calcular ângulos de triângulos a partir de suas medidas
//Programador: Helison Ortiz Cavalheiro
//Data: 28-09-2018 
#include <stdio.h>
#include <math.h>
int main(){
    float _a, _b, _c;
    float _res;
    printf("Lado a: ");
    scanf("%f", &_a);
    printf("\n");
    printf("Lado b: ");
    scanf("%f", &_b);
    printf("\n");
    printf("Lado c: ");
    scanf("%f", &_c);

    printf("a: %f, b: %f, c: %f", _a, _b, _c);

    float _cos = pow(_b, 2) + pow(_c, 2) - pow(_a, 2);
    float _result = _cos/(2*_b*_c);

    if(_result < 0)
        _result = _result * -1;
    
    printf("\n\nCos: %f", _result);
    

}

/*
//Esta função é para calcular a medida de cada lado do triângulo
//será implementada apenas no arduino com o uso de sensores infravermelho
//********CÓDIGO NÃO TESTADO!!!!!!!!!!!!
double spaceCalc(double _speed, double _time){
    double _result;

    _result = _speed / _time;

    return _result;
}


float calculaAng(float a, float b, float c){
       
}

*/