#include <stdio.h>

int main(){
    int p, a, b;
    
    scanf("%d %d %d", &p, &a, &b);
    
    int soma = a + b;
    
    if(soma%2 == 00 && p == 0 || soma%2 != 0 && p == 1){
        printf("%d\n", 0);
    }
    
    else{
        printf("%d\n", 1);
    }
}