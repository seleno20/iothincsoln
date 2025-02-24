//Quesn 1
#include<stdio.h>
#include<string.h>
int main()
{
int N;
scanf("%d",&N);
getchar();
int i,tcount=0,scount=0;
for(i=0;i<N;i++){
        char stat[200];
        fgets(stat,sizeof(stat),stdin);
    for(int j=0;stat[j]!='\0';j++){
        char ch=tolower(stat[j]);
        if(ch=='t'){
            tcount++;
        }
        else if(ch=='s'){
            scount++;
        }
    }
}
if(tcount>=scount){
    printf("English\n");
}
else
    printf("French\n");
return 0;
}
//quesn 3////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    srand(time(0));

    char message[100];
    printf("Enter your message: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = 0;

    int length = strlen(message);
    char key[100], encrypted[100], decrypted[100];


    for (int i = 0; i < length; i++) {
        key[i] = rand() % 256;
        encrypted[i] = message[i] ^ key[i];
    }


    for (int i = 0; i < length; i++) {
        decrypted[i] = encrypted[i] ^ key[i];
    }
    decrypted[length] = '\0';
 // Display results
    printf("\nGenerated Key (Hex): ");
    for (int i = 0; i < length; i++) {
        printf("%02X ", (unsigned char)key[i]);
    }

    printf("\nEncrypted Message (Hex): ");
    for (int i = 0; i < length; i++) {
        printf("%02X ", (unsigned char)encrypted[i]);
    }

    printf("\nDecrypted Message: %s\n", decrypted);

    return 0;
}



































