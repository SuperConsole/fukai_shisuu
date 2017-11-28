#include<stdio.h>

//関数プロトタイプ宣言
double fukaishisuu(double t, double h);

int main(void){
	
	//宣言
	double F;
	double tmp, hu;
	
	//入力
	printf("Temperature: ");
	scanf("%lf", &tmp);
	printf("Humid: ");
	scanf("%lf",&hu);
	
	//不快指数を代入
	F = fukaishisuu(tmp, hu);
	
	//分岐
	if(F >= 75){
		printf("humid\n");
	}else if(F >= 60){
		printf("comfort\n");
	}else{
		printf("cold\n");
	}
}

double fukaishisuu(double t, double h){
	return 0.81*t+0.01*h*(0.99*t-14.3)+46.3;//不快指数
}
