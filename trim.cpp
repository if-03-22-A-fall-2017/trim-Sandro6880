/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include "trim.h"
void check(const char* source , char* trimmed_string)
{
  int count = strlen(source);
  char newString[STRLEN];
  int countBlanks = 0;
  int countNewString = 0;
  bool check = false;
  bool anotherCheck = false;
  for (int i = 0; i < count; i++) {
  if(source[i] != ' ')
  {
    if(anotherCheck == true)
    {
      newString[countNewString] = ' ';
      countNewString++;
      newString[countNewString] = source[i];
    }
    else
    {
      newString[countNewString] = source[i];
    }
    countNewString++;
    check = true;
    if(countBlanks != 0)
    {
      anotherCheck = false;
      countBlanks--;
    }
  }
  else if(check == true){
    anotherCheck = true;
    countBlanks++;
  }
  if(countBlanks == 2)
  {
    i = count;
  }
  }
  strcpy(trimmed_string,newString);
}

 void trim(const char* source,char* trimmed_string)
 {
   int count = strlen(source);
   if(count == 0)
   {
     strcpy(trimmed_string,source);
   }
   else{
     check(source,trimmed_string);
   }
 }
