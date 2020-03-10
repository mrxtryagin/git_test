#include <stdio.h>
#include<stdlib.h>
/*
scanf和getchar的区别：

一、函数格式不同

scanf函数是格式输入函数，即按用户指定的格式从键盘上把数据输入到指定的变量中。

getchar函数是键盘输入函数，其功能是从键盘上输入一个字符。

二、读取方式不同

scanf函数在读取数字时会跳过空格、制表符和换行符。

getchar函数只能输入字符型,输入时遇到回车键才从缓冲区依次提取字符。

三、结束输入的方式不同
scanf函数以空格、Enter、Tab结束一次输入，不接受空格符。

getchar函数以Enter结束输入（空格不结束），接受空格符。
四、舍弃回车符的方法不同

读取字符时：
scanf()以Space、Enter、Tab结束一次输入，不会舍弃最后的回车符（即回车符会残留在缓冲区中）；
getchar()以Enter结束输入，也不会舍弃最后的回车符；
读取字符串时：
scanf()以Space、Enter、Tab结束一次输入
gets()以Enter结束输入（空格不结束），接受空格，会舍弃最后的回车符！


*/
int main()
{
	char ch1;
	char ch2;
	char ch3;
	int  a;
	int  b;

	printf("请输入ch1的字符：");
	ch1 = getchar();
	printf("ch1 = %c\n", ch1);
    
    //getchar（）是让你是输入一个字符，而我们程序中时常回使用scanf（）函数，在输入结束时我们回按回车键（\n）,而此时getchar（）就恰好录入了这个字符，导致程序没有停下来
    //而这里的话如果不加一个getchar()那么缓冲池里面就有一个\n没有被处理,就会被下面的getchar()接受,程序就出问题了
	getchar(); //等待你输入一个字符
   
    printf("请输入ch2的字符：");
	ch2 = getchar();
	printf("\'ch2 = %ctest\'\n", ch2);

	getchar(); //测试此处getchar()的作用
	printf("请输入ch3的字符：");
	scanf("%c", &ch3);//这里第二个参数一定是变量的地址，而不是变量名
	printf("ch3 = %c\n", ch3);

	printf("请输入a的值：");
	scanf("%d", &a);
	printf("a = %d\n", a);

	printf("请输入b的值：");
	scanf("%d", &b);
	printf("b = %d\n", b);
	system("pause");
	return 0;
}
