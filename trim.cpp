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
  trimmed_string = fill_trimmed_string_right(source, trimmed_string);
}
int blanks_at_the_beginning(const char *source){
  int readPosition = 0;
  while(source[readPosition]== ' ') {
    readPosition++;
  }
  return readPosition;
}
int where_to_end(const char *source){
  int max_len = strlen(source);
  while(source[max_len-1] == ' '){
    max_len--;
  }
  return max_len;
}
char* fill_trimmed_string_right(const char *source, char *trimmed_string){
    int insertPosition = 0;
    int max_len = where_to_end(source);
    int readPosition = blanks_at_the_beginning(source);
      for (; readPosition < max_len; readPosition++) {
          trimmed_string[insertPosition] = source[readPosition];
          insertPosition++;
      }
      trimmed_string[insertPosition] = '\0';
      return trimmed_string;
}
