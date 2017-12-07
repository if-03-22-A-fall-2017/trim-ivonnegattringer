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
#include <stdbool.h>

void  trim(const char *source, char *trimmed_string){
  int readPosition = 0;
  while(source[readPosition]== ' ') {
    readPosition++;
  }

  int max_len = strlen(source);
  int insertPosition = 0;
  while(readPosition < max_len && !(source[readPosition] == ' ' && (source[readPosition +1] == ' ' || source[readPosition + 1] == '\0'))){
    trimmed_string[insertPosition] = source[readPosition];
    readPosition++;
    insertPosition++;
  }
  trimmed_string[insertPosition] = '\0';
}
