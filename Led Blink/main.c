#include <REG52.H>

sbit LED = P2^7;

void delay_ms (int k);
int main ()
{
	LED = 0;

	while (1)
  {
		LED = 1;
		delay_ms(500);
		LED = 0;
		delay_ms(500);
  }
	return (0);
}

void delay_ms(int k)
{
	int i=0, j=0;
	for(i=0; i<k; i++)
	{
		for(j=0; j<1000; j++);
	}
}
