#include <iostream> 
using namespace std; 

calneed(int need[][4], int max[][4],int alloc[][4])
{
	for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 4; j++) 
            need[i][j] = max[i][j] - alloc[i][j]; 
    } 
}

bool isSafe(int avail[4], int max[3][4], int alloc[3][4]) 
{ 
    int need[3][4]; 
    calneed(need, max, alloc); 
    bool finish[3] = {0}; 
    int safeSeq[3]; 
    int work[4]; 
    for (int i = 0; i < 4 ; i++) 
        work[i] = avail[i]; 
    int count = 0;
    while (count < 3) 
    { 
        bool found = false; 
        for (int p = 0; p < 3; p++) 
        { 
            if (finish[p] == 0) 
            { 
                int j; 
                for (j = 0; j < 4; j++) 
                    if (need[p][j] > work[j]) 
                        break; 
                if (j == 4) 
                {
                    for (int k = 0 ; k < 4 ; k++) 
                        work[k] += alloc[p][k]; 
                    safeSeq[count++] = p; 
                    finish[p] = 1; 
  
                    found = true; 
                } 
            } 
        }
        if (found == false) 
        { 
            
            return false; 
        } 
    }
  
    return true; 
} 

int main() 
{ 
  
    int n, m, i, j, k;
    n = 3;
    m = 4;
    int alloc[n][m],max[n][m],avail[m];
	cout<<"No. of processes: "<<n<<endl;
	cout<<"No. of resorces: "<<m<<endl;
	cout<<"Enter the allocation array:\n";
	for(int i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>alloc[i][j];
		}
	}
  
    cout<<"Enter the MAX array:\n";
	for(int i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>max[i][j];
		}
	}
  	cout<<"Enter the available resources array:\n";
    for(int i=0;i<n;i++)
	{
		cin>>avail[i];
	}
    
    isSafe(avail,*max,alloc);
    
    return 0; 
}
