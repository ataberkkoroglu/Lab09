#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<conio.h>

int main(void){
    char Text[20],ch;
    int Wovel[]={0,0,0,0,0};
    time_t Time;
    Time=time(NULL);
    struct tm *Tm=localtime(&Time);
    printf("\e[1mWelcome To Program...\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d\n",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    while(1){
        fflush(stdin);
        printf("\n\e[1;35mWrite a Word :\e[0m ");scanf("%s",&Text);
        for(int i=0;i<(sizeof(Text)-1);i++){
            if (Text[i]=='A' || Text[i]=='a')
                Wovel[0]++;
            else if (Text[i]=='E' || Text[i]=='e')
                Wovel[1]++;
            else if (Text[i]=='I' || Text[i]=='i')
               Wovel[2]++;
            else if (Text[i]=='O' || Text[i]=='o')
              Wovel[3]++;
            else if (Text[i]=='U' || Text[i]=='u')
             Wovel[4]++;
        }
        for(int j=0;j<5;j++){

            if (j==0 && Wovel[j]!=0)
              printf("\n\e[1;3%dmA : \e[1;37m%d\n",j,Wovel[j]);

            else if (j==1 && Wovel[j]!=0)
              printf("\n\e[1;3%dmE : \e[1;37m%d\n",j,Wovel[j]);

            else if (j==2 && Wovel[j]!=0)
              printf("\n\e[1;3%dmI : \e[1;37m%d\n",j,Wovel[j]);

            else if (j==3 && Wovel[j]!=0)
              printf("\n\e[1;3%dmO : \e[1;37m%d\n",j,Wovel[j]);

            else if (j==4 && Wovel[j]!=0)
              printf("\n\e[1;3%dmU : \e[1;37m%d\n",j,Wovel[j]);

        }

        while(1){
            printf("\n\e[1;34mWould You Like To Contunie (Y/N) ? :\e[0m ");ch=getche();

            if(ch=='Y' || ch=='y'){
               for(int i=0;i<5;i++)
                  Wovel[i]=0;
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