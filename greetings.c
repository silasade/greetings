/*Program to greet your lecturer*/
#include <stdio.h>
#include<string.h>
int main(){
    char title[10], name[50];
    printf("Good day Sir/Ma\nWhat is your title e.g. Dr,Mrs : ");
    if(fgets(title,10,stdin)!=NULL){
        title[strcspn(title,"\n")]='\0';
    }
    printf("Enter your name?? ");
    if(fgets(name,50,stdin)!=NULL){
        name[strcspn(name, "\n")]='\0';
    }
    printf("HelloWorld %s %s",title,name);

    return 0;
}