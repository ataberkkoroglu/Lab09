#include<stdio.h>
#include<time.h>
#include<Windows.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>

int main(void){
    time_t Time;
    Time=time(NULL);
    struct tm *Tm=localtime(&Time);
    printf("\e[1mWelcome To Program...\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    char Word[20],ch;
    int counter;

    while(1){
        counter=0;
        printf("\n\e[1;35mWrite a Word:\e[0m ");scanf("%s",Word);
        printf("\e[1;31m%s",Word);
        strrev(Word);
        /*if (Word[0]>96 && Word[0]<123)
           Word[0] -=32;
        if (Word[strlen(Word)-1]>64 && Word[strlen(Word)-1]<91)
           Word[strlen(Word)-1] +=32;*/
        strupr(Word);
        char Word2[strlen(Word)];
        strcpy(Word2,Word);
        for(int i=0;i<strlen(Word2);i++){
            if (isdigit(Word2[i])!=0)
                counter++;
               
        }
        printf("\e[1;32m\t%s",Word2);
        if (counter==1)
          printf("\n\e[1;33mThere is number in the word.");
        else if (counter>1)
          printf("\n\e[1;33mThere are numbers in the word.");
        
        while(1){
            printf("\n\e[1;34mWould You Like To Contunie (Y/N) ? :\e[0m ");ch=getche();

            if(ch=='Y' || ch=='y'){
               for(int i=0;i<5;i++)
                 
               strcpy(Word,"");Sleep(2000);break;
            }

            else if (ch=='N' || ch=='n'){
                Time=time(NULL);
                Tm=localtime(&Time);
                printf("\n\e[1;32mHave a Good Days...\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d\n\e[0m",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
                return 0;
            }

            else{
                printf("\n\e[1;4;31mWrong Character...\nPlease Write Again...\n\a\e[0m");
            }
        }
    }
}