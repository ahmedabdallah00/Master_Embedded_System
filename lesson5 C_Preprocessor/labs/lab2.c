#include <stdio.h>

#define CAT(a, ...) PRIMITIVE_CAT(a, __VA_ARGS__)
#define PRIMITIVE_CAT(a, ...) a## __VA_ARGS__
#define DEC(x) PRIMITIVE_CAT(DEC_,x)
#define DEC_1 0
#define DEC_2 1
#define DEC_3 2
#define DEC_4 3
#define DEC_5 4
#define DEC_6 5
#define DEC_7 6

#define Dprintf(...) printf(__VA_ARGS__)

int main(void)
{
	Dprintf("DEC(7) = %d\n",DEC(7));
	
	
	printf("__STDC__:          %ld\n",__STDC__);
	printf("__STDC__VERSION__: %ld\n",__STDC_VERSION__);
	printf("__STDC_HOSTED__:   %ld\n",__STDC_HOSTED__);
	printf("__FILE__:          %s\n",__FILE__);
	printf("__LINE__:          %d\n",__LINE__);
	printf("__DATE__:          %s\n",__DATE__);
	printf("__TIME__:          %s\n",__TIME__);
	printf("__Func__:          %s\n",__func__);
	
}