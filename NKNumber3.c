#include<stdio.h>
#define SIZE 0xffffffff

int main(){
	int i = 0;
	int p[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61,67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127};
	for ( i = 0; i < SIZE; i++ ){
		int n = i;
		int j = 0;
		long A = 1;
		long B = 1;
		int rank = 0;
		while ( n > 0 ) {
			if ( n % 3 == 0 ){
				A *= p[j];
			}else if( n % 3 == 1){
				B *= p[j];
			}else{
				rank++;
			}
			n /= 3;
			j++;
		}
		A *= p[j];
		if ((( A == B + 1 ) || ( A + 1 == B ))){
			printf("%10ld, %10ld, rank=%2d\n", A, B, rank);
		}
	}
}

