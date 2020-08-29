/*
 * Ex04_05.c
 *
 *  Created on: 2020/01/08
 *      Author: andy
 */
#include <stdio.h>

int main(void)
{

  int i, n;
  int cnt = 0;

  do {

	  printf("nが素数かどうか判定します。: ");
	  fflush(0); scanf("%d", &n);

	  /* 素数かどうかを判定 */
	  for( i=2;i<n;++i ) {
		  if( n % i==0 ) {
			  cnt = 1;
			  break;
		  }
	  }

	  /* 判定結果を出力 */
	  if( cnt == 0 )
		  printf("%d は素数です。\n",n);
	  else
		  printf("%d は素数ではありません。\n",n);
  } while (n != 0);

  return 0;
}

