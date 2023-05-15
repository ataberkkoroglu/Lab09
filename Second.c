#include<stdio.h>
#include<time.h>
#include<Windows.h>

int main(void){
    time_t Time;
    Time=time(NULL);
    struct tm *Tm=localtime(&Time);
    printf("\n\e[1mWelcome To Program...\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    char Text[300],ch;
    int alphabetics[26];
   
    while(1){
        for (int k=0;k<25;k++){
        alphabetics[k]=0;
         }
        fflush(stdin);
        printf("\n\e[1;35mWrite Your Text Which includes the most 300 Character :\e[0m ");gets(Text);
        strupr(Text);
        for(int i=0;i<300;i++){
            if (Text[i]=='\0')
               break;
            else if (Text[i]>64 && Text[i]<91){
                alphabetics[Text[i]-65]=alphabetics[Text[i]-65]+1;
            }
        }
        static int color=30;
        for(int j=0;j<26;j++){
            if (alphabetics[j]!=0)
             printf("\n\e[1;%dm%c or %c : \e[1;%dm%d\n",color,j+65,j+97,color+1,alphabetics[j]);
            
            if (color>37)
              color=30;
            else
            {
                color++;
            }
            
        }
        
        while(1){
            printf("\n\e[1;36mWould You Like To Continue(Y/N) ? :\e[0m");scanf(" %c",&ch);
            if (ch=='Y' || ch=='y'){
                strcpy(Text,"");
                Sleep(2000);break;
            }
            else if (ch=='N' || ch=='n'){
                Time=time(NULL);
                Tm=localtime(&Time);
                printf("\n\e[1;32mHave a Good Days\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d\e[0m",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
                return 0;
            }
            else{
                printf("\n\e[1;4;31mWrong Input Try Again\n\e[0m");
            }
        }
    }
}