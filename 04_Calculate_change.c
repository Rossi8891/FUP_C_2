#include <stdio.h>

int main(){
    int qt1, qt2, qt3;
    float p1, p2, p3;
    float valor_r;
    
    scanf("%d %d %d", &qt1, &qt2, &qt3);
    scanf("%f %f %f %f", &p1, &p2, &p3, &valor_r);
    
    float soma_t = (qt1 * p1) + (qt2 * p2) + (qt3 * p3);
    float troco = valor_r - soma_t;
    
    printf("%.2f\n", troco);
    
}