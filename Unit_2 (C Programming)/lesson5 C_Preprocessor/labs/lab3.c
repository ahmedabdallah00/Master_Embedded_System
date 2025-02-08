#include <stdio.h>
//make functio factory and use (parameters a,x) output (a*x) == int fun_name(int x){return a*x;}
#define FUNCTION(name,a) int fun_##name(int x) {return (a)*x;}
FUNCTION(quadruple,6)
FUNCTION(double,2)
#undef FUNCTION
#define FUNCTION 34
#define OUTPUT(a) printf(#a)

int main(void)
{
	printf("quadruple(13): %d\n",fun_quadruple(13));
	printf("double(13): %d\n",fun_double(21));
	printf("%d\n",FUNCTION);
	OUTPUT(kerlos\n);
	
	printf("__STDC__:          %ld\n",__STDC__);
	printf("__STDC__VERSION__: %ld\n",__STDC_VERSION__);
	printf("__STDC_HOSTED__:   %ld\n",__STDC_HOSTED__);
	printf("__FILE__:          %s\n",__FILE__);
	printf("__LINE__:          %d\n",__LINE__);
	printf("__DATE__:          %s\n",__DATE__);
	printf("__TIME__:          %s\n",__TIME__);
	printf("__Func__:          %s\n",__func__);
	
}