/* 联合体是使用 */
#include <stdio.h>

/* 联合体 */
union shared_tag {
	int ival;
	float fval;
	char *sval;	
} v; 

int main() {
	//v.ival = 10;
	//printf("v.Value = %d\n",v.ival);
	//printf("v.Value = %f\n",v.fval);
	//printf("v.Value = %s\n",v.sval);
	// printf("addr sval = %p\n", v.sval);
	//v.fval = 3.1415927f;
	//printf("v.Value = %d\n",v.ival);
	//printf("v.Value = %f\n",v.fval);
	//printf("v.Value = %s\n",v.sval);
	// printf("addr sval = %p\n", v.sval);
	v.sval = "string";	
	//printf("v.Value = %d\n",v.ival);
	//printf("v.Value = %f\n",v.fval);
	printf("v.Value = %s\n",v.sval);
	// printf("addr sval = %p\n", v.sval);
	return 0;
}
