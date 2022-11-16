#include "Log.h"

Log::Log(int idnum, string card_num, int quantity, int mode)
{
	ID = idnum;
	card_number = card_num;
	amount = quantity;
	type = mode;
}

int Log::get_ID()
{
	return ID;
}

int Log::get_card_number()
{
	return card_number;
}

int Log::get_amount()
{
	return amount;
}


int Log::get_type()
{
	return type;
}