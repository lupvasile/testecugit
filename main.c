#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int zipper(char *a, char *b, char *c)
{
    int i,ca=0,cb=0,al,bl;
    al=strlen(a);
    bl=strlen(b);
    for(i=0;i<al+bl;i++)
    {
        if(c[i]==a[ca] && ca<al)
        {
            if(c[i]==b[cb])
                if(zipper(a+ca+1,b+cb,c+i+1)==1) return 1;
                else if(zipper(a+ca,b+cb+1,c+i+1)==1) return 1;
                else return 0;
            else
                ca++;
        }
        else if(c[i]==b[cb] && cb<bl)
            cb++;
        else return 0;
    }
    if(ca+cb==al+bl)
        return 1;
    return 0;
}

int sum(int nr,...)
{
    va_list valist;
    va_start(valist,nr);

    int sum = 0;
    for(int i=1;i<=nr;++i)
    {
        sum += va_arg(valist,int);
    }
    va_end(valist);
    return sum;
}
int main()
{
    //printf("%d",sum(3,4,5,6));

    printf("varianta 1");
        return 0;
}
