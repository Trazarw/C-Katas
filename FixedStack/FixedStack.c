	#include <stdio.h>
	#include <stdlib.h>
	#define INDEX_SIZE 	100/sizeof(char)

	struct FixedArray {
		char arr[INDEX_SIZE];
		int position;
	};

	struct FixedArray* createArray() {
		struct FixedArray* fArray = malloc(sizeof(struct FixedArray));
		fArray->position = 0;
		return fArray;
	}

	void push(char value, struct FixedArray* fArray) {
		if (fArray->position == INDEX_SIZE) {
			return;
		}
		fArray->arr[fArray->position] = value;
		fArray->position++;
	}

	char pop(struct FixedArray* fArray){
		if(fArray->position == 0) {
			return;
		}
		fArray->position--;
		return fArray->arr[fArray->position + 1];
	}

	int main() {
		return 0;
	}
