#include<stdio.h> 
#include<stdlib.h>
#include<string.h> 

#define MAX 10000
int main(void)
{

	char *str=(char*)malloc(sizeof(char)*MAX); 
    int o,len,num[128]={0}; 
    
    printf("�п�J�@�r��");
    scanf("%s",str);  
    
    len=strlen(str);
    
    for(o=0;o<len;o++){
    	num[(int)str[o]]++; 
	}
    for(o=0;o<128;o++){
    	
    	if(num[o]!=0){
    		
    		printf("�r��%c�X�{%d��\n",(char)o,num[o]);
    		
		}
	
	}
    return 0;
    
    free(str);

}

