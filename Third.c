#include<stdio.h>
#include<string.h>

void Plural(char *Text){
    char Text2[10];
    strcat(Text2,Text);
    for(int i=strlen(Text2);i<10;i++){
        Text2[i]='1';
    }
    for (int j=0;j<10;j++){
            if (j==0)
             Text2[j]=Text2[j]-32;
            
            if (Text2[j]=='y' && Text2[j+1]=='1'){
                Text2[j]='i';
                Text2[j+1]='e';
                Text2[j+2]='s';
                for(int k=0;k<10;k++){
                    if (Text2[k]=='1')
                       Text2[k]="";
                }   
                }
            else if (((Text2[j-1]=='c' || Text2[j-1]=='s') && Text[j]=='h')|| (Text2[j]=='s') && Text2[j+1]=='1'){
                Text2[j+1]='e';
                Text2[j+2]='s';
                for(int k=0;k<10;k++){
                    if (Text2[k]=='1')
                       Text2[k]="";
                }
                    
                }
            else if (Text2[j+1]=='1'){
                Text2[j+1]='s';
                for(int k=0;k<10;k++){
                    if (Text2[k]=='1')
                       Text2[k]="";
                }    
                }
            
            }
        if (Text2[0]==Text2[1])
           for(int i=0;i<strlen(Text2);i++)
             printf("%c",Text2[i]);
        else
         printf("\n%s\n",Text2);  
        
       
        
    strcpy(Text2,"");
 
}

int main(void){
    char Trial[9][10]={"chair","dairy","boss","circus","fly","dog","church", "clue","dish"};
    for(int i=0;i<9;i++){
        Plural(Trial[i]);    
    }
    
}