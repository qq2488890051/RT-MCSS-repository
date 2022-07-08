#ifndef TOOLVS_H
#define TOOLVS_H

#include "Sched/mainwindow.h"

class ToolVs
{
public:
    ToolVs();
    
    int ceil_vs(float f);
    float min_vs(float a, float b);
    float max_vs(float a, float b);
    float maxArray_vs(float arr[], int n);
};

#endif // TOOLVS_H
