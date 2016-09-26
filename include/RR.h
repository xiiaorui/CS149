#ifndef RR
#define RR

#include "process_producer.h"

/* Function: RoundRobin
*  calculates the run time for an array of processes if each process got exactly 1 quanta time slice. The value is stored in the runtime variable
* array should be sorted by arrival time
*/
void RoundRobin(struct process* plist);

#endif