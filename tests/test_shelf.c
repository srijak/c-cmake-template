#include <stdlib.h>
#include <check.h>
#include "shelf/shelf.h"

START_TEST (test_double) 
{
  fail_unless( 10 == times_two(5), "Error: Double of 5 !- 10");
}
END_TEST

int main(void) {
  Suite *s = suite_create("test_a_suite");
  TCase *tc_core = tcase_create("tests");
  tcase_add_test (tc_core, test_double);
  suite_add_tcase(s, tc_core);

  SRunner *sr = srunner_create(s);
  srunner_run_all(sr, CK_VERBOSE);
  int failed = srunner_ntests_failed (sr);
  srunner_free(sr);
  return (failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
