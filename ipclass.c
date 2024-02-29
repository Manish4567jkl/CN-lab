#include<stdio.h>
int main(){
    int fb;
    printf("Enter the ip address :");
    scanf("%d",&fb);
    if(fb>=0 && fb<=127){
        printf("Class A \n");
    }
    else if(fb>=128 && fb<=191){
        printf("Class B \n");
    }
    else if(fb>=192 && fb<=223){
        printf("Class C \n");
    }
     else if(fb>=224 && fb<=239){
        printf("Class D \n");
    }   
     else if(fb>=240 && fb<=255){
        printf("Class E \n");
    }
    else{
        printf("Invalid \n");
    }
    return 0;
}