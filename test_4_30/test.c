#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i<n; i++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//		for (int j = 1; j<n - 1; j++)
//		{
//			printf("* ");
//			for (int i = 1; i<n - 1; i++)
//			{
//				printf("  ");
//			}
//			printf("* ");
//			printf("\n");
//		}
//		for (int i = 0; i<n; i++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i, n, m;
//	while (~scanf("%d%*c", &i))
//	{
//		for (n = 1; n <= i; n++)
//		{
//			printf("* ");
//			for (m = 2; m <= i; m++)
//			{
//				if (m == n || n == i)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (0 <= n&&n >= 3)
//		printf("Good\n");
//	else if (4 <= n&&n >= 9)
//		printf("Danger\n");
//	else
//		printf("Danger++\n");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int arr[50], i = 0, count=0;
//	int x = 0;
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &x);
//	for (i = 0; i<n; i++)
//	{
//		if (x>arr[i])
//		{
//			count++;
//		}
//	}
//	for (i = n; i>count; i--)
//	{
//		arr[i] = arr[i - 1];
//	}
//	arr[count] = x;
//	for (int i = 0; i <= n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, i, j, count=0;
//	scanf("%d", &n);
//	for (i = 2; i <= n; i++)
//	{
//		for (j = 2; j <= i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("%d ", n - count - 1);
//	return 0;
//}

//int main()
//{
//	int m = 0, n = 0;
//	int arr1[100][100] = { 0 }, arr2[100][100] = { 0 };
//	scanf("%d %d", &m, &n);
//	for (int i = 0; i<m; i++)
//	{
//		for (int j = 0; j<m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//
//	for (int i = 0; i<n; i++)
//	{
//		for (int j = 0; j<n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	int x = m*n;
//	float z = 0, sum = 0;
//	for (int i = 0; i<m; i++)
//	{
//		for (int j = 0; j<n; j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//			{
//				z++;
//			}
//		}
//	}
//	sum = (z / x)*100.0;
//	printf("%.2f", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a[50], b[50];
//	char n[] = "admin", s[] = "admin";
//	while (scanf("%s %s", a, b) != EOF)
//	{
//		if (strcmp(a, n) == 0 && strcmp(b, s) == 0)
//		{
//			printf("Login Success!\n");
//		}
//		else {
//			printf("Login Fail!");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int m = 0, n = 0, sum = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i<n; i++)
//	{
//		for (int j = 0; j<m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i<n; i++)
//	{
//		for (int j = 0; j<m; j++)
//		{
//			if (arr[i][j]>0)
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int pos = 0, neg = 0;
//	for (int i = 0; i<10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i<10; i++)
//	{
//		if (arr[i] >= 0)
//			pos++;
//		else
//			neg++;
//	}
//	printf("positive:%d\nnegative:%d", pos, neg);
//	return 0;
//}

//typedef struct  score
//{
//	double a_score;
//	double b_score;
//	double c_score;
//	double d_score;
//	double e_score;
//}score;
//int main()
//{
//	score s[5] = { 0 };
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%lf %lf %lf %lf %lf", &(s[i].a_score), &(s[i].b_score), &s[i].c_score, &s[i].d_score, &s[i].e_score);
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		double sum = 0;
//		sum = s[i].a_score + s[i].b_score + s[i].c_score + s[i].d_score + s[i].e_score;
//		printf("%.2lf %.2lf %.2f %.2lf %.2lf %.2lf\n", s[i].a_score, s[i].b_score, s[i].c_score, s[i].d_score, s[i].e_score, sum);
//	}
//	return 0;
//}

//int main()
//{
//	int m = 0, n = 0, x = 0;
//	scanf("%d %d", &m, &n);
//	int arr1[m][n];
//	int arr2[m][n];
//	for (int i = 0; i<m; i++)
//	{
//		for (int j = 0; j<n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (int i = 0; i<m; i++)
//	{
//		for (int j = 0; j<n; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (int i = 0; i<m; i++)
//	{
//		for (int j = 0; j<n; j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//			{
//				x = 1;
//			}
//			else
//			{
//				x = 0;
//			}
//		}
//	}
//	if (x == 1)
//		printf("Yes\n");
//	if (x == 0)
//		printf("No\n");
//	return 0;
//}

