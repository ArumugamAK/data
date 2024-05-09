#include<stdio.h>
#include<string.h>
int main(){
     char str[80];
     gets(str);
     int s,n,i,j,z,k=0;
     char *p=strtok(str," ");
     char *arr[900];
    
     while(p!=NULL)
     {
         arr[i++]=p;
         p=strtok(NULL," ");
         z++;
     }
    
     
     for(i=0;i<z;i++)
     {
     	s=strlen(arr[i]);
     	for(j=s-1;j>=0;j--){
     		printf("%c",arr[i][j]);
     		
		 }
		 printf(" ");
     	
	 }
}
    



