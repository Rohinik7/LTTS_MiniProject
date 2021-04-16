#include "unity.h"
#include "unity_internals.h"
#include "lib.h"

/* Modify these two lines according to the project */
#define PROJECT_NAME    "Library_Management"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


/* Write all the test functions */ 
void test_main_menu(void) {
  TEST_ASSERT_EQUAL(pass,main_menu());
}

void test_bookmenu(void) {
  TEST_ASSERT_EQUAL(pass,bookmenu());
}
  

void test_deletebook(void) {
  TEST_ASSERT_EQUAL(pass,deletebook(2passfail));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(fail,deletebook(32fail));
}

void test_usermenu(void) {
  TEST_ASSERT_EQUAL(pass,usermenu());
}
void test_uidcheck(void){
  TEST_ASSERT_EQUAL(pass,uidcheck(263994));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(fail,uidcheck(23056));

}
void test_bidcheck(void){
  TEST_ASSERT_EQUAL(pass,bidcheck(210));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(fail,bidcheck(235));

}
void test_edituser(void){
  TEST_ASSERT_EQUAL(pass,edituser());
}

void test_deleteuser(void){
  TEST_ASSERT_EQUAL(pass,deleteuser(263994));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(fail,deleteuser(23678));

}

void test_validdatecheck(void){
  TEST_ASSERT_EQUAL(pass,validdatecheck(23-02-2012));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(fail,validdatecheck(39-13-2000));

}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_main_menu);
  RUN_TEST(test_bookmenu);
  RUN_TEST(test_deletebook);
  RUN_TEST(test_usermenu);
  RUN_TEST(test_uidcheck);
  RUN_TEST(test_bidcheck);
  RUN_TEST(test_edituser);
  RUN_TEST(test_deleteuser);
  RUN_TEST(test_validdatecheck);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
