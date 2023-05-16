#include<stdio.h>
#include<time.h>
#include<Windows.h>

#define SIZE 300

int main(void){
char Sentence[SIZE]="\0",Alphabet[25][SIZE],ch;
time_t Time;
Time=time(NULL);
struct tm *Tm=localtime(&Time);


printf("\e[1mWelcome To Program...\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
while(1){

    for(int i=0;i<25;i++)
        strcpy(Alphabet[i],"");

    fflush(stdin);
    printf("\n\e[1;35mWrite a Sentence :\e[0m ");gets(Sentence);
    strupr(Sentence);

   // puts(Sentence);

    for(int i=0;Sentence[i]!='\0';i++){
         if (Sentence[i]>64 && Sentence[i]<91)
            strcat(Alphabet[Sentence[i]-65],"*");
        }

    for(int j=0;j<25;j++){
        static int color=30;
        if (Alphabet[j][0]!='\0'){
         printf("\n\e[1;%dm%c : ",color,65+j);
         if(color<37)
            color++;
         else
            color=30;
        }
        for(int k=0;k<strlen(Alphabet[j]);k++){
           if(Alphabet[j][k]=='*')
              printf("%c",Alphabet[j][k]);
           else
              break;
        }

    }

    while(1){
        printf("\n\e[1;36mWould You Like To Contunie (Y/N) ? : ");scanf(" %c",&ch);
        if(ch=='Y' || ch=='y'){
            Sleep(2000);break;
        }
        else if (ch=='N' || ch=='n'){
            Time=time(NULL);
            Tm=localtime(&Time);
            printf("\n\e[1;32mHave a Good Days...\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d\e[0m",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
            return 0;
        }
        else{
            printf("\n\e[1;4;31mWrong Character...\nPlease Write Again...\n\a\e[0m");
        }
    }
}
}


