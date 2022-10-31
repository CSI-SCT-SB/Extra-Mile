/*
This year Chef is participating in a Dancing competition. The dance performance will be done on a linear stage marked with integral positions. Initially, Chef is present at position XX and Chef's dance partner is at position YY. Chef can perform two kinds of dance moves.

If Chef is currently at position kk, Chef can:

    Moonwalk to position k+2k+2, or
    Slide to position k−1k−1

Chef wants to find the minimum number of moves required to reach his partner. Can you help him find this number?
Input Format

    First line will contain a single integer TT, the number of testcases. Then the description of TT testcases follows.
    Each testcase contains a single line with two space-separated integers X,YX,Y, representing the initial positions of Chef and his dance partner, respectively.

Output Format

For each testcase, print in a separate line, a single integer, the minimum number of moves required by Chef to reach his dance partner.
*/
#include <stdio.h>

int main(void) {
	int X,Y,T,j,i;
	scanf("%d", &T);
	for(i=0;i<T;i++)
	{
		j=0;
		scanf("%d%d",&X,&Y);
		do{
		if(X>Y)
		{
	   	X-=1;
		j++;
		}
		else if(X<Y)
		{
	    	X+=2;
	    	j++;
		}
		}while(X!=Y);
		printf("\n%d",j);
	}
	return 0;
}

