#include "link-list-test.h"

int main() {
  test_create(1);
  test_add(2);
  test_print(3);
  test_remove(4);
  test_remove_last_node();
  test_remove_first_node();
  test_add_with_index(0);
  test_add_with_index(1);
  test_add_with_index(2);
  return 0;
}