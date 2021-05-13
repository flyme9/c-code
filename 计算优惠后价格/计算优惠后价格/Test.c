#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double money = 0;
	int month = 0, day = 0, coupon = 0;
	scanf("%lf %d %d %d", &money, &month, &day, &coupon);
	//计算出双十一打折后的价格
	if (month == 11 && day == 11)
		money *= 0.7;
	//计算出双十二打折后的价格
	else if (money == 12 && day == 12)
		money *= 0.8;
	//计算出打折后有优惠券的价格
	if (coupon == 1)
		money -= 50;

	if (money < 0.0)
		printf("%.2lf\n",0.00);
	else
		printf("%.2lf\n", money);
}