#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main(void)
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//int main(void)
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//int main(void)
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//int main(void)
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main(void)
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}


//int main(void)
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main(void)
//{
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);
//	printf("请确认（Y/N）：");
//	while (getchar() != '\n');
//	int ret = getchar();
//	if (ret == 'y'){
//		printf("确认成功\n");
//	}
//	else{
//		printf("放弃确认\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main(void)
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main(void)
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main(void)
//{
//	
//	//for (;;)
//	//{
//	//	printf("hehe\n");
//	//}
//	//
//	//int x, y;
//	//for (x = 0, y = 0; x<2 && y<5; ++x, y++)
//	//{
//	//	printf("hehe\n");
//	//}
//	return 0;
//}

//int main(void)
//{
//	int i = 10;
//	do
//	{
//		printf("%d\n", i);
//	} while (i<10);
//	return 0;
//}

//int main(void)
//{
//	int n = 0, x = 1;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++){
//		x *= i;
//
//	}
//	printf("%d", x);
//	return 0;
//}

//int main(void)
//{
//	int sum = 0, mul = 1;
//	for (int i = 1; i <= 10; i++){
//		for (int j = 1; j <= i; j++){
//			mul = 1;
//			mul *= j;
//		}
//		sum += mul;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main(void)
//{
//	int sum = 0, mul = 1;
//	for (int i = 1,j = 1; i <= 3; i++){
//		
//		mul *= i;
//		sum += mul;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main(void)
//{
//	int i = 10;
//	do
//	{
//		if (5 == i)
//			break;
//		printf("%d\n", i);
//	} while (i<10);
//	return 0;
//}


//int main(void)
//{
//	int i = 10;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//	} while (i<10);
//	return 0;
//}

//int main(void)
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left<=right){
//		int mid = (left + right) / 2;
//		if (arr[mid] > k){
//			right = mid - 1;
//		}
//		else if (arr[mid] < k){
//			left = mid + 1;
//		}
//		else {
//			printf("find it   mid = %d",mid);
//			break;
//		}
//	}
//	if (right < left){
//		printf("can not find it");
//	}
//	return 0;
//}

//#include<windows.h>
//int main(void)
//{
//	char arr1[] = "Welcome come to ...!!!!";
//	char arr2[] = "#######################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right){
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		left++;
//		right--;
//		system("cls");
//	}
//	return 0;
//}

//int main(void)
//{
//	char psw[20] = "";
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; ++i)
//	{
//		printf("please input:");
//		scanf("%s", psw);
//		if (strcmp(psw, "123456") == 0)
//			break;
//	}
//	if (i == 3)
//		printf("exit\n");
//	else
//		printf("log in\n");
//}


//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("**********************************\n");
//	printf("*********** 1.play     **********\n");
//	printf("*********** 0.exit     **********\n");
//	printf("**********************************\n");
//}
//
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		printf("请输入猜的数字>:");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("猜大了\n");
//		}
//		else if (input < random_num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("选择错误,请重新输入!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("电脑将在1分钟内关机，如果输入：hh，就取消关机!\n请输入:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "hh"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

#include <stdlib.h>
int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
		scanf("%s", input);
		if (0 == strcmp(input, "我是猪"))
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}