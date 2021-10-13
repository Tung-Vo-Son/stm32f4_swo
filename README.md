# stm32f4_swo
Printf function for debug in stm32f4

int _write(int file, char *ptr, int len)
{
	int i;
	for(i=0;i<len; i++)
	{
		ITM_SendChar(*ptr++);
	}
	return len;
}
