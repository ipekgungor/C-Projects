
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int calculateSeries(int a, int n,char op){
	int i,j,result;
	
	if(op=='P' || op=='p'){
		result=1;
        for(i=1; i<= n; i++){
        	result=pow(a,i)*result;
        }
    return result;
	}
	else if (op=='S' || op== 's'){
		result=0;
        for(j=1; j<= n; j++){
        	result=pow(a,j)+result;
        }
	return result;
   }

}	
void getValues(){
    int i,j;
    int a,n,result;
    char op;
    printf("Enter the base number: ");
	scanf("%d",&a);
	printf("Enter the pow limit: ");
	scanf("%d",&n);
	printf("Enter the operation symbol P or S:");
	scanf(" %c",&op);
	
	printf("The series: ");
	
    if(op=='P' || op=='p'){
        for(i=1; i<= n; i++){
           printf("%d",a);  
           printf("^");
           printf("%d ",i);
           if (i != n){
            printf("* ");
           }
        }
    }
    else if (op=='S' || op== 's'){
        for(j=1; j<= n; j++){
           printf("%d",a);  
           printf("^");
           printf("%d ",j);
           if (j != n){
            printf("+ ");
           }
        }
    }
    else{
        printf("Wrong operation symbol!!!\n");
        return;
    }
    printf("\n");
    result = calculateSeries(a,n,op);
    printf("The result of the series: %d",result);
}

int main()
{
    getValues();
    return 0;
}
