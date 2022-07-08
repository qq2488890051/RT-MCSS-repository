/* 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation.
 * You should have received a copy of the GNU General Public License  
 * along with this program.  If not, see http://www.gnu.org/licenses/. 
*/


#include "sheduler.h"
#include "mainwindow.h"


Sheduler::Sheduler()
{
    
}





void Sheduler::stateUpdate(int tick, QList<TAB*> listTask, QList<TickTime*> listTickTime_cpu)
{
    for (int i = 0; i < listTask.size(); ++i) {
        TAB* tab=listTask.at(i);
        int tickCurrTask=tick%tab->T;
        enum stateTask state = tab->state;
        
        switch(state){
        case WAIT_FNS:
            if(tickCurrTask == tab->J)
            {
                tab->state=READY;
            }
            break;
        case WAIT_TMT:
            if(tickCurrTask == tab->J)
            {
                tab->state=READY;
            }
            break;
        case READY:
            if(tickCurrTask == (tab->D%tab->T))
            {
                tab->state=TIMEOUT; 
                listTask.at(i)->tickHaveDone = 0;                
                
                listTask.at(i)->listTick.last()->isPassDeadlineAt_x2_Point=true; 
                listTickTime_cpu.last()->isPassDeadlineAt_x2_Point=true;
                if(tickCurrTask == 0)
                {
                    tab->state=WAIT_TMT;
                    if(tickCurrTask == tab->J)  
                    {
                        tab->state=READY;
                    }
                    
                }
                
            }
            break;
        case FINISH:
            listTask.at(i)->tickHaveDone = 0;
            if(tickCurrTask == 0)
            {
                tab->state=WAIT_FNS;
                if(tickCurrTask == tab->J)  
                {
                    tab->state=READY;
                }
            }
            break;
        case TIMEOUT:
            if(tickCurrTask == 0)
            {
                tab->state=WAIT_TMT;
                if(tickCurrTask == tab->J)  
                {
                    tab->state=READY;
                }
                
            }
            break;
        default:
            break;            
        }        
    }
    
}
