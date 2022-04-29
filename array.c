#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i,b,c=0;
    scanf("%d",&i);
    
    for(b=0;b<i;b++){
        int arr[i];
        scanf("%d", &arr[b]);
        c = c + arr[b];
    }   
    printf("%d",c);
    
    return 0;
}
.
