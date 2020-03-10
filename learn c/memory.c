#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a = 127;
    //因为char是八位的其范围是-128~127之间,所以如果127再向上面加的话就会造成数据溢出
    //具体而言就是在-128~127之间循环,所以+1的时候是-128,2的时候就是-127
    a=a+1;
    printf("%d\n",a);
    char b=a+1;
    printf("%d\n",b);
    char c =97;
    printf("%c\n",c);
    
    //有符号的数的溢出是也是一样的
    char d =255;
    d=d+3;
    printf("%d\n",d);
    system("pause");
    
    return 0;
}