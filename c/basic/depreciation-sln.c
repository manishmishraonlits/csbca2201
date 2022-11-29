/*
AIM: Accept asset value, salvage value and useful
     life of an asset and find it annual depreciation
     using straight-line value method.
*/

#include <stdio.h>

int main(void)
{
	float av, sv, ul, dep;
	scanf("%f", &av);
	scanf("%f", &sv);
	scanf("%f", &ul);
	dep = (av - sv) / ul;
	printf("%f\n", dep);
	return 0;
}

/*
	Test Case:
	
	A.V. = 20000
	S.V. = 0
	U.L. = 4
	Dep  = 5000
*/
