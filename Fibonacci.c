#include <stdio.h>
//RA2511003012176 JOSH JIBY
int main(){
    int n,i,a=0,b=1,c;
    printf("Enter fibonacci length: ");
    scanf("%d",&n);
    for(i=1;n>=i;i++){
    		printf("%d ",a);
    		c=a+b;
    		a=b;
    		b=c;
	}
	return 0;
}