//int main()
//{
//	int n = 0, count = 0, m = 0;
//	scanf("%d", &n);
//	int arr[4][4];
//	for (int i = 0; i<n; i++)
//	{
//		for (int j = 0; j<n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i<n; i++)
//	{
//		for (int j = 0; j<n; j++)
//		{
//			if (arr[i][j] == 0)
//			{
//				count++;
//			}
//		}
//	}
//	for (int i = 1; i<n; i++)
//	{
//		m += i;
//	}
//	if (count == m)
//		printf("YES\n");
//	else
//		printf("NO\n");
//}

//int main()
//{
//	int m = 0, n = 0;
//	scanf("%d %d", &m, &n);
//	int arr[10][10] = { 0 };
//	for (int i = 0; i<m; i++)
//	{
//		for (int j = 0; j<n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int k = 0, a = 0, b = 0;
//	char t = 0;
//	scanf("%d", &k);
//	while (k)
//	{
//		scanf(" %c %d %d", &t, &a, &b);
//		if (t == 'r')//行交换
//		{
//			for (int i = 0; i<m; i++)
//			{
//				int tmp = arr[a - 1][i];
//				arr[a - 1][i] = arr[b - 1][i];
//				arr[b - 1][i] = tmp;
//			}
//		}
//		else if (t == 'c')//列交换
//		{
//			for (int i = 0; i<m; i++)
//			{
//				int tmp = arr[i][a - 1];
//				arr[i][a - 1] = arr[i][b - 1];
//				arr[i][b - 1] = tmp;
//			}
//		}
//		k--;
//	}
//	for (int i = 0; i<n; i++)
//	{
//		for (int j = 0; j<m; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[30][30] = { 0 };
//	for (int i = 0; i<n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if (j == 0 || j == i)
//			{
//				arr[i][j] = 1;
//				printf("%5d", 1);
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//				printf("%5d", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#define MAX 3
//int main()
//{
//	char chess[MAX][MAX];
//	int i, j;
//	for (i = 0; i<3; i++)
//	{
//		for (j = 0; j<3; j++)
//		{
//			chess[i][j] = getchar();
//			getchar(); //处理空格
//		}
//	}
//	char tag = 'O';
//	for (i = 0; i<3; i++)
//	{
//		if (chess[i][0] == chess[i][1] && chess[i][1] == chess[i][2])//横
//		{
//			tag = chess[i][1];
//			break;
//		}
//		if (chess[0][i] == chess[1][i] && chess[1][i] == chess[2][i])//竖
//		{
//			tag = chess[1][i];
//			break;
//		}
//	}
//	//斜线
//	if (chess[0][0] == chess[1][1] && chess[1][1] == chess[2][2])
//		tag = chess[1][1];
//	if (chess[0][2] == chess[1][1] && chess[1][1] == chess[2][0])
//		tag = chess[1][1];
//
//	if (tag == 'K')
//		printf("KiKi wins!\n");
//	else if (tag == 'B')
//		printf("BoBo wins!\n");
//	else
//		printf("No winner!\n");
//	return 0;
//}

//int main()
//{
//	char str[8000];
//	scanf("%s", str);//CCHNCHN
//	char* ps = str;
//	long long c = 0, ch = 0, chn = 0;
//	while (*ps)
//	{
//		if (*ps == 'C')
//		{
//			c++;
//		}
//		else if (*ps == 'H')
//		{
//			ch += c;
//		}
//		else if (*ps == 'N')
//		{
//			chn += ch;
//		}
//		ps++;
//	}
//	printf("%lld\n", chn);
//	return 0;
//}

