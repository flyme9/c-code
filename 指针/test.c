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
//	char* pc = NULL;//���char���ͱ�����ַ
//	short* ps = NULL;//���short���ͱ�����ַ
//	int* pi = NULL;//���int���ͱ�����ַ
//	long* pl = NULL;//���long���ͱ�����ַ
//	float* pf = NULL;//���float���ͱ�����ַ
//	double* pd = NULL;//���double���ͱ�����ַ
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
//	//ָ��+-������ָ��Ĺ�ϵ����
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
//	printf("%p\n", arr);//��ʾ������Ԫ�ص�ַ
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
//	int *p = arr; //ָ����������Ԫ�صĵ�ַ
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
//	**ppb = 20;		//�ȼ���*pb=20, b=20
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
//	char* pstr = "abcdef";//abcdef��һ�������ַ���
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
//	//str1��str2���������ݴ�ŵ��ڴ��ַ��һ�������Բ�һ��
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	//str3��str4�д�ŵĶ���hello world�����ַ�����ϵͳ�Ὣ���Ǵ洢��ͬһ��ռ�
//	return 0;
//}

//int main()
//{
//	int* arr_1[4];//����ָ������
//	char* arr_2[10];//һ���ַ�ָ������
//	char**arr_3[10];//�����ַ�ָ������
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 0,1,2,3,4 };
//	int arr2[] = { 5,6,7,8,9 };
//	int arr3[] = { 1,3,5,7,9 };
//	int arr4[] = { 0,2,4,6,8 };
//	int* parr[] = { arr1,arr2,arr3,arr4 };
//	//����һ��ָ�������������arr1��arr4�ĵ�ַ
//	int i;
//	for (i = 0; i < sizeof(parr) / sizeof(parr[0]); i++)
//	{			//����������Ԫ�ظ���
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
//	//(*p)->*˵����һ��ָ�룬p��ָ�������
//	//[5]->pָ�������Ԫ�ظ���
//	//int*->pָ�������Ԫ�ص�����
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
//	//������arr��ʾ��Ԫ�ص�ַ��
//	//����ά�������Ԫ���Ƕ�ά����ĵ�һ��
//	//�������ﴫ�ݵ�arr�ǵ�һ�еĵ�ַ,��һά����ĵ�ַ
//	//��Ȼ��һά����ĵ�ַ���ǾͿ���������ָ��������
//	return 0;
//}

//int arr[5];
////arr��һ��5��Ԫ�ص���������
//int *parr1[10];
////parr1��һ��ָ������,��10��Ԫ��,ÿ��Ԫ�ص�������int*
//int(*parr2)[10];
////parr2��һ������ָ��,ָ��һ��10��Ԫ�صĵ����飬ÿ��Ԫ����int
//int(*parr3[10])[5];
////parr3��һ�����飬��10��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬
////ָ���������5��Ԫ�أ�ÿ��Ԫ����int

//void test(int arr[])//���������
//{}
//void test(int arr[10])//10����ʡ��
//{}
//void test(int *arr)//��ָ���������
//{}
//void test2(int *arr[20])//��ָ��������ָ���������
//{}
//void test2(int **arr)//��ָ�������ö���ָ�����
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int *arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}


//void test(int arr[][5])//�п���ʡ�ԣ������в���ʡ��
//{}
//void test(int arr[][])//err
//{}
////�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
////��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
////�����ŷ������㡣
//
//void test(int *arr)//err
//{}
//void test(int **arr)//err
//{}//��ά���鴫����Ԫ�ر�ʾ��һ�е�ַ
//void test(int* arr[5])//err
//{}
//
//void test(int arr[3][5])//�������
//{}
//void test(int(*arr)[5])//ʹ������ָ�����
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
//	print(p, sz);//���Դ�һ��ָ��
//	print(arr, sz);//��������ַ
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
//	test(&pc);//�ɴ�һ��ָ���ַ
//	test(ppc);//�ɴ�����ָ��
//	test(arr);//�ɴ�ָ�������ַ
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
//	//�ɴ˿ɼ�����������&���������Ǻ����ĵ�ַ
//	int(*pa)(int, int) = Add;
//	//(*p)->ָ�룬ָ��()һ������
//	//(int,int)->����������
//	//int -> �����ķ�������
//	printf("%d\n",(*pa)(a, b));
//
//	return 0;
//}

////����1
//(*  (void(*)()) 0)();
////void(*)() ->����ָ������
////0 ->��һ�������ĵ�ַ
////(*  () 0 )() ->����0��ַ���ĸú���
////�� 0 ��ַ����ǿ��ת���� void(*)()���ͣ�Ȼ�����0��ַ���ĸú���
//
////����2
//void(*    signal(int, void(*)(int))     )(int);
////signal ��һ��������������������������
////��һ���� int���ڶ����Ǻ���ָ�룬
////�������ָ��ָ��ĺ���������int������ֵ��void
////signal Ҳ��һ������ָ�룬ָ��ĺ�������int������ֵ��void
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
//	//parr[4]��һ�����飬���������� int(*)() ����ָ��
//	int x, y, input = 1, ret;
//	do 
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = pfarr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else
//		{
//			printf("�������\n");
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
//	printf("�����������");
//	scanf("%d %d", &x, &y);
//	printf("ret = %d\n", pf(x,y));//ͨ���������ĺ�����ַȥ�����Ǹ�����
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
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(add);//����һ�������ĵ�ַ
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
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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
//	int(*p)[10] = &arr;//����ָ��
//	int(*pf)(int, int);//����ָ��
//	int(*pfarr[4])(int, int);//����ָ������
//	int(*  (*ppfarr)[4]  )(int, int) = &pfarr;//ָ��[����ָ������]��ָ��
//	//ppfarr ��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ�������ÿ��Ԫ��������һ������ָ�� int(*)(int,int)
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
//	test(print);//��print��Ϊ�������ݸ�test
//	return 0;
//

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;		//�ַ�ָ��
//	int* arr[5];		//ָ������
//	int(*arr1)[5];		//����ָ��
//	void(*pf)(int, int);//����ָ��
//	void(*pfarr[5])(int, int);		//����ָ������
//	void(*(*ppfarr)[5])(int, int);	//ָ����ָ�������ָ��
//	return 0;
//}

int main()
{

	return 0;
}