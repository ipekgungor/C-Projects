#include<stdio.h> 
#include<math.h>
int get_problem(){
	int number;
	printf("Enter the number of the problem you wish the solve.\n");
	printf("    GIVEN A MEDICAL ORDER IN                          CALCULATE RATE IN\n");
	printf("(1) ml/hr & tubing drop factor                        drops / min\n");
	printf("(2) 1 L for n hr                                      ml / hr\n");
	printf("(3) mg/kg/hr & concentration in mg/ml                 ml / hr\n");
	printf("(4) units/hr & concentration in units/ml              ml / hr\n");
	printf("(5) QUIT\n");
	printf("Problem=> ");
	scanf("%d",&number);
	return number;
}

float fig_drops_min(float first_variable,float second_variable){
	float result;
	result = (first_variable * second_variable)/60;
	return result;
	
}

float fig_ml_hr(float rate){
	float result;
	printf("Enter number of hours=> ");
	scanf("%f",&rate);
	result=1000/rate;
	return result;	
}

float by_weight(float first,float second,float third){
	float result;
	result=(first*second)/third;
	return result;
}

float by_units(float firstt,float secondd){
	float result;
	result= firstt/secondd;
	return result;
}

void get_rate_drop_factor(float *result1){
	float rate1,rate1_1;
	printf("Enter rate in ml/hr=> ");
	scanf("%f",&rate1);
	printf("Enter tubing\'s drop factor(drops/ml)=> ");
	scanf("%f",&rate1_1);
    *result1=fig_drops_min(rate1,rate1_1);
}

void get_kg_rate_conc(float*result3){
	float rate3,rate3_1,rate3_2;
	printf("Enter rate in mg/kg/hr=> ");
	scanf("%f",&rate3);
	printf("Enter patient weight in kg=> ");
	scanf("%f",&rate3_1);
	printf("Enter concentration in mg/ml=> ");
	scanf("%f",&rate3_2);
	*result3 = by_weight(rate3,rate3_1,rate3_2);
}
void get_units_conc(float*result4){
	float rate4,rate4_1;
	printf("Enter rate in units/hr=> ");
	scanf("%f", &rate4);
	printf("Enter concentration in units/ml=> ");
	scanf("%f", &rate4_1);
	*result4= by_units(rate4,rate4_1);
	
}
	
int main(){
	float result1_1,result3_3,result4_4;
	float rate2,result2_2;
	int problem_number;
	printf("INTRAVENOUS RATE ASSISTANT\n\n");
	
	problem_number = get_problem();
	while(problem_number < 5){
		
		if (problem_number == 1){
			get_rate_drop_factor(&result1_1);
			printf("The drop rate per minute is %.0f.\n\n", round(result1_1));
		}
		else if(problem_number == 2){
			result2_2 = fig_ml_hr(rate2);
			printf("The rate in milliliters per hour is %.0f.\n\n " ,round(result2_2));
		}	
		else if(problem_number == 3 ){
			get_kg_rate_conc(&result3_3);
			printf("The rate in milliliters per hour is %.0f.\n\n", round(result3_3));
		}
		else if(problem_number == 4){
			get_units_conc(&result4_4);
			printf("The rate in milliliters per hour is %.0f.\n\n", round(result4_4));
		}
		problem_number = get_problem();
	}
	
	return(0);
}
