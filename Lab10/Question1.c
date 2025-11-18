# include<stdio.h>
# include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
    char pass[50];
    int allow = true;
    do{
        printf("Enter password: ");
        fgets(pass,50,stdin);
        pass[strcspn(pass,"\0")] = '\n';
        int hasUpper = 0, hasDigit =0, hasSpcial =0;
        for(int i =0;i<strlen(pass);i++){
            if(pass[i]=='!'||pass[i]=='@'||pass[i]=='#'||pass[i]=='$'||pass[i]=='%') hasSpcial =1;
            if(pass[i] >= 'A' && pass[i] <= 'Z') hasUpper = 1;
            if(isdigit(pass[i])) hasDigit = 1;
        }
        if (strlen(pass) < 8 || hasDigit == 0 || hasSpcial==0||hasUpper==0) {
            allow = false;
            printf("Incorrect Password");
        }
    }while(allow = false);
    return 0;
}