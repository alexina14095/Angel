//variables and data types
#include <stdio.h>
int main() {
	//declare and initialize variables
	float height=163;//%f
	double bankbalance=2000;//%lf
	int phonenumber=712435678;//%d
	
	// prompt the user
	printf("Enter your height:\t");
	scanf("%f",&height);
	
	printf("Enter your bankbalance:\t");
	scanf("%lf",&bankbalance);
	
	printf("Enter your phonenumber:\t");
	scanf("%d",&phonenumber);
	
	printf("The height is %.2f\n",height);
	printf("The bankbalance is %.2lf\n",bankbalance);
	printf("The phonenumber is %d\n",phonenumber);
	
	return 0;
}