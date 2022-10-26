/*
A 55 match test series between India and England has just concluded.

Every match could have ended either as a win for India, a win for England, or a draw. You know the result of all the matches. Determine who won the series or if it ended in a draw.

A team is said to have won the series if it wins strictly more test matches than the other team.
Input Format

    First-line will contain TT, the number of test cases. Then the test cases follow.
    Each test case contains a single line of input, five space-separated integers R1,R2,R3,R4,R5R1​,R2​,R3​,R4​,R5​ denoting the results of all the five matches. Ri=0Ri​=0 denotes that the test match ends in a draw. Ri=1Ri​=1 denotes that the test match is won by India. Ri=2Ri​=2 denotes that the test match is won by England.

Output Format

For each test output "DRAW" if the series ends in a draw, "INDIA" if the series is won by India, and "ENGLAND" if the series is won by England.

You may print each character of the string in uppercase or lowercase (for example, the strings "dRaw", "draw", "Draw" and "DRAW" will all be treated as identical).
*/
#include <stdio.h>

int main(void) {
	int T,R1,R2,R3,R4,R5,i;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{int I=0,E=0,D=0;
	scanf("%d%d%d%d%d",&R1,&R2,&R3,&R4,&R5);
	if(R1==0)D++;
	else if(R1==1)I++;
	else E++;
	if(R2==0)D++;
	else if(R2==1)I++;
	else E++;
	if(R3==0)D++;
	else if(R3==1)I++;
	else E++;
	if(R4==0)D++;
	else if(R4==1)I++;
	else E++;
	if(R5==0)D++;
	else if(R5==1)I++;
	else E++;
if(I>E)
printf("india\n");
else if(I<E)
printf("england\n");
else if(E==I)
printf("draw\n");
	}

	return 0;
}

