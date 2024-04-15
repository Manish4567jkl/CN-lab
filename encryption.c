
#include<stdio.h>
#include<stdlib.h>
int main(){
    char message[30],ch;
    int i,key;
    printf("Enter a message to encrypt :");
    scanf("%s",message);
    printf("Enter key :");
    scanf("%d",&key);
    for(i=0;message[i]!='\0';i++){
        ch=message[i];
        if(ch>='a'&& ch<='z'){
            ch=ch+key;
        
            if(ch>'z'){
                ch=ch -'z' + 'a'-1;
            }
                message[i]=ch;
        }
                else if(ch>='A' && ch <='Z'){
                    ch=ch+key;
                    if(ch>'Z'){
                        ch=ch -'Z' + 'A'-1;
                         message [i]=ch;
                    }
                    
                    }
        }
    
                    printf("Encrypt message : %s",message);
                    return 0;
            }