#include <stdio.h>

int main()
{
	unsigned int rem = 0;
  int size = 0;
  int i, j;
  char arr[] = "[flag][address][data]";
	for (i=0; i < size; i++)
	{
		rem = rem^(arr[i]<<8);
		
		for (j=0; j < 8; j++)
		{
			if (rem&0x8000)
			{
				rem = (rem<<1)^0x1021;
			}
			else
			{
				rem = rem<<1;
			}

			rem = rem&0xFFFF;
		}
	}

	printf("%x\n",rem&0xFFFF);
  return 0;
}
