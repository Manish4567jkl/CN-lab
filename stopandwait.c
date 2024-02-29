#include<stdio.h>
#include<stdlib.h>

int main(){
    int frames;
    printf("Enter the number of frames :");
    scanf("%d" , &frames);
    int i=1,j,x1,x2;
    printf("Total number of frames : %d\n",frames);
    while(frames > 0){
    j=rand()/10000000;
        printf("Sending frame :%d\n",i);
        x1=rand()%10;
        if(x1%2!=0){
            for(x2=1;x2<3;x2++){
                printf("Waiting for %d seconds \n",x2);
                sleep(x2);

            }
            printf("Resending frame : %d\n",i);
        }
        printf("Sending acknowledgement : %d for frame %d \n" , j,i);
        frames--;
        i++;
    }
    printf("Frame Sending is complete\n");
    return 0;
}
