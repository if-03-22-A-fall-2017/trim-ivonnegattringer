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
 #ifndef ___TRIM_H___
 #define ___TRIM_H___
 #include <stdio.h>
 #include <string.h>
 #include "shortcut.h"
 #define STRLEN 40
 void  trim(const char *source, char *trimmed_string);
 char* fill_trimmed_string_right(const char *source, char *trimmed_string);
 int where_to_end(const char *source);
 int blanks_at_the_beginning(const char *source);
 #endif
