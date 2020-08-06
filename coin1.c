#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int head = 0;
  int tail = 0;
 
  printf("Tossing a coin...\n");
  srand(time(NULL));
  for(int i=0; i<3; i++){
    
    printf("Round %d: ",i+1);
   
    
    if((int)(rand()%2+1) <= 1){
      printf("Heads\n");
      head++;
    }
    
    else if((int)(rand()%2+1) >= 0){
      printf("Tails\n");
      tail++;
    }
  }

    printf("Heads: %d, Tails: %d\n",head,tail);
    
    
}
