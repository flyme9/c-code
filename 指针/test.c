#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int* p = &a;
//	printf("%p", p);
//	return 0;
//}
//int main()
//{
//	char* pc = NULL;//存放char类型变量地址
//	short* ps = NULL;//存放short类型变量地址
//	int* pi = NULL;//存放int类型变量地址
//	long* pl = NULL;//存放long类型变量地址
//	float* pf = NULL;//存放float类型变量地址
//	double* pd = NULL;//存放double类型变量地址
//}

//int main()
//{
//	int n = 0;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return 0;
//}

//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	*pc = 0;
//	printf("%d\n",*pc);
//	*pi = 0;
//	printf("%d\n", *pi);
//	return 0;
//}

//int main()
//{
//	int* p;
//	*p = 20;
//	printf("%d", *p);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 11; i++)
//	{
//		*(p++) = i;
//		printf("%d ", *p);
//	}
//	return 0;
//}

//int main()
//{
//	int* p = NULL;
//	int a = 10;
//	p = &a;
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//	printf("%d ", *p);
//	return 0;
//}

//#define N_VALUES 5
//int main()
//{
//
//	float values[N_VALUES];
//	float *vp;
//	//指针+-整数；指针的关系运算
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//		printf("%p ", vp);
//	}
//	
//}

//int my_strlen(char *s)
//{
//	char *p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}
//int main()
//{
//	char arr[] = "asdfg";
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	int* p = arr;
//	printf("%p\n", arr);//表示数组首元素地址
//	printf("%p\n", &arr[0]);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("&arr[%d] = %p <====> p+%d = %p\n", i, &arr[i], i, p + i);
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
//	int b = 0;
//	int* pb = &b;
//	int* *ppb = &pb;
//	**ppb = 20;		//等价于*pb=20, b=20
//	*pb = 20;
//	b = 20;
//	printf("%d ", **ppb);
//	return 0;
//}

//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	printf("%c\n", ch);
//	printf("%c\n", *pc);
//	*pc = 'w';
//	printf("%c\n", ch);
//	printf("%c\n", *pc);
//	return 0;
//}

//int main()
//{
//	char* pstr = "abcdef";//abcdef是一个常量字符串
//	printf("%s\n", pstr);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello world.";
//	char str2[] = "hello world.";
//	char *str3 = "hello world.";
//	char *str4 = "hello world.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	//str1和str2，两个内容存放的内存地址不一样，所以不一样
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	//str3和str4中存放的都是hello world常量字符串，系统会将它们存储到同一块空间
//	return 0;
//}

//int main()
//{
//	int* arr_1[4];//整型指针数组
//	char* arr_2[10];//一级字符指针数组
//	char**arr_3[10];//二级字符指针数组
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 0,1,2,3,4 };
//	int arr2[] = { 5,6,7,8,9 };
//	int arr3[] = { 1,3,5,7,9 };
//	int arr4[] = { 0,2,4,6,8 };
//	int* parr[] = { arr1,arr2,arr3,arr4 };
//	//创建一个指针数组用来存放arr1到arr4的地址
//	int i;
//	for (i = 0; i < sizeof(parr) / sizeof(parr[0]); i++)
//	{			//计算数组里元素个数
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int* arr[5];
//	int* (*p)[5] = &arr;
//	//(*p)->*说明是一个指针，p是指针变量名
//	//[5]->p指向数组的元素个数
//	//int*->p指向的数组元素的类型
//}

//void print_1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_2(int (*arr)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//			printf("%d ", *(arr[i]+j));
//			printf("%d ", *(*(arr + i) + j));
//			printf("%d ", (*(arr + i))[j]);
////arr[i][j] == *(arr[i]+j == *(*(arr+i)+j) == (*(arr + i))[j])
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},
//					  {2,3,4,5,6},
//					  {3,4,5,6,7} };
//	print_1(arr, 3, 5);
//	print_2(arr, 3, 5);
//	//数组名arr表示首元素地址，
//	//但二维数组的首元素是二维数组的第一行
//	//所以这里传递的arr是第一行的地址,是一维数组的地址
//	//既然是一维数组的地址，那就可以用数组指针来接收
//	return 0;
//}

//int arr[5];
////arr是一个5个元素的整型数组
//int *parr1[10];
////parr1是一个指针数组,有10个元素,每个元素的类型是int*
//int(*parr2)[10];
////parr2是一个数组指针,指向一个10个元素的的数组，每个元素是int
//int(*parr3[10])[5];
////parr3是一个数组，有10个元素，每个元素是一个数组指针，
////指向的数组有5个元素，每个元素是int

