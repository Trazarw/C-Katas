#include <stdio.h>
#include <stdlib.h>

struct node {
  int x;
  struct node *next;
} node;

static struct node* create_node(int x){
	struct node* node = malloc(sizeof(node));
	node->next = NULL;
	node->x = x;
  return node;
}

static struct node* add_node(int x, struct node* head) {
	struct node* node  = create_node(x);
  head-> next = node;
  return node;
}

static struct node* add_node_with_index(int x, int index, struct node** head) {
  struct node* current = *head;
	struct node* previous;
  struct node* node = create_node(x);
  if(index == 0) {
    node->next = *head;
    *head = node;
  } else {
    int c = 0;
	  while(current) {
      if(c == (index -1)) {
        node->next = current->next;
        current->next = node;
      }
      previous = current;
	    current = current->next;
      c++;
    }
  }
}

static void print_list(struct node* head) {
	struct node* current = head;
	while(current) {
	   printf("%d\n", current->x);
	   current = current->next;
    }
}

static void remove_node(int x, struct node** head) {
  int i = 0;
  struct node* current = *head;
	struct node* previous = current;
	while(current) {
	   if(current->x == x){
        if(i == 0) {
          *head = current->next;
        }
	   		previous->next = current->next;
	   		free(current);
	   }
	   previous = current;
	   current = current->next;
     i++;
    }
}
