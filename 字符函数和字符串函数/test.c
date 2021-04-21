#define _CRT_SECURE_NO_WARNINGS 1
#include<assert.h>
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<ctype.h>
//模拟实现strlen
////1.计数器方法
//int My_Strlen_1(const char* str)
//{
//	int count = 0;//用来计数
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////2.不创建临时变量计数器（递归）
//int My_Strlen_2(const char* str)
//{
//	assert(str != NULL);
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + My_Strlen_2(str + 1);
//	}
//}
////3.指针-指针方法
//int My_Strlen_3(char* str)
//{
//	char* p = str;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - str;
//}
//int main()
//{
//	char arr[] = "abcd";
//	int ret = My_Strlen_1(arr);
//	printf("%d\n", ret);
//	ret = My_Strlen_2(arr);
//	printf("%d\n", ret);
//	ret = My_Strlen_3(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//模拟实现strcpy
//char* My_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++);
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "*******";
//	char arr2[] = "hello";
//	printf("%s", My_strcpy(arr1, arr2));
//	return 0;
//}

//模拟实现strcat
//char* My_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src);
//	//1.找到字符串'\0'
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.追加
//	while (*dest++ = *src++);
//	return ret;
//
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	printf("%s\n", My_strcat(arr1, arr1));
//	return 0;
//}

//模拟实现strcmp
//int My_Strcmp_1(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;//相等
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;//大于
//	else
//		return -1;//小于
//}
//int My_Strcmp_2(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;//相等
//		str1++;
//		str2++;
//	}
//	return(*str1 - *str2);
//}
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "bcdef";
//	int ret = My_Strcmp_2(arr1, arr2);
//	if (ret > 0)
//		printf("arr1 > arr2");
//	else if (ret < 0)
//		printf("arr1 < arr2");
//	else
//		printf("arr1 == arr2");
//	return 0;
//}

//模拟实现strncpy
//char* My_strncpy(char* dest, const char* src, int num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (num && (*dest++ = *src++) != '\0')
//	{
//		num--;
//	}
//	if (num)
//	{
//		while (num--)
//		{
//			*dest = '\0';
//			dest++;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "abcde*****";
//	char arr2[] = "fgh";
//	printf("%s\n",My_strncpy(arr1, arr2,3));
//	//printf("%s\n", strncpy(arr1, arr2, 1));
//	return 0;
//}

//模拟实现
//char* My_strncat(char* dest, const char* src, int num)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src);
//	//1.找到字符串'\0'
//	while (*dest!='\0')
//	{
//		dest++;
//	}
//	//2.追加
//	while (num && (*dest++ = *src++) != '\0')
//	{
//		num--;
//	}
//	if (num)
//		*dest = '\0';
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	printf("%s", My_strncat(arr1, arr1, 7));
//	return 0;
//}

//模拟实现strncmp
//int My_strncmp(char* first, char* last, unsigned int num)
//{
//	assert(first && last);
//	while (num--&&(*first == *last))
//	{
//		if (*first == '\0')
//			return 0;//相等
//		first++;
//		last++;
//	}
//	return(*first - *last);
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	int ret = My_strncmp(arr1, arr2,6);
//	if (ret > 0)
//		printf("arr1 > arr2\n");
//	else if (ret < 0)
//		printf("arr1 < arr2\n");
//	else
//		printf("arr1 = arr2\n");
//	return 0;
//}

//模拟实现strstr
//char* My_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = (char*)p1;
//	char* s2 = (char*)p2;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//		return (char*)p1;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		if (*s1 == '\0')
//			return NULL;
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char *p1 = "abcef";
//	char *p2 = "cef";
//	char *ret = My_strstr(p1, p2);
//	if (ret == NULL)
//		printf("不是子字符串");
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr[] = "123@123.@123";
//	char* ret = NULL;
//	for (ret = strtok(arr, "@."); ret != NULL; ret = strtok(NULL, "@."))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	return 0;
//}

//int main()
//{
//	char ch[] = "\f0aA.@#";
//	printf("%d\n", iscntrl(ch[0]));
//	printf("%d\n", isspace(ch[0]));
//	printf("%d\n", isdigit(ch[1]));
//	printf("%d\n", islower(ch[2]));
//	printf("%d\n", isupper(ch[3]));
//	printf("%d\n", isalpha(ch[3]));
//	printf("%d\n", isalnum(ch[1]));
//	printf("%d\n", ispunct(ch[5]));
//	printf("%d\n", isgraph(ch[6]));
//	printf("%d\n", isprint(ch[2]));
//	return 0;
//}

//int main()
//{
//	char ch = tolower('q');
//	putchar(ch);
//	ch = toupper('q');
//	putchar(ch);
//	char arr[] = "I Im A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//模拟实现memcpy
//void* My_Memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//typedef struct Stu
//{
//	char name[20];
//	int age;
//}Stu;
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[10] = { 0 };
//	My_Memcpy(arr2, arr1,sizeof(arr1));
//	Stu s[] = { {"zhangshan",20},{"lisi",30} };
//	Stu s1[3] = { 0 };
//	My_Memcpy(s1, s, sizeof(s));
//	return 0;
//}

//模拟实现memmove
//void* My_Memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	else
//	{
//		while (num--)
//		{	//num--后加上dest，拿到需要拷贝的最后一个字节的地址
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
////从前往后拷贝，dest<src
////从后往前拷贝，dest>src&&dest<src+num
////两种情况都可以，dest>src+num
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	My_Memmove(arr1+2, arr1, sizeof(arr1)-8);
//	return 0;
//}

int main()
{
	int arr1[] = { 1,2,3,4,5,6 };
	int arr2[] = { 1,2,3,4,5,6,7 };
	printf("%d\n", memcmp(arr1, arr2, sizeof(arr2)));
	return 0;
}