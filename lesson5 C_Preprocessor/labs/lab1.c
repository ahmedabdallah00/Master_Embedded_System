#include <stdio.h>

int main(void)
{
	printf("__STDC__:          %ld\n",__STDC__);
	printf("__STDC__VERSION__: %ld\n",__STDC_VERSION__);
	printf("__STDC_HOSTED__:   %ld\n",__STDC_HOSTED__);
	printf("__FILE__:          %s\n",__FILE__);
	printf("__LINE__:          %d\n",__LINE__);
	printf("__DATE__:          %s\n",__DATE__);
	printf("__TIME__:          %s\n",__TIME__);
	printf("__Func__:          %s\n",__func__);
	
}