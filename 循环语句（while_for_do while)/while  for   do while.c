#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i%2>0)
		{
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int i = 0;
	while (i <= 10)
	{
		i++;
		if (i > 5)
			break;//��ʵ��ѭ����ֻҪ����break����ֹͣ���ڵ����е�ѭ����ֱ����ֹѭ���� ���ԣ�while�е�break������������ֹѭ���ġ�
		printf("%d ", i);
		
	}
	return 0;
}

int main()
{
	int i = 0;
	while (i <= 10)
	{
		i = i + 1;
		if (i == 5)
			continue;//continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ�У�����ֱ����ת��while�����жϲ��֡�������һ��ѭ��������жϡ�
		printf("%d ", i);
	}
	return 0;
}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//eof==-1
		putchar(ch);
	return 0;
}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')//ֻ���0-9������
			continue;
		putchar(ch);
	}
	return 0;
}

int main()
{
	int i = 0;
	while (i<=10)
	{
		printf("%d\n", i);
		i++;
	}

	for (i = 0; i <= 10; i++)
	{
		printf("%d\n", i);
	}

int main() 
{
	/*int i = 0;
	for (i = 0; i <= 10; i++)
	{
		if (i == 9)
			break;
		printf("%d\n", i);
	}
}

	for (i = 0; i <= 10; i++)
	{
		if (i == 9)
			continue;
		printf("%d\n", i);
	}
	return 0;*/
}

int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)//�жϲ���k=0Ϊ�٣��޷�����ѭ��
		k++;
	return 0;
}

int main()
{
	int arr[100];
	int i = 0;
	while (i<100)
	{
		printf("arr[%d] = %d\n",i,i);
		i++;
	}
	return 0;
}

int main()
{//��ʾ����ַ��������ƶ������м���
	char arr1[] = "welcome to bit!!!!!!";
	char arr2[] = "_____________________";
	int left = 0;
	int right = strlen(arr1) - 1;
	printf("%s", arr2);
	while (left<=right)
	{
		Sleep(1000);//1��
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
		system("CLS");//�����Ļ
		printf("%s\n", arr2);
	}

	for (left  = 0,	right < strlen(arr1)-1;left<=right;left++,right--)
	{
		Sleep(1000);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		system("CLS");
		printf("%s\n", arr2);
	}
	return 0;
}

int main()
{
	char psw[10] = "";
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; ++i)
	{
		printf("please input:");
		scanf("%s", psw);
		if (strcmp(psw, "password") == 0)
			break;
	}
	if (i == 3)
		printf("exit\n");
	else
		printf("log in\n");
}

int main()
{
	int i = 0;
	int n = 0;
	int reg = 1;
	int sum = 0;
	scanf("%d", &i);
	for (n = 1; n <= i; n++)
	{
		reg = reg*n;
		printf("%d\n", reg);
		system("CLS");
		printf("���Ľ��Ϊ:> %d\n", reg);
		sum = sum + reg;
		printf("������ӵĽ��Ϊ:> %d\n", sum);

	}
	return 0;
}

int main()
{
	while (1)
	{
		int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
		int x = 0;
		int left = 0;
		int right = sizeof(arr) / sizeof(arr[0]) - 1;
		int mid = 0;
		printf("������ҵ�����:>");
		scanf("%d", &x);
		while (left <= right)
		{
			mid = (left + right) / 2;
			if (arr[mid] > x)
			{
				right = mid - 1;
			}
			else if (arr[mid] < x)
			{
				left = mid + 1;
			}
			else
				break;
		}
		if (left <= right)
		{
			printf("�ҵ��ˣ��±���%d\n", mid);
		}
		else
		{
			printf("δ�ҵ�������������\a\n");
		}
	}
}

int main()
{
	char password[20];
	int i = 0;
	for ( i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", password);
		if (strcmp(password,"psd") == 0)
		{
			break;
		}
		else
		{
			printf("�������\a\n");
		}
	}
	if (i == 3)
	{
		printf("����������Σ����˳�����\n");
	}
	else 
	{
		printf("��¼�ɹ�\n");
	}
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	a�����ֵ��b���м�ֵ��c����Сֵ
	if (a < b)
	{
		int tmp = a;//����a��ֵ
		a = b;//bֵ����a
		b = tmp;//tmpֵ����b	
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		b = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}

int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

int main()
{
	int m = 0;
	int n = 0;
	int r = 0;
	scanf("%d%d", &m, &n);
	while (r = m%n)
	{
		m = n;
		n = r;
	}
	printf("%d\n", n);
	return 0;
}

int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100!=0)
		{
			printf("%d ", year);
			count++;
		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j==0)
			{
				break;
			}
		}
		if (j >sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("count = %d\n", count);
	return 0;
}

int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 50; i++)
	{
		sum = flag* 1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}

int main()
{
	int arr[] = {2,5,6,2,6,9,0,2,3,45,7,8,0};
	int max = arr[0];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max = %d", max);
	return 0;
}

int main()
{
	int a = 0;
	for (a = 1; a <= 9; a++)
	{
		int b = 1;
		for (b = 1; b <= a; b++)
		{
			printf("%d*%d=%-2d ", a, b, a*b);
		}
		printf("\n");
	}
	return 0;
}

