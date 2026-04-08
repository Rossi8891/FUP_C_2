#include <stdio.h>

int absol(int n){
    if(n < 0){
        n = -(n);
    }
    
    return n;
}

int main(){
   int a, b;
   scanf("%d %d", &a, &b);
   printf("%d\n", absol(a - b));
    
}