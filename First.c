#include<stdio.h>
#include<string.h>
#include<time.h>
#include<Windows.h>

int main(void){
    time_t Time;
    Time=time(NULL);
    struct tm *Tm=localtime(&Time);
    printf("\e[1mWelcome To Program...\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);

    char Text[20],Essay[1000]="\0",ch;
    int point;
    
    while(1){
    printf("\n\e[1;35mWrite a Character:\e[0m ");gets(Text);
    if (strcmp(Text,".")==0)
        break;
    
    else if ((strlen(Text)+strlen(Essay))<1000){
        
        strcat(Essay," ");          
        strcat(Essay,Text);
    }
    if ((strlen(Text)+strlen(Essay))>1000){
        break;
    }
         
    strcpy(Text,"");  
           
        
        
        
          
    }
 printf("Text:");puts(Essay);  
 return 0;
    }
 

