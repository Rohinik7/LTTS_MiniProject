/** 
* @file lib.h
* Library Management application with admin and user login
*
*/

#ifndef __LIB_H__
#define __LIB_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

struct book
{
    int id;
    char name[20];
    char author[20];
    int copies;
    int copiesleft;
}b,bc;
struct date
{
    int dd,mm,yy;
};
struct user
{
    int id;
    char name[20];
    int bookid;
    struct date issue;
    struct date due;
}u,uc;

typedef enum test_values {
    pass = 1,
    fail = 0
}test_values;
/**
*  Main menu 
* @return options for the user
*/
test_values main_menu(void);

/**
 * Admin Menu
* @return operations that can be performed by admin
*/
test_values admin(void);

/**
*  Book menu
* operation available in admin menu
* @return list of operations in book menu
*/ 
test_values bookmenu(void);


/**
* add books to the list
*/
test_values addbook(void);
/**
 * edit book
 */
 test_values editbook(void);
 /**
  * Delete the book based on input id
  */
 test_values deletebook(int id);
 /**
  * @return list of user menu
  */
 test_values usermenu(void);
 /**
  * Add user to the list
  */
 test_values adduser(void);
 /**
  * checks if the user id is in the list
  * @returns 1 if true else 0
  */
 test_values uidcheck(int id);
/**
 * edit information of a user
 */
test_values edituser(void);
/**
 * delete user from the list based on input id
 */
test_values deleteuser(int id);
/**
 * @returns list of books
 */
test_values listbook(void);
/**
 * issue a new book
 */
test_values issuebook(void);
/**
 * check if date is valid
 * */
test_values validdatecheck(struct date a);
/**
 * collect book that's been issued
 */
test_values collectbook(void);
/**
 * calculate the fine to be collected
 * @param date
 * @param id
 * @return fine_amount
 */
test_values fine(struct date r,int i);


#endif  /* #define __LIB_H__ */
