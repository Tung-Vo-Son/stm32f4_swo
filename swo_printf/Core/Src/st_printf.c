/*
 * st_printf.c
 *
 *  Created on: Oct 13, 2021
 *      Author: Admin
 */
#include "main.h"
#include "st_printf.h"

int _write(int file, char *ptr, int len)
{
	int i;
	for(i=0;i<len; i++)
	{
		ITM_SendChar(*ptr++);
	}
	return len;
}
