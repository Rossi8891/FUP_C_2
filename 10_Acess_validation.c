#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a == 0){
        printf("you must connect to wifi\n");
    }
    
    else if(b == 0){
        printf("you need to login first\n");
    }
    
    else if(c == 0){
        printf("you must to login as admin\n");
    }
    
    else{
        printf("done\n");
    }
}