#include <stdio.h>
#include <math.h>

int EhTrianguloRetangulo(float a, float b, float c){

    if (pow(a,2)+ pow(b,2) == pow (c,2)){
        return 1;

    }else{
        return 0;
    }
}

float FormaTrianguloRetangulo(float a, float b, float c){
    if( a<=0 && b > 0 && c>0){
        a = pow(c,2) - pow(b,2);
        return sqrt(a);
    }
    if( a>0 && b <= 0 && c>0){
        b = pow(c,2) - pow(a,2);
        return sqrt(b);
    }
    if( a>0 && b > 0 && c<=0){
        c = pow(a,2) + pow(b,2);
        return sqrt(c);
    }else{
        return -1;
    }
}

int main(void){
    float a, b, c, lado;
    int triangulo;

    printf("Insira os lados dos triangulos a, b, c, respectivamente: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0){
        triangulo = EhTrianguloRetangulo(a, b, c);
        if (triangulo){
            printf("\nEh triangulo retangulo\n");
        }else{
            printf("Nao eh triangulo retangulo\n");
        }
    }else{
        if (a<=0 && b>0 && c>0){
            lado = FormaTrianguloRetangulo(a, b, c);
            printf("\nPara ser triangulo retangulo o lado A precisa ser: %.1f\n", lado);
        }else if (b<=0 && a>0 && c>0){
            lado = FormaTrianguloRetangulo(a, b, c);
            printf("\nPara ser triangulo retangulo o lado B precisa ser: %.1f\n", lado);
        }else if (c<=0&& a>0 && b>0){
            lado = FormaTrianguloRetangulo(a, b, c);
            printf("\nPara ser triangulo retangulo o lado C precisa ser: %.1f\n", lado);
        }else{
            if(FormaTrianguloRetangulo(a, b, c)== -1){
            printf("\nValores invalidos\n");
            }
        }
    }

    return 0;
}
