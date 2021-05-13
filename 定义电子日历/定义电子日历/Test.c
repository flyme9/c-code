#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct Data
{
	int Month;
	int Day;
	int Yeay;
}Data;
void DataInit(Data* d)
{
	d->Yeay = 0;
	d->Month = 0;
	d->Day = 0;
}
void DataPrint(Data d)
{
	printf("%02d/%02d/%d\n", d.Day, d.Month, d.Yeay);
}
void DataSet(Data* d)
{
	scanf("%d %d %d", &(d->Yeay), &(d->Month), &(d->Day));

}
int main()
{
	Data d;
	DataInit(&d);
	DataSet(&d);
	DataPrint(d);
	return 0;
}