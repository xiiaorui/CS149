#ifndef SHARED
#define SHARED

/// Total number of processes to create
#define NUMBER_PROCESS 150
#define NUMBER_PAGES 100
#define TOTAL_TIME 100

#include <stdbool.h>

struct process{
	char name[2];// 1 Char per MB? only 1 Char per name?
	int page_size; // Can be 5, 11, 17, and 31
	int arrival_time; // 
	int completion_time; // Can be 1, 2, 3, 4, or 5
	int num_page_in_freelist; // Keep track of many of this process is currently in free list. Max = 4
	struct page* pagesowned; //4 page pointers to the 4 possible pages in memory
	struct process* next; // makes possible to create linked list
};

typedef struct process process;


struct page{
	struct process* process_owner; //pointer to the process owning this page
	int status;			//All 100 pages are initially set to available which is 0 when created
						//Set status to 1 for not available page.
	int pageNumber; 	// Page number when added to free memory
	int inMemoryTime; 	// Time when added to free memory
	//bool isInMemory;	// Check to see if this page is in memory 
	struct page* next; 
};

typedef struct page page;

int quanta;
#endif