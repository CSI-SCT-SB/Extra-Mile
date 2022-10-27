/*
Alice and Bob play the classic game of odds and evens. In this game, each of the two players choose a number between 11 and 55 without revealing to their opponent. Both of the players then simultaneously reveal their number by holding up that many fingers of their hand. Then the winner is decided based upon whether the sum of numbers played by both the players is odd or even. In this game we assume that if the sum is odd then Alice wins, otherwise Bob wins.

If Alice held up aa fingers and Bob held up bb fingers, determine who won the game.
Input Format

    First line will contain TT, number of testcases. Then the TT testcases follow.
    Each testcase contains of a single line of input, two integers a,ba,b which denote the number played by Alice and Bob respectively.

Output Format

For each testcase, output which player won the game.
*/
#include <stdio.h>

int main(void) {
	int T,a,b,i;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
	    scanf("%d%d",&a,&b);
	    if((a+b)%2==0)
	    printf("Bob\n");
	    else 
	    printf("Alice\n");
	    
	}
	return 0;
}