//void test(int arr[])//用数组接收
//{}
//void test(int arr[10])//10可以省略
//{}
//void test(int *arr)//用指针数组接收
//{}
//void test2(int *arr[20])//传指针数组用指针数组接收
//{}
//void test2(int **arr)//传指针数组用二级指针接收
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int *arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}


//void test(int arr[][5])//行可以省略，但是列不能省略
//{}
//void test(int arr[][])//err
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
//
//void test(int *arr)//err
//{}
//void test(int **arr)//err
//{}//二维数组传参首元素表示第一行地址
//void test(int* arr[5])//err
//{}
//
//void test(int arr[3][5])//数组接收
//{}
//void test(int(*arr)[5])//使用数组指针接收
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);//可以传一级指针
//	print(arr, sz);//传变量地址
//	return 0;
//}

//void test(char** p)
//{}
//int main()
//{
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr[10];
//	test(&pc);//可传一级指针地址
//	test(ppc);//可传二级指针
//	test(arr);//可传指针数组地址
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 2;
//	int b = 3;
//	printf("%d\n", Add(a, b));
//	printf("%p\n", Add);
//	printf("%p\n", &Add);
//	//由此可见，函数名和&函数名都是函数的地址
//	int(*pa)(int, int) = Add;
//	//(*p)->指针，指向()一个函数
//	//(int,int)->函数的类型
//	//int -> 函数的返回类型
//	printf("%d\n",(*pa)(a, b));
//
//	return 0;
//}

////代码1
//(*  (void(*)()) 0)();
////void(*)() ->函数指针类型
////0 ->是一个函数的地址
////(*  () 0 )() ->调用0地址处的该函数
////将 0 地址函数强制转换成 void(*)()类型，然后调用0地址处的该函数
//
////代码2
//void(*    signal(int, void(*)(int))     )(int);
////signal 是一个函数声明，它有两个参数，
////第一个是 int，第二个是函数指针，
////这个函数指针指向的函数参数是int，返回值是void
////signal 也是一个函数指针，指向的函数参数int，返回值是void
//
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);

//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//void menu()
//{
//	printf("********************************\n");
//	printf("*** 1.add        2.sub       ***\n");
//	printf("*** 3.mul        4.div       ***\n");
//	printf("*** 0.exit                   ***\n");
//	printf("********************************\n");
//}
//int main()
//{
//	int(*pfarr[5])(int, int) = { 0,add,sub,mul,div };
//	//parr[4]是一个数组，数组内容是 int(*)() 函数指针
//	int x, y, input = 1, ret;
//	do 
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = pfarr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//		
//	} while (input);
//	return 0;
//}

//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a*b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//void Calc(int(*pf)(int, int))
//{
//	int x, y;
//	printf("输入操作数：");
//	scanf("%d %d", &x, &y);
//	printf("ret = %d\n", pf(x,y));//通过传过来的函数地址去调用那个函数
//}
//int main()
//{
//	int input = 1;
//	do
//	{
//		printf("*************************\n");
//		printf("  1:add         2:sub \n");
//		printf("  3:mul         4:div \n");
//		printf("*************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(add);//传输一个函数的地址
//			break;
//		case 2:
//			Calc(sub);
//			break;
//		case 3:
//			Calc(mul);
//			break;
//		case 4:
//			Calc(div);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//char*(*pf)(char*, const char*);
//char*(*pfarr[4])(char*, const char*);

//int main()
//{
//	int arr[10];
//	int(*p)[10] = &arr;//数组指针
//	int(*pf)(int, int);//函数指针
//	int(*pfarr[4])(int, int);//函数指针数组
//	int(*  (*ppfarr)[4]  )(int, int) = &pfarr;//指向[函数指针数组]的指针
//	//ppfarr 是一个数组指针，指针指向的数组有4个元素
//	//指向的数组每个元素类型是一个函数指针 int(*)(int,int)
//	return 0;
//}

//void print(char* str)
//{
//	printf("%s\n", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	print("hello");
//}
//int main()
//{
//	test(print);//将print作为参数传递给test
//	return 0;
//

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;		//字符指针
//	int* arr[5];		//指针数组
//	int(*arr1)[5];		//数组指针
//	void(*pf)(int, int);//函数指针
//	void(*pfarr[5])(int, int);		//函数指针数组
//	void(*(*ppfarr)[5])(int, int);	//指向函数指针数组的指针
//	return 0;
//}

int main()
{

	return 0;
}