#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main(void)
//{
//	int age = 18;
//	if (age == 18){
//		printf("成年\n");
//		printf("make friends\n");
//
//	}
//	return 0;
//}
//int main(void)
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age<18)
//	{
//		printf("未成年\n");
//	}
//}

//int main(void)
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age<18)
//	{
//		printf("未成年\n");
//	}
//	else
//	{
//		printf("成年\n");
//	}
//}

//int main(void)
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age<18)
//	{
//		printf("少年\n");
//	}
//	else if (age >= 18 && age<30)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 30 && age<50)
//	{
//		printf("中年\n");
//	}
//	else if (age >= 50 && age<80)
//	{
//		printf("老年\n");
//	}
//	else
//	{
//		printf("老不死\n");
//	}
//
//}

//int main(void)
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1){
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//	return 0;
//}

//int main(void)
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 2 == 1){
//		printf("是奇数\n");
//	}
//	else
//		printf("不是奇数\n");
//	return 0;
//}

//int main(void)
//{
//	for (int i = 0; i <= 100; i++){
//		if (i % 2 == 1){
//			printf("%d是奇数\n",i);
//		}
//		else
//			printf("%d不是奇数\n",i);
//	}
//	return 0;
//}

//int main(void)
//{
//	int day = 1;
//	switch (day)
//	{
//	case 1:
//			printf("星期一\n");
//			break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期天\n");
//			break;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 5;
//	switch (day)
//	{
//	case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("weekday\n");
//			break;
//		case 6:
//		case 7:
//			printf("weekend\n");
//			break;
//	}
//	return 0;
//}

int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	return 0;
}