//#include<stdio.h>
//typedef struct s
//{
//	int a;
//	int b;
//	int c;
//}s;
//int main()
//{
//	int n = 0, count = 0;
//	scanf("%d", &n);
//	s s1[n];
//	for (int i = 0; i<n; i++)
//	{
//		scanf("%d %d %d", &(s1[i].a), &(s1[i].b), &(s1[i].c));
//	}
//	for (int i = 0; i<n; i++)
//	{
//		int sum = s1[i].a + s1[i].b + s1[i].c;
//		if ((sum / 3)<60)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//float Max(float a, float b, float c)
//{
//	return((a>b ? a : b)>c ? (a>b ? a : b) : c);
//}
//int main()
//{
//	float a, b, c;
//	float m;
//	scanf("%f %f %f", &a, &b, &c);
//	float ret = Max(a, b, c);
//	m = (ret*(a + b, b, c) / (ret*(a, b + c, c) + ret*(a, b, b + c)));
//	printf("%.2f", m);
//	return 0;
//}

//int main()
//{
//	int n = 0, z = 0;
//	scanf("%d", &n);
//	int arr[100];
//	for (int i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int k = 0;
//	scanf("%d", &k);
//	for (int i = 0; i<n; i++)
//	{
//		if (arr[i] == k)
//			z++;
//	}
//	printf("%d", z);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//struct Node {
//	int data;
//	struct Node* next;
//};
//int main() {
//	int data, n, i;
//	struct Node *list = NULL;//指向第一个结点
//	struct Node *tail = NULL;//指向最后的结点
//	scanf("%d", &n);
//	for (i = 0; i<n; i++) {
//		scanf("%d", &data);
//
//		struct Node *pn = (struct Node *)malloc(sizeof(struct Node));
//		pn->data = data;
//		pn->next = NULL;//创建一个空链表
//						//尾部插入
//		if (list == NULL) {
//			list = pn;
//			tail = pn;
//		}
//		else {
//			tail->next = pn;
//			tail = pn;
//		}
//	}
//	//删除指定数字
//
//	int del = 0;
//	int a = 0;
//	scanf("%d", &del);
//	struct Node *cur = list;
//	struct Node *pevl = NULL;
//	while (cur) {
//		if (cur->data == del) {
//			//删除
//			if (cur == list) {            //第一个结点
//				list = cur->next;
//				cur = list;
//			}
//			else {             //非第一个结点
//				pevl->next = cur->next;
//				cur = pevl->next;
//			}
//			n--;
//		}
//		else {
//			pevl = cur;
//			cur = cur->next;
//		}
//	}
//	printf("%d\n", n);
//	//打印链表
//	cur = list;
//	while (cur) {
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//	cur = list;
//	while (cur) {
//		struct Node *pd = cur;
//		cur = cur->next;
//		free(pd);
//
//	}
//	return 0;
//}

#define maxn  10010
int a[maxn], b[maxn];
int m, total, s, t, aptotal, apm, aps, apt, k, n;
int ck()
{
	int p, r;
	if (total > 5)
		return 1;
	p = s;
	r = t;
	for (int q = 0; q<m; q++)
	{
		p = p * 10 + s;
	}

	for (int q = 0; q < total - m; q++)
		p = p * 10;
	for (int q = 1; q < total - m; q++)
		r = r * 10 + t;
	return p + r>n;
}
int main()
{
	while (scanf("%d", &n), n)
	{
		printf("%d: ", n);
		a[0] = 1;
		b[0] = 1;
		for (int i = 1; i<9999; i++)
			a[i] = (a[i - 1] * 10 + 1) % n;
		for (int i = 1; i < 999; i++)
			b[i] = b[i - 1] * 10 % n;
		for (total = 1, aps = 0; total < 9999; total++) {
			k = 0;
			if ((n % 10 == 0 || n % 25 == 0) && total> 11)
				k = total - 11;
			for (m = k; m < total; m++)
				for (s = 1; s < 10; s++)
					for (t = 0; t < (n % 10 ? 10 : 1); t++)
						if (t != s && (((long long)a[m]) * b[total - m] * s + a[total - m - 1] * t) % n == 0 && ck() &&
							(!aps || s<aps))
						{
							aptotal = total;
							apm = m;
							aps = s;
							apt = t;
						}
			if (aps)
				break;
		}
		for (int x = 0; x < apm + 1; x++)
			printf("%d", aps);
		for (int x = 0; x < aptotal - apm; x++)
			printf("%d", apt);
		printf("\n");
	}
	return 0;
}