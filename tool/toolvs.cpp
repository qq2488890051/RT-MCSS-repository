#include "toolvs.h"

ToolVs::ToolVs()
{
    
}


// 自己实现的向上取整函数
int ToolVs::ceil_vs(float f)
{
    int res;
    int b;
    b = (int)f;
    if( (f-b) >= 0.00000001)
    {
        res = b + 1;
    }
    else    // 说明f刚好是整数
    {
        res = b;
    }
    return res;
}
float ToolVs::min_vs(float a,float b)
{
    if(a<=b)
        return a;
    else
        return b;
}
float ToolVs::max_vs(float a,float b)
{
    if(a>=b)
        return a;
    else
        return b;
}
float ToolVs::maxArray_vs(float arr[],int n)
{
    float tmp=0;
    for (int i = 0; i < n; ++i) {
        tmp=max_vs(arr[i],tmp);
    }
    return tmp;
}
