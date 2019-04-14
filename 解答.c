#include <stdio.h>
#include <stdlib.h>
void callFun();
void add();
void arr3();
void fl();
//===================
int arr[5]={600, 800, 1000, 1200, 1400};
int i;
int arr2=0;
char b;
int main() 
{
printf("陣列表示&運算  代碼為:A\n判斷數值大小&運算  代碼為:B\n查看儲存類別auto與static變數之差異  代碼為:C\n浮點數的排列整理  代碼為:D\n");
printf("輸入對應代號將開始作業:");
scanf("%c",&b);
     switch (b)
     {
    case 'A':
     	arr3();
	 	break;
	case 'B':
		add();
		break;
    case 'C':
        for (i=1; i<=5; i++) 
	 	{
          callFun();
     	} 
		break;
	case 'D':
		fl();
		break;
	default:
        printf("您輸入的代碼不正確\n");	
	return 0;
}
}
void callFun()
{
     static int  si=100;
     auto int   ai=100;
     ai++;
     si++;
     printf("ai=%d, si=%d\n", ai, si);
}
void add()
{
	int a, b, c;
     printf("請輸入變數a的值: ");
     scanf("%d", &a);
     printf("請輸入變數b的值: ");
     scanf("%d", &b); 
     printf("請輸入變數c的值: ");
     scanf("%d", &c);
     printf("b加1後，再除以10的值為:%f\n", (b+1)/10.);
     printf("\na&c的大小比較\n") ;
     printf("比較結果為:%d\n", a>c?a:c);
}
void arr3()
{
	printf("\列出陣列量:\n");
     for (i=0; i<5; i++)
     {
        printf("arr[%d]=%d\n", i, arr[i]);
     }
     for (i=0; i<5; i++)
     {
     	arr2=arr[i]+arr2;
     }
    printf("arr總和:%d",arr2);   
}
void fl()
{
	float a, b, c, d, e, f;
	printf("請輸入第一個浮點數: ");
	scanf("%f", &a);
	printf("請輸入第二個浮點數: ");
	scanf("%f", &b); 
	printf("請輸入第三個浮點數: ");
	scanf("%f", &c);
	printf("請輸入第四個浮點數: ");
	scanf("%f", &d);
	printf("請輸入第五個浮點數: ");
	scanf("%f", &e);
	printf("請輸入第六個浮點數: ");
	scanf("%f", &f);

	printf("\n向右靠齊\n");
	printf("%.2f %10.2f %10.2f\n", a, b, c);
	printf("%.2f %10.2f %10.2f\n", d, e, f);

	printf("\n\n向左靠齊\n");
	printf("%-10.2f %-10.2f %-10.2f\n", a, b, c);
	printf("%-10.2f %-10.2f %-10.2f\n", d, e, f);
}
