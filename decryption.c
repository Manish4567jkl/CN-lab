
#include<stdio.h>
#include<stdlib.h>
int main(){
    char message[30],ch;
    int i,key;
    printf("Enter a message to decrypt :");
    scanf("%s",message);
    printf("Enter key :");
    scanf("%d",&key);
    for(i=0;message[i]!='\0';i++){
        ch=message[i];
        if(ch>='a'&& ch<='z'){
            ch=ch-key;
        
            if(ch<'a'){
                ch=ch -'z' + 'a'-1;
            }
                message[i]=ch;
        }
                else if(ch>='A' && ch <='Z'){
                    ch=ch-key;
                    if(ch<'A'){
                        ch=ch +'Z' - 'A'+1;
                         message [i]=ch;
                    }
                    
                    }
        }
                    printf("Decrypted message : %s",message);
                    return 0;
            }