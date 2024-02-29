#include<stdio.h>
#include<stdlib.h>

#include<unistd.h>

int main(){
    int frames;
    printf("Enter the no of frames\n");
    scanf("%d",&frames);
    int i=1,x1,x2;
    printf("total no of frames : %d\n",frames);

    for(int i=1;i<=frames;i++){
        printf("sending frames %d\n",i);
        x2=(rand()%10);
             printf("waiting for %d seconds\n",x2);
       sleep(x2);
        if(x2>3){
            printf("Timeout requested\n");
            printf("re-sending data %d\n",i);
            printf("acknowledgement recieved %d\n",i);
        }
        else{
            printf("acknowledgement recieved %d\n",i);
            
        }
        printf("Recieved acknowledgement for %d\n",i);
        
    }
    return 0;
     }