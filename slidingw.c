#include<stdio.h>
#include<stdlib.h>

void main(){
    int w,f;
   int frame[50];
   int i,j;

   printf("enter window size :");
   scanf("%d",&w);

   printf("Enter Number of frames to transmit :");
   scanf("%d",&f);

   printf("Enter %d frames :",f);

   for(i=1;i<=f;i++){
    scanf("%d",&frame[i]);
   }

   printf("\nWith sliding window protocol the frames will be sent in following manner\n");

   printf("\nAfter sending %d frames at each stage sender wait for ack send by reciever\n\n",w);

   for(i=1;i<=f;i++){
    if(i % w == 0){
        printf("%d\n",frame[i]);
        printf("Acknowledgement of above frame sent is recieved by sender\n");
        sleep(2);
    }
    else{
        printf("%d\n",frame[i]);
    }
    if(f % w != 0){
        printf("\nAcknowledgement of above frame sent is recieved by sender\n");
    }
   }
    
     }
