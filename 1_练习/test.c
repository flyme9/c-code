#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<stddef.h>
//计算n的阶乘
//int main()
//{
//	int n = 3;
//	int ret = 1;
//	int i = 1;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d", ret);
//	return 0;
//}
//计算n的阶乘之和
//int main()
//{
//	int n = 3;
//	int ret = 1;
//	int i = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("ret = %d\n", ret);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//二分查找
//int Bin_Search(int arr[], int left, int right,int key)
//{
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//左下标
//	int right = sz-1;//右下标
//	int ret = 0;
//	int key = 2;
//	scanf("%d", &key);
//	ret = Bin_Search(arr, left, right, key);
//	if (ret == -1)
//		printf("找不到\n");
//		
//	else
//		printf("找到了,下标是arr[%d]\n", ret);
//		
//}

//演示多个字符从两端移动，向中间汇聚
//int main()
//{
//	char arr_1[] = { "welcome to C world!!!" };
//	char arr_2[] = { "******************" };
//	int left = 0;
//	int right = strlen(arr_1) - 1;
//	while (left <= right)
//	{
//		arr_2[left] = arr_1[left];
//		arr_2[right] = arr_1[right];
//		left++;
//		right--;
//		printf("%s\n", arr_2);
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s\n", arr_2);
//	return 0;
//}

//模拟用户登录情景，并且只能登录三次
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码;>");
//		scanf("%s", password);
//		if (strncmp(password, "12345",20) == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("密码错误三次，今日无法登录\n");
//	}
//	return 0;
//}

//实现冒泡排序，并且支持所有类型
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_int(const void* p1,const void* p2 )
//{
//	//比较两个整型的的大小
//	return *(int*)p1 - *(int*)p2;
//}
//int cmp_float(const void* p1, const void* p2)
//{
//	//比较两个浮点型的的大小
//	return (int)(*(float*)p1 - *(float*)p2);
//}
//int cmp_stu_by_age(const void* p1, const void* p2)
//{
//	//结构体通过年龄比较
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//int cmp_stu_by_name(const void* p1, const void* p2)
//{
//	//结构体通过姓名比较
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//
//void Swap(char* buf_1, char* buf_2,int width)
//{//比较交换函数
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf_1;
//		*buf_1 = *buf_2;
//		*buf_2 = tmp;
//		buf_1++;
//		buf_2++;
//	}
//}
//void Bubble_Sort(void* base, int sz, int width, int(*cmp)(void* p1, void* p2))
//{	
//	int i = 0;
//	//冒泡排序趟数
//	for (i = 0; i < sz - 1; i++)
//	{	
//		int j = 0;
//		//每一趟冒泡排序
//		for (j = 0; j < sz - 1 - i; j++)
//		{	
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width) > 0)
//			{//强制转换成char* + 宽度就等于传参类型的大小
//				//交换
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr1[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz_1 = sizeof(arr1) / sizeof(arr1[0]);
//	Bubble_Sort(arr1, sz_1, sizeof(arr1[0]), cmp_int);
//	int i;
//	for (i = 0; i < sz_1; i++)
//	{	
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//
//	float arr2[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
//	int sz_2 = sizeof(arr2) / sizeof(arr2[0]);
//	Bubble_Sort(arr2, sz_2, sizeof(arr2[0]), cmp_float);
//	for (i = 0; i < sz_2; i++)
//	{
//		printf("%.2f ", arr2[i]);
//	}
//	printf("\n");
//
//	struct Stu s[3] = { {"zhangshan",20},{"lisi",30},{"wangwu",25} };
//	int sz_3 = sizeof(s) / sizeof(s[0]);
//	Bubble_Sort(s, sz_3, sizeof(s[0]), cmp_stu_by_age );
//	for (i = 0; i < sz_3; i++)
//	{
//		printf("name: %-10s	age: %-5d\n", s[i].name, s[i].age);
//	}
//	Bubble_Sort(s, sz_3, sizeof(s[0]), cmp_stu_by_name);
//	for (i = 0; i < sz_3; i++)
//	{
//		printf("name: %-10s	age: %-5d\n", s[i].name, s[i].age);
//	}
//}

//int Is_Left_Move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	//追加str1字符
//	strncat(str1, str1, len1);
//	if (len1 != len2)
//		return 0;
//	//判断str2在str1中是否为子串
//	char* ret = strstr(str1, str1);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "abcdef";
//	int ret = Is_Left_Move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

//int FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0, y = *py - 1;
//	while (x <= *px&&y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{2,3,4},{3,4,5} };
//	int k = 0;
//	int x = 3, y = 3;
//	scanf("%d", &k);
//	int ret = FindNum(arr,k,&x,&y);
//	if (ret == 1)
//	{
//		printf("找到了，下标是arr[%d][%d]\n", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//判断当前机器为哪种存储模式
//int Check_Sys()
//{
//	int i = 1;
//	return (*(char*)&i);
//}
//int main()
//{
//	int ret = Check_Sys();
//	if (ret == 1)
//		printf("机器存储模式为小端\n");
//	else
//		printf("机器存储模式为大端\n");
//	return 0;
//}

//宏模拟实现offsetof
//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
//struct Stu
//{
//	char c1;
//	int v;
//	char c2;
//};
//int main()
//{
//	printf("%d\n", OFFSETOF(struct Stu, c1));
//	printf("%d\n", OFFSETOF(struct Stu, v));
//	printf("%d\n", OFFSETOF(struct Stu, c2));
//	return 0;
//}

//int main()
//{
//	printf("Name    Age    Gender\n");
//	for (int i = 0; i<21; i++)
//	{
//		printf("-");
//	}
//	printf("\n");
//	printf("Jack    18     man\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("0%o 0X%X", 1234, 1234);
//	return 0;
//}
//int main()
//{
//	printf("%15d", 0xABCDEF);
//}

//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	while (i)
//	{
//		printf("%d ", i % 10);
//		i = i / 10;
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'A'&&ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//			getchar();
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int id = 0;
//	float c_score = 0.0, math_score = 0.0, en_score = 0.0;
//	scanf("%d:%f,%f,%f", &id,&c_score, &math_score, &en_score);
//	printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.",
//		id, c_score, math_score, en_score);
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//
//	}
//	return 0;
//}

#include<stdio.h>
//int main()
//{
//	char n = 0, i;
//	scanf("%c", &n);
//	for (i = 0; i<5; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j<5 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印数字
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c ", n);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = { 73,32,99,97,110,32,100,111,32,105,116 ,33 };
//	int i = 0;
//	for (i = 0; i<12; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int year, month, date;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%4d\n", year);
//	printf("month=0%2d\n", year);
//	printf("date=0%2d\n", year);
//	return 0;
//}