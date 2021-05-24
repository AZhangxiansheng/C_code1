#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("i = %d\n", i);
//	return 0;
//}



//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//输出多少？
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
//}



//int main()
//{
//	int a = 10;//在内存中开辟一块空间
//	int *p = &a;//这里我们对变量a，取出它的地址，可以使用&操作符。
//	//将a的地址存放在p变量中，p就是一个之指针变量。
//
//	int num = 10; 
//	p = &num;
//
//	char *pc = NULL;
//	int *pi = NULL;
//	short *ps = NULL;
//	long *pl = NULL;
//	float *pf = NULL;
//	double *pd = NULL;
//
//	return 0;
//}



//int main()
//{
//	int n = 0x11223344;
//	char *pc = (char *)&n;
//	int *pi = &n;
//	*pc = 0;
//	*pi = 0;
//	return 0;
//}


//
//int main()//野指针
//{
//	//int *p;//局部变量指针未初始化，默认为随机值
//	//*p = 20;
//
//
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//		*(p++) = i;
//	}
//	return 0;
//}


//
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}



//int main()
//{
//	int *p = NULL;
//	//....
//	int a = 10;
//	p = &a;
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//	return 0;
//}



//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float *vp;
//	////指针+-整数；指针的关系运算
//	//for (vp = &values[0]; vp < &values[N_VALUES];)
//	//{
//	//	*vp++ = 0;
//	//}
//
//
//	//for (vp = &values[N_VALUES]; vp > &values[0];)
//	//{
//	//	*--vp = 0;
//	//}
//
//
//	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--) {//不推荐
//		*vp = 0;
//	}
//	/*标准规定：
//		允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许
//		与指向第一个元素之前的那个内存位置的指针进行比较。*/
//}




//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d", &arr[9] - &arr[0]);//指向同一块区域
//	return 0;
//}


//int my_strlen(char* s)
//{
//	char *start = s;
//	while(*s != '\0')
//		s++;
//	return (s - start);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}



//int main()
//{
//	int i;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int *p = arr; //指针存放数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i<sz; i++)
//	{
//		printf("&arr[%d] = %p   <====> p+%d = %p\n", i, &arr[i], i, p + i);
//	}
//	return 0;
//}




//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int *p = arr; //指针存放数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	int*** pppa = &ppa;
//	return 0;
//}



int main()
{
	int arr1[5];
	char arr2[6];
	int a = 0;
	int b = 1;
	int c = 2;
	int* arr3[5] = { &a, &b, &c };
	return 0;
}