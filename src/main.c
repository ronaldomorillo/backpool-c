#include "CuTest.h"
#include <stdio.h>

CuSuite* ScalarPoolTestSuite(void);
CuSuite* ObjectPoolTestSuite(void);
CuSuite* SegmentPoolTestSuite(void);

void RunAllTests(void)
{
	CuString *output = CuStringNew();
	CuSuite* suite = CuSuiteNew();

	CuSuiteAddSuite(suite, ScalarPoolTestSuite());
	CuSuiteAddSuite(suite, SegmentPoolTestSuite());
	CuSuiteAddSuite(suite, ObjectPoolTestSuite());

	CuSuiteRun(suite);
	CuSuiteSummary(suite, output);
	CuSuiteDetails(suite, output);
	printf("%s\n", output->buffer);
}

int main(void)
{
	RunAllTests();
}
