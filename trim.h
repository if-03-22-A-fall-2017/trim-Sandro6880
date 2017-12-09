/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.h
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Interface for trim
 * ----------------------------------------------------------
 */
 #ifndef ___TRIM_H
 #define ___TRIM_H
 #include <stdbool.h>
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>

 #define STRLEN 17
 void check(const char* source , char* trimmed_string);
 void trim(const char* source,char* trimmed_string);
 #endif
