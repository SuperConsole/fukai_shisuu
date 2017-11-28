#include<stdio.h>
double fukaishisuu(double t, double h);
int main(void){
	double F;
	double tmp, hu;
	printf("Temperature: ");
	scanf("%lf", &tmp);
	printf("Humid: ");
	scanf("%lf",&hu);
	F = fukaishisuu(tmp, hu);
	if(F >= 75){
		printf("humid\n");
	}else if(F >= 60){
		printf("comfort\n");
	}else{
		printf("cold\n");
	}
}

double fukaishisuu(double t, double h){
	return 0.81*t+0.01*h*(0.99*t-14.3)+46.3;
}
