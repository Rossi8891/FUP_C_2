#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int res = 0;
    
    if(a == b && a == c){
        printf("%d\n", 3);
    }
    
    else if(a == b && b != c || a == c && c != b || c == b && b != a){
        printf("%d\n", 2);
    }
        
   else{
       printf("%d\n", 0);
   }

}