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

/**
*  Main menu 
* @return options for the user
*/
void main_menu(void);

/**
 * Admin Menu
* @return operations that can be performed by admin
*/
void admin(void);

/**
*  Book menu
* operation available in admin menu
* @return list of operations in book menu
*/ 
void bookmenu(void);


/**
* add books to the list
*/
void addbook(void);
/**
 * edit book
 */
 void editbook(void);
 /**
  * Delete the book based on input id
  */
 void deletebook(int id);
 /**
  * @return list of user menu
  */
 void usermenu(void);
 /**
  * Add user to the list
  */
 void adduser(void);
 /**
  * checks if the user id is in the list
  * @returns 1 if true else 0
  */
 int uidcheck(int id);
/**
 * edit information of a user
 */
void edituser(void);
/**
 * delete user from the list based on input id
 */
void deleteuser(int id);
/**
 * @returns list of books
 */
void listbook(void);
/**
 * issue a new book
 */
void issuebook(void);
/**
 * check if date is valid
 * */
int validdatecheck(struct date a);
/**
 * collect book that's been issued
 */
void collectbook(void);
/**
 * calculate the fine to be collected
 * @param date
 * @param id
 * @return fine_amount
 */
int fine(struct date r,int i);


#endif  /* #define __LIB_H__ */