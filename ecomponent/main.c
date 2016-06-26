#include<stdio.h>
#include"ecomponent.h"

int main() {
	struct ec_node nodes[3];
	//struct ec_node vol1;
	//struct ec_node voi1;
	nodes[0].ec_type = 'r';
	nodes[0].value = 100;
	nodes[1].ec_type = 'v';
	nodes[1].value = 10;
	nodes[2].ec_type = 'n';
	nodes[2].value =0;

	struct adjedge res1[2];
	struct adjedge vol[2];
	struct adjedge voi[2];

	res1[1].adjnode = 2;
	res1[1].pt_next_adjedge = NULL;
	res1[0].adjnode = 1;
	res1[0].pt_next_adjedge = &res1[1];

	vol[1].adjnode = 0;
	vol[1].pt_next_adjedge = NULL;
	vol[0].adjnode = 1;
	vol[0].pt_next_adjedge = &vol[1];
	
	voi[1].adjnode = 0;
	voi[1].pt_next_adjedge = NULL;
	voi[0].adjnode = 2;
	voi[0].pt_next_adjedge = &voi[1];

	nodes[0].pt_first_adjedge = &res1[0];
	
	printf("asd%c%d",nodes[0].ec_type,(* (nodes[0].pt_first_adjedge)).adjnode);

	return 0;
}

