/* 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation.
 * You should have received a copy of the GNU General Public License  
 * along with this program.  If not, see http://www.gnu.org/licenses/. 
*/


#ifndef SHEDULER_H
#define SHEDULER_H

#include <QList>

struct TAB;
//struct OS_TCB;

struct TickTime;

enum stateTask
{
    SLEEP=1,
    WAIT_FNS,
    READY,
    RUN,
    FINISH,
    TIMEOUT,
    WAIT_TMT
};

class Sheduler
{
public:
    Sheduler();
    
    
    
    void stateUpdate(int tick, QList<TAB *> listTask, QList<TickTime *> listTickTime_cpu);
    
    
    
};

#endif // SHEDULER_H

