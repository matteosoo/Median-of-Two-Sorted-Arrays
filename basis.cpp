#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int getMedian(int ar1[], int ar2[], int n) 
{ 
    int i = 0; /* Current index of  
                  i/p array ar1[] */
    int j = 0; /* Current index of  
                  i/p array ar2[] */
    int count; 
    int m1 = -1, m2 = -1; 
  
    /* Since there are 2n elements,  
    median will be average of elements  
    at index n-1 and n in the array  
    obtained after merging ar1 and ar2 */
    for (count = 0; count <= n; count++) 
    { 
        /* Below is to handle case where  
           all elements of ar1[] are 
           smaller than smallest(or first) 
           element of ar2[]*/
        if (i == n) 
        { 
            m1 = m2; 
            m2 = ar2[0]; 
            break; 
        } 
  
        /*Below is to handle case where  
          all elements of ar2[] are 
          smaller than smallest(or first) 
          element of ar1[]*/
        else if (j == n) 
        { 
            m1 = m2; 
            m2 = ar1[0]; 
            break; 
        } 
  
        if (ar1[i] < ar2[j]) 
        { 
            /* Store the prev median */
            m1 = m2;  
            m2 = ar1[i]; 
            i++; 
        } 
        else
        { 
            /* Store the prev median */
            m1 = m2;  
            m2 = ar2[j]; 
            j++; 
        } 
    } 
  
    return (m1 + m2)/2; 
} 

int main
{
	cout << "Input" << "\n";
	int n;
	cin >> n;
	
	int A[n];
	int B[n];
	
	for(int i = 0; i < n; i++)
		cin >> A[i];
	for(int i =0; i < n; i++)
		cin >> B[i];
		
	cout << "Outout" << "\n";
	cout << getMedian(A, B, n);
	
	return 0;
}

