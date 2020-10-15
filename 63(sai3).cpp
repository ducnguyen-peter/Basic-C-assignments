#include<bits/stdc++.h>
#include <stdio.h> 
#include <stdlib.h> 
using namespace std;
typedef long long ll;
ll A2[1000000]; 
  
int size; 
  
int search(int key) 
{ 
    int i = 0, idx = 0; 
    for (i = 0; i < size; i++) 
        if (A2[i] == key) 
            return i; 
    return -1; 
} 
int compareByA2(const void* a, const void* b) 
{ 
    int idx1 = search(*(int*)a); 
    int idx2 = search(*(int*)b); 
    if (idx1 != -1 && idx2 != -1) 
        return idx1 - idx2; 
    else if (idx1 != -1) 
        return -1; 
    else if (idx2 != -1) 
        return 1; 
    else
        return (*(int*)a - *(int*)b); 
} 
  
void sortA1ByA2(int A1[], int size1) 
{ 
    qsort(A1, size1, sizeof(int), compareByA2); 
} 
  
int main(int argc, char* argv[]) 
{
	int t; cin>>t;
	while(t--)
	{
	    int size1; cin>>size1>>size;
		int A1[size1];
		for(int i = 0; i < size1; i++) cin>>A1[i];
		for(int i = 0; i < size; i++) cin>>A2[i];
	    sortA1ByA2(A1, size1); 
	    int i; 
	    for (i = 0; i < size1; i++) 
	        cout<<A1[i]<<" ";
		cout<<endl; 
	}
    return 0; 
}

