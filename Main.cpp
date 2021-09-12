#include<stdio.h>

int isEqual(char *p , char *k){

	int i, u1=0,u2=0,result=2;

	for(i=0;p[i]!='\0';i++){
		u1++;
	}
                
    for(i=0;k[i]!='\0';i++){
		u2++;
    }
                
    if(u1 == u2) result = 1;
    
    else result = 0;

	return result;

}

int main()
{
 char character1[]="CENG";
 char character2[]="COMPUTER";
 
 printf("Equal =  %d ",isEqual(character1,character2));
 
 return 0;
}
