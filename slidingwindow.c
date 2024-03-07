#include<stdio.h>
void main(){
    int w,f,frames[30],i;
    printf("Enter window size :");
    scanf("%d",&w);
    printf("Enter the number of frames to transmit");
    scanf("%d",&f);
    printf("Enter %d frames" , f);

    for(i=0;i<=f;i++){
        scanf("%d",&frames[i]);
    }
    printf("\n With sliding window protocol the frames will be sent in the following manner ");
    printf("After sending %d frames at each stage , sender wait for ack send by reciever \n\n" , w);

    for(i=1;i<=frames;i++){
        if(i%w == 0){
            printf("%d\n" , frames[i]);
            printf("Acknowledgement of the above frame sent is recieved by reciever");
        }
        else{
            printf("%d",frames[i]);
        }
        if(f%w != 0){
            printf("Acknowledgement of above frame sent is recieved by the sender");
        }
    }
}