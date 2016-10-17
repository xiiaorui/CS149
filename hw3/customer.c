#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "customer.h"

void make_customers(customer** queue, int length){
	*queue = malloc(sizeof(customer) * length);
	for(int x = 0; x < length; x++){
		(*queue)[x].arrival_time = (rand() % 59) + 1;

		(*queue)[x].customer_id[0] = '0';
		(*queue)[x].customer_id[1] = (x + 1) + '0';
		if(x == 9){
			(*queue)[x].customer_id[0] = 1 + '0';
			(*queue)[x].customer_id[1] = '0';

		}
	}
	return;
}

void print_customers(customer* list, int length){
	for(int x = 0; x < length; x++){
		printf("customer id: %c%c  | arrival time: %d\n", list[x].customer_id[0], list[x].customer_id[1], list[x].arrival_time);
	}
}