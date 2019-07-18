#include <stdio.h>
int main(void)
 {
    int size=0;int n=0;
    printf("enter size of table \n");
    scanf("%d",&size);
    printf("  ");
    
    for(int i=1;i<size+1;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    for(int i =1;i<size+1;i++)
    {
        printf("%d ",i);
        for(int j=1;j<size+1;j++)
        { 
        
            n=i*j;
            printf("%d ",n);
        }
        printf("\n");
    }
	
	return 0;
}

