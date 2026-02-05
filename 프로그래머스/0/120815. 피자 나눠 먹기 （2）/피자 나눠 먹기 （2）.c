#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int i =1;
    while(true){
        if(n*i%6==0){
            return n*i/6;
        }
        else{
            i++;
        }
    }
    
}