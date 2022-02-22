#include<stdio.h>
int main(void)
{
	int i=0,j=0,student,course;
	float sum=0,grade=0,highestGPA=0,GPA=0;
	
	printf("Enter the number of student:");
	scanf("%d", &student);
	if(student<1){
		printf("Error! Enter a correct input.");
		return(0);
	}
	
	while(student>i)
	{
	
		printf("Enter the number of courses taken by %d. student: ", (i+1));
 		scanf("%d",&course);
 		if(course<0){
			printf("Error! Enter a correct input.");
			return(0);
		}
 		j=0;
		while(j < course)
		{
			j++;
			printf("Enter %d. course grade: ", j);
			scanf("%f", &grade);
			sum=sum+grade;
		}
		
		GPA=sum/course;
		printf("Student has GPA %.2f\n", GPA);
		i++;
		sum=0;
		if(GPA>highestGPA){
	    	highestGPA=GPA;
		}
	
	}
	printf("\nBest student has %.2f GPA.", highestGPA);
	return(0);
}
