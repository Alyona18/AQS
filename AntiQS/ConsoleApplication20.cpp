
#include "pch.h"
#include <iostream>
#include <fstream>
#include <algorithm>

extern int c = 0;

using namespace std;

void antiqs(int N, int *a) {
	for (int i = 0; i < N-1 ; i++) {
		swap(a[i], a[i / 2]);
	};
}


int main()
{

	ifstream fin("input.txt");
	int N;
	fin >> N;
	fin.close();
	int *A;
	A = new int[N];
	for (int i=0; i < N; i++) {
		A[i] = i + 1;
	};
	antiqs(N, A);    
	ofstream fout("output.txt");
	for (int i = 0; i < N; i++) {
		fout << A[i]<< endl;
	};
	fout.close();
	return 0;
}
