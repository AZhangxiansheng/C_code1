#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
//int main(void)
//{
//	int len = strlen("abc");
//	return 0;
//}

//int main(void)
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 0 };
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main(void)
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = "************";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main(void)
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '-', 6);
//	puts(str);
//	return 0;
//}


//int get_max(int x, int y)
//{
//	return(x > y ? x : y);
//}
//
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//void test(void)
//{
//	printf("hh");
//}
//int main(void)
//{
//	test();
//	return 0;
//}

//void Swap1(int x, int y) {
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int *px, int *py) {
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	Swap1(num1, num2);
//	printf("Swap1::num1 = %d num2 = %d\n", num1, num2);
//	Swap2(&num1, &num2);
//	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
//	return 0;
//}

////?ж?????
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n ; i++){
//		if (n%i == 0){
//			return 0;
//		}
//		
//	}
//	return 1;
//}
//int main(void)
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++){
//		if (is_prime(i) == 1){
//			printf("%4d", i);
//		}
//
//	}
//	return 0;
//}


//int is_leapyear(int n)
//{
//	if ((n % 4 == 0) && (n % 100 != 0)){
//		return 1;
//	}
//	if (n % 400 == 0){
//		return 1;
//	}
//	return 0;
//}
//int main(void)
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++){
//		if (is_leapyear(year) == 1){
//			printf("%5d", year);
//		}
//
//	}
//	return 0;
//}


//int ???ֲ???(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (arr[mid] < k){
//			left = mid + 1;
//		}
//		else if (arr[mid]>k){
//			right = mid - 1;
//		}
//		else{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main(void)
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = ???ֲ???(arr, k,sz);
//	if (ret == -1){
//		printf("?Ҳ???\n");
//	}
//	else{
//		printf("?ҵ??ˣ??±??ǣ?%d\n", ret);
//	}
//	return 0;
//
//}


//void Add(int *n)
//{
//	(*n)++;
//}
//int main(void)
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i<3; i++)
//	{
//		new_line();
//	}
//}
//int main(void)
//{
//	three_line();
//	return 0;
//}


//int main()
//{
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr, "bit"));
//	printf("%d\n", ret);
//	return 0;
//}



int main(void)
{
	int a = 10;
	int b = 20;
	printf("%d\n", Add(a, b));
	return 0;
}