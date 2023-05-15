#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<conio.h>
#include<string.h>

int main(void){
    char Text[20],ch;
    time_t Time;
    Time=time(NULL);
    struct tm *Tm=localtime(&Time);
    printf("\e[1mWelcome To Program...\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d\n",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    while(1){
        printf("\n\e[1;35mWrite a Word:\e[0m ");scanf("%s",&Text);
        char Text2[strlen(Text)];
        for (int i=0;i<strlen(Text);i++){
            if (i!=0 &&(Text[i]=='A' || Text[i]=='a' || Text[i]=='E' || Text[i]=='e' || Text[i]=='U' || Text[i]=='u' || Text[i]=='I' || Text[i]=='i' || Text[i]=='O' || Text[i]=='o')){
                Text[i]='?';
            }
        }
        strcpy(Text2,Text);
        
        printf("\n\e[1;36mThe New Word Is:\e[0m ");

        for(int j=0;j<strlen(Text2);j++){
          if (Text2[j]!='?')
             printf("%c",Text2[j]);
        }

        while(1){
            printf("\n\e[1;34mWould You Like To Contunie (Y/N) ? :\e[0m ");ch=getche();

            if(ch=='Y' || ch=='y'){
               strcpy(Text,"");Sleep(2000);break;
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