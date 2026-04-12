#include <stdio.h>

int a_ceil(float x){
    int nn = (int)x+1;
    return nn; 
}

int a_floor(float x){
    int nn = (int)x;
    return nn; 
}

int a_round(float x){
    int nn = x;
    if(x+0.5 < nn + 1){
        nn = (int)x; 
    }
    else{
        nn = (int)x+1;   
    }
    
    return nn;
}



int main(){
   float num;
   char a, f, c;
   
   scanf(" %c %f", &a, &num);
   
   if(a == 'r'){
       printf("%d\n", a_round(num));
   }
   
   
  else if(a == 'f'){
       printf("%d\n", a_floor(num));
   }
   
   else{
       printf("%d\n", a_ceil(num));
   }
    

}