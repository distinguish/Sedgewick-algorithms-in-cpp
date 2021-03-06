/*
Program 3.13. List allocation for the Josephus problem

This program for the Josephus problem is an example of a client program
utilizing the list-processing primitives declared in Program 3.12 and
implemented in Program 3.14.
*/

#include <iostream>
#include <chrono>
#include "List.h"
using namespace std;
using namespace std::chrono;

int main(int argc, char *argv[]) {
	steady_clock::time_point t1 = steady_clock::now();
	int i, N = atoi(argv[1]), M = atoi(argv[2]);
	Node t;
	construct(N);
	Node x = newNode(1);
	for (i = 2; i <= N; i++) {
		t = newNode(i);
		insert(x, t);
		x = t;
	}
	while (x != next(x)) {
		for (i = 1; i < M; i++)
			x = next(x);
		deleteNode(remove(x));
	}
	cout << item(x);
	deleteNode(x);
	steady_clock::time_point t2 = steady_clock::now();
	duration<double> time_span = duration_cast< duration<double> >(t2 - t1);
	cout << " N = " << N << " M = " << M << " " 
		<< time_span.count() << " seconds." << endl;
	return 0;
}

/*
977 N = 1000 M = 2 0.000126378 seconds.
3617 N = 10000 M = 2 0.000464187 seconds.
68929 N = 100000 M = 2 0.00369686 seconds.
951425 N = 1000000 M = 2 0.0480642 seconds.
*/
