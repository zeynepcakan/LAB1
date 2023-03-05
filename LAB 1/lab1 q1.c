#include <stdio.h>
#include <stdlib.h>

int calculate(int student, int grade);

int main() {
	
	int pass_grade, std_num;
	printf("please enter the student number(max 100): "); 
	scanf("%d",&std_num);
	printf("please enter the passing grade: ");
	scanf("%d",&pass_grade);

	printf("failed student number is: %d",calculate(std_num,pass_grade));
	
	return 0;	
}

int calculate(int student, int grade){
	int i,f=0,sum=0,array[100];
	float avg;
	for(i=0; i<student; i++){
		printf("Grade of student %d :  ",i+1);
		scanf("%d",&array[i]);
		sum=sum+array[i];
		if(array[i]<grade)
			f++;
	}
	avg=(float)sum/student;
	
	printf("average of class: %.2f\n",avg);
	
	return f;
	
	}
