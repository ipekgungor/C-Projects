#include<stdio.h>
#define pi 3.14
int main(void)
{ 
	int radius, length, width , side ;
	int rect_area, rect_circumference;
	char ch;
	float circle_area, circle_circumference;
	printf("Enter the shape (C/c, R/r, S/s) : ");
	scanf("%c", &ch);
	
	if(ch == 'C' || ch == 'c'){
	
	    printf("Enter the radius of circle: ");
	    scanf("%d", &radius);
	    circle_area = pi* radius* radius;
	    circle_circumference= 2*pi*radius;
	    printf("Circle's area is %.2f and circumference is %.2f", circle_area,circle_circumference);
	}
	else if( ch == 'R' || ch == 'r'){
		
		printf("Enter the width and length of rectangle: ");
		scanf("%d%d", &length,&width);
		if(length == width){
			printf("Error. It is not a rectangle.");
		}
		else {
			rect_area= length*width;
			rect_circumference= 2*(width+length);
			printf("Rectangle's area is %d and circumference is %d", rect_area,rect_circumference);
		}
	}
	else if (ch == 'S' || ch == 's'){
		printf("Enter the side of square: ");
		scanf("%d",&side);
		rect_area= side*side;
		rect_circumference= 4*side;
		printf("Square's area is %d and circumference is %d", rect_area,rect_circumference);
	
	}
	else{
	    printf("Error! It is not a correct shape.");
	}    
	return(0);
}
