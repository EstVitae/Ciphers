#include "stdio.h"
#include "string.h"
#include "ctype.h"
int ind (char str){
    char a[26];
    int k=0;
    int i;
    for (i=97;i<=122;i++){
        a[k]=i;
        if (a[k]==str)
            return k;
        k++;
    }
}
int main(){
    char a[26];
    char str[100];
    char key[100];
    int i;
    int aux;
    printf ("Word to code:");
    scanf ("%s%*c",str);
    printf ("\nKey:");
    scanf("%s%*c",key);
    for (i=0;i<strlen(str);i++){
        str[i]=tolower(str[i]);
        aux=(ind(str[i])+ind(key[i%strlen(key)]))%26;
        str[i]=toupper(aux+97);
        
    }
    printf ("\nCoded:%s\n",str);
    getchar();
}