#include "Money.h"

int Cash::getTotal() {
	int total = 0;
	total += num_50000 * 50000;
	total += num_10000 * 10000;
	total += num_5000 * 5000;
	total += num_1000 * 1000;
	return total;
}

int Cash::getPaperNum() {
	int total = 0;
	total = num_50000 + num_10000 + num_5000 + num_1000;
	return total;
}