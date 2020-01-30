#include <stdio.h>
#include<string.h>
int main()
{
    char string[20][200]={},smallest[100]={},largest[100]={},character=0;
    int min,max=0,counter=0,space=0;
    while (character!='\n'){
      scanf("%c",&character);
      string[space][counter]=character;
      counter++;
      if(character==' '){
          space++;
          counter=0;
      }

    }
    min=strlen(string[0]);
   strcpy(smallest,string[0]);
    for(int i=0;i<=space;i++){
                if(strlen(string[i])>max){
                    max=strlen(string[i]);
                    for(int j=0;j<strlen(string[i])-1;j++){
                        largest[j]=string[i][j];
                    }
                }
                if(strlen(string[i])<min){
                    min=strlen(string[i]);
                   for(int j=0;j<strlen(string[i])-1;j++){
                        smallest[j]=string[i][j];
                    }
            }
        }
    printf("Longest word is \"%s\" and has %d length.\n",largest,max-1);
    printf("Shortest word is \"%s\" and has %d length.\n",smallest,min-1);
    return 0;
}
