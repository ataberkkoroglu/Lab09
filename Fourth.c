#include<stdio.h>
#include<time.h>
#include<Windows.h>
#include<stdlib.h>

int main(void){
    time_t Time;
    Time=time(NULL);
    struct tm *Tm=localtime(&Time);
    char Text[300],ch;
    printf("\e[1mWelcome To Program...\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d\n",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    while(1){
      fflush(stdin);
      printf("\n\e[1;36mWrite a Sentence :\e[0m ");gets(Text);
      for(int i=0;i<strlen(Text);i++){
        if (Text[i]=='\0')
            break;
        if (Text[i]<65 ||(Text[i]>90 && Text[i]<97) || (Text[i]>122 && Text[i]<128))
            if (Text[i]!=32)
             Text[i]=32;
        
      }
      printf("\n\e[1;36m%s\n",Text);
      while(1){
        printf("\nWould You Like To Contunie (Y/N) ? :\e[0m ");scanf(" %c",&ch);
        if(ch=='Y' || ch=='y'){
            strcpy(Text,"");
            Sleep(2000);break;
        }
        else if (ch=='N' || ch=='n'){
            Time=time(NULL);
            Tm=localtime(&Time);
            printf("\n\e[1;32mHave a Good Days...\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d\n\e[0m",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
            _exit(0);
        }
        else{
            printf("\n\e[1;4;31mWrong Character...\nPlease Write Again...\n\a\e[0m");
        }
      }
    }
}