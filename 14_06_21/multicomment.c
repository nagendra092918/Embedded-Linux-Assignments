#include <stdio.h>

/* this is a program for a multiline comment same as nested commenting
 *
 /* if you do this comment some error will occure*/
  we can reslove this issue using preprossor directorives like #if #endif
 */

int main()
{
	printf("how to do multi line comment and nested comments: \n");
	return 0;
}


#if 0
/*output*/

multicomment.c:6:3: error: expected identifier or ‘(’ before ‘/’ token
  */
   ^
#endif
