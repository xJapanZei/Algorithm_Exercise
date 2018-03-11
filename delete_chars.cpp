#include <iostream>

char *Delete(char str1[],char str2[], char str3[])//删除字符串中指定的字符
{
    int i = 0;
    char *p1 = str1;
    char *p2;
    while (*p1 != '\0')
    {
        p2 = str2;
        while (*p2!=*p1 && *p2!='\0')
        {
            p2 ++;
        }
        if (*p2 == '\0')
        {
            str3[i] = *p1;//只有经过这里，i才增加，同时这里也是除了末尾外唯一赋值给str1的地方
            i++;
        }
        p1++;
    }
    str3[i] = '\0';
    return str3;
}
int main(int argc, const char * argv[])
{
    char str1[8] = {'a','b','c','d','e','a','s'};
    char str2[4] = {'a','d','e'};
    char str3[8];
    char *s = Delete (str1,str2,str3);
    for (int i = 0; i < 7; i++)
    {
        std::cout << *(s++) << std::endl ;
    }
    return 0;
}
