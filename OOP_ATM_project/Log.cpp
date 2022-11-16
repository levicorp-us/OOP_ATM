#include "Log.h"

Transaction::Transaction(int idnum, int card_num, int quantity, int mode)
{
	ID = idnum;
	card_number = card_num;
	amount = quantity;
	type = mode;
}

int Transaction::get_ID()
{
	return ID;
}

int Transaction::get_card_number()
{
	return card_number;
}

int Transaction::get_amount()
{
	return amount;
}


int Transaction::get_type()
{
	return type;
}