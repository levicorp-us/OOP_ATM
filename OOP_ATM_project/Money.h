#pragma once

class Cash {
public:
	int num_50000;
	int num_10000;
	int num_5000;
	int num_1000;
	int getTotal();
	int getPaperNum();
};

class Check {
public:
	int amount;
};