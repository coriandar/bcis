#include <stdio.h>

int main(void)
{
	float dis_ft = 0.0f;
	float dis_m = 0.0f;
	const float ft_to_m = 0.3048f;

	printf("Distance in feet? ");
	scanf("%f", &dis_ft);

	printf("Converting...\n");

	dis_m = dis_ft * ft_to_m;
	printf("%f feet is the same as %f metres.", dis_ft, dis_m);

	return 0;
}