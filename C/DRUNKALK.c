/*
A person  tries to drown his sorrows in alcohol and gets very drunk. Now he wants to return home but is unable to walk straight. For every 33 steps forward, he ends up walking one step backward.

Formally, in the 1st1st second he moves 33 steps forward, in the 2nd2nd second he moves 11 step backwards, in the 3rd3rd second he moves 33 steps forward, in 4th4th second 11 step backwards, and so on.

How far from his initial position will Faizal be after kk seconds have passed? Assume that Faizal's initial position is 00.
Input Format

    The first line of input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
    The first line of each test case contains a single integer kk, the number of seconds after which Faizal's position is to be calculated.

Output Format

    For each test case, output a single line containing one integer - Faizal's position after kk seconds.

*/
#include <stdio.h>

int main(void) {
    int T,k,s;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {s=0;
        scanf("%d",&k);
        while(k>0){
            s+=3;
            --k;
            if(k==0)
            break;
            s-=1;
            --k;
            if(k==0)
            break;
        }
        printf("%d\n",s);
    }
    
	// your code goes here
	return 0;
}

