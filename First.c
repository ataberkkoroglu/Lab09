#include<stdio.h>
#include<string.h>


int main(void){

    char Text[20],prev_Text[20],Essay[1000];
    int point;
    for(int i=0;i<20;i++){
        printf("Write a Character:");gets(Text);
        for(int j=0;j<20;j++)
          if (Text[j]=='\0')
             break;
          else if (Text[j]=='.')
            point++;
        if (strcmp(prev_Text,Text)!=0)
           strcat(Essay,Text);  
        if (point!=0)
            break;
        
        strcpy(prev_Text,Text);
        strcpy(Text,"");
          
    }
   
 printf("Text: %s",Essay);
    
 }

