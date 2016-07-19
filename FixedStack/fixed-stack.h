	#include <stdio.h>
	#include <stdlib.h>
	#define ARRAY_SIZE 	100/sizeof(char)
	#define INDEX_MIN   0
	#define INDEX_MAX   ARRAY_SIZE - 1

	struct FixedArray {
		char arr[ARRAY_SIZE];
		int position;
	};

	struct FixedArray* createArray() {
		struct FixedArray* fArray = malloc(sizeof(struct FixedArray));
		fArray->position = INDEX_MIN;
		return fArray;
	}

	void push(char value, struct FixedArray* fArray) {
		if (fArray->position == INDEX_MAX) {
			return;
		}
		fArray->arr[fArray->position] = value;
		fArray->position++;
	}

	char pop(struct FixedArray* fArray){
		if(fArray->position == INDEX_MIN) {
			return;
		}
		fArray->position--;
		return fArray->arr[fArray->position + 1];
	}
