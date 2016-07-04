#include <assert.h>
#include "link-list.h"

static struct node* test_get_list(int x) {
	struct node* head = create_node(x + 1);
  struct node* node2 = add_node(x + 2, head);
  struct node* node3 = add_node(x + 3, head);
  struct node* node4 = add_node(x + 4, head);
	return head;
}

static void test_create(int x) {
	struct node* testNode = create_node(x);
	assert(testNode->x == x);
	assert(testNode->next == NULL);
}

static void test_add(int x) {
	struct node* head = create_node(x);
  struct node* node2 = add_node(x + 2, head);
	assert(head->next == node2);
}

static void test_print(int x) {
	struct node* head = create_node(x);
	struct node* node2 = add_node(x + 2, head);
	print_list(head);
}

static void test_remove(int x) {
  struct node* head = test_get_list(1);
  struct node** wrapper = &head;
  print_list(head);
  printf("%s\n", " ");
  remove_node(x, wrapper);
  print_list(head);
}

static void test_remove_last_node() {
  struct node* head = test_get_list(1);
  struct node** wrapper = &head;
  print_list(head);
  printf("%s\n", " ");
  remove_node(5, wrapper);
  print_list(head);
}

static void test_remove_first_node() {
  struct node* head = test_get_list(1);
  print_list(head);
  printf("%s\n", " ");
  struct node** wrapper = &head;
  remove_node(2, wrapper);
  print_list(head);
}

static void test_add_with_index(int index) {
  struct node* head  = create_node(777);
  struct node* node = add_node(888, head);
  print_list(head);
  struct node* node2 = add_node_with_index(999, index, &head);
  printf("%s\n", " ");
  print_list(head);
}