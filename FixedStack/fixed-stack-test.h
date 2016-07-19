#include <assert.h>
#include "fixed-stack.h"

static struct void test_array_size() {
	struct FixedArray* farr= createArray();
	assert(sizeof(fixedArray*) == 100/sizeof(char));
}

static struct void test_max_array_index() {
	struct FixedArray* farr = createArray();
	int i
	for(i=0; i<1000; i++) {
		push(50, farr);
	}
	while(farr->arr[arr->position]) {
		printf("%d\n", farr->arr[arr->position]);
		fArray->position++;
	}
}