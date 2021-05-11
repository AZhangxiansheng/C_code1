#define _CRT_SECURE_NO_WARNINGS

//int main(void)
//{
//	//int arr[3][4];
//	//char arr2[3][5];
//	//double arr3[2][4];
//	//int arr[3][4] = { 1, 2, 3, 4, 5, 6 };
//	//int arr[3][4] = { { 1, 2, 3 }, { 4 }, 5, 6 };
//	int arr[][4] = { { 1, 2, 3 }, { 4 }, 5, 6 };
//	return 0;
//}



//int main(void)
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i<3; i++)
//	{
//		for (j = 0; j<4; j++)
//		{
//			arr[i][j] = i * 4 + j;
//		}
//		
//	}
//	for (i = 0; i<3; i++)
//	{
//		for (j = 0; j<4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main(void)
//{
//	int arr[3][4];
//	int i = 0;
//	for (i = 0; i<3; i++)
//	{
//		int j = 0;
//		for (j = 0; j<4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}



//int main(void)
//{
//	int arr[][4] = { { 1, 2 }, { 3, 4 }, { 5 } };
//	int i = 0, j = 0;
//	int *p = &arr[0][0];
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d  ", *(p + i));
//	}
//	return 0;
//}


//void bubble_sort(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz-1; i++){
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++){
//			if (arr[j]>arr[j + 1]){
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main(void)
//{
//	int arr[] = { 9, 8, 7, 4, 5, 6, 3, 2, 1,0 };
//	bubble_sort(arr);
//	return 0;
//}

////void bubble_sort(int *arr)
//void bubble_sort(int arr[],int sz)
//{
//	
//	int i = 0;
//	for (i = 0; i < sz - 1; i++){
//		int j = 0;
//		for (j = 0; j <sz - 1 - i; j++){
//			if (arr[j]>arr[j + 1]){
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz ; i++){
//
//		printf("%d  ", arr[i]);
//	}
//}
//int main(void)
// {
//	int arr[] = { 9, 8, 7, 4, 5, 6, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	return 0;
//}




//void bubble_sort(int arr[], int sz)
//{
//
//	int i = 0;
//	for (i = 0; i < sz - 1; i++){
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j <sz - 1 - i; j++){
//			if (arr[j]>arr[j + 1]){
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//			
//		}
//		if (flag == 1)
//			break;
//	}
//	for (i = 0; i < sz; i++){
//
//		printf("%d  ", arr[i]);
//	}
//}
//int main(void)
//{
//	int arr[] = { 9, 8, 7, 4, 5, 6, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	return 0;
//}






//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5 };
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//	//printf("%d\n", *arr);
//	//printf("%d\n", sizeof(arr));
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//
//	//数组名是数组首元素的地址。（有两个例外）
//	//	1. sizeof(数组名)，计算整个数组的大小，sizeof内部单独放一个数组名，数组名表示整个数
//	//	组。
//	//	2. &数组名，取出的是整个数组的地址。&数组名，数组名表示整个数组。
//	return 0;
//}



