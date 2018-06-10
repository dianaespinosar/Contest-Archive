#include <iostream>
#include <cstdio> 
#include <vector> 

using namespace std;

vector<int> spiral(vector<vector<int> > &A) {
	int n, m;
	n = A.size();
	m = A[0].size();
	vector<int> ans(n*m);
	int L,R,T,B;
	int i,k;
	T = 0;
	B = n-1;
	R = m-1;
	L = 0;
	int dir = 0;
	i = 0;

	printf("T = %d, B = %d, L = %d, R = %d\n", T, B, L, R);
	while (L <= R && T <= B){
		if (dir == 0){
			printf("voy a la derecha\n");
			for (k = L; k <= R; k++){
				ans[i] = A[T][k];
				printf("Mi elemento %d es el de la posición (%d, %d) y es %d\n", i, T, k, A[T][k]);
				i++;
			}
			T++;
	}
		else if ( dir ==1){
			printf("voy hacia abajo\n");
			for (k = T; k <= B; k++){
				ans[i] = A[k][R];
				printf("Mi elemento %d es el de la posición (%d, %d) y es %d\n", i, k, R, A[k][R]);
				i++;
			}
			R--;
		}
		else if (dir == 2){
			for(k = R; L <= k; k--){
				ans[i] = A[B][k];
				printf("Mi elemento %d es el de la posición (%d, %d) y es %d\n", i, B, k, A[B][k]);
				i++;
			}
			B--;
		}	
		else if (dir == 3){
			for (k = B; T <= k; k--){
				ans[i] = A[k][L];
				printf("Mi elemento %d es el de la posición (%d, %d) y es %d\n", i, k, L, A[k][L]);
				i++;
			}
			L++;
		}
		dir = (dir+1)%4;
	}

	return ans;
}

int main() {
	int R, C, i, j;
	cin >> R >> C;
	vector<vector<int> > A;
	A.resize(R);
	for (i = 0; i < R; i++)
		A[i].resize(C);

	for (i = 0; i < R; i++)
		for(j = 0; j < C; j++)
			cin >> A[i][j];

	vector<int> res = spiral(A);

	for (i = 0; i < res.size(); i++)
		cout << res[i] << " ";

	cout << endl;


}
