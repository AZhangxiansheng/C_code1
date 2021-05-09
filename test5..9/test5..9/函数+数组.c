#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//int main(void)
//{
//	printf("hh\n");
//	main();
//	return 0;
//}



//void print(int n) {
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}


//int my_strlen(char *str)
//{
//	int count = 0;
//	while (*str != '\0'){
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char *str)
//{
//	if (*str != '\0'){
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main(void)
//{
//	char *p = "abcdef";
//	int len = my_strlen(p);
//	printf("%d\n", len);
//	return 0;
//}


//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++){
//		ret *= i;
//
//	}
//	return ret;
//}
//int fac(int n)
//{
//	if (n <= 1){
//		return 1;
//	}
//	else
//		return n*fac(n - 1);
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//
//	//int i = 0;
//	//int ret = 1;
//	//for (i = 1; i <= n; i++){
//	//	ret *= i;
//
//	//}
//	printf("%d\n", ret);
//	return 0;
//}


//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n > 2){
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}



//int main(void)
//{
//	//int arr1[10];
//	////int count = 10;
//	////int arr2[count];
//	//char arr3[10];
//	//float arr4[1];
//	//double arr5[20];
//	//int arr1[10] = { 1, 2, 3 };
//	//int arr2[] = { 1, 2, 3, 4 };
//	//int arr3[5] = { 1, 2, 3, 4, 5 };
//	//	char arr4[3] = { 'a', 98, 'c' };
//	//char arr5[] = { 'a', 'b', 'c' };
//	//char arr6[] = "abcdef";
//
//	char arr1[] = "abc";
//	char arr2[3] = { 'a', 'b', 'c' };
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		arr[i] = 0;
//	}
//	
//	for (i = 0; i<10; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int *p = arr;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
		printf("%d ", *(p + i));
		printf("%d ", *(arr + i));
		printf("%d ", i[arr]);
	}
	//for (i = 0; i<sizeof(arr) / sizeof(arr[0]); ++i)
	//{
	//	//printf("&arr[%d] = %p\n", i, &arr[i]);
	//	printf("&arr[%d] = %p   <===> %p\n", i, &arr[i],p+i);
	//}
	return 0;
}