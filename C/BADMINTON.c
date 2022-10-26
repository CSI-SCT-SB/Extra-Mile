/*
Chef is playing badminton today. The service rules of this singles game of badminton are as follows:

    The player who starts the game serves from the right side of their court.
    Whenever a player wins a point, they serve next.
    If the server has won an even number of points during a game, then they will serve from the right side of the service court for the subsequent point.

Chef will be the player who begins the game.

Given the number of points PP obtained by Chef at the end of the game, please determine how many times Chef served from the right side of the court.

Please see the sample cases below for explained examples.
Input Format

    The first line of input contains a single integer TT, denoting the number of test cases. The description of TT test cases follows.
    Each test case consists of a single line containing one integer PP, the points obtained by Chef.

Output Format

For each test case, output in a single line the number of times Chef served from the right side of the court.
*/
#include <stdio.h>

int main(void) {
	int T,P;
	scanf("%d",&T);
	while(T!=0){
	    scanf("%d",&P);
	    
	    printf("%d\n",P/2+1);
	    T--;
	}
		return 0;
}

