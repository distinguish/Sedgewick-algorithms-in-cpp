/*
4.50 Write a client that picks numbers for a lottery by putting the numbers 1
through 99 on a random queue, then prints the result of removing five of them.
*/

#include "random_queue.cc"

#include <iostream>
#include <string>

using namespace std;

int main() {
	int len = 99;
	
	RandomQueue<int> random_queue(len);
	
	for (int i = 1; i <= len; ++i) {
		random_queue.Push(i);
	}
	for (int i = 0; i < 5; ++i) {
		cout << "pop = " << random_queue.Pop() << endl;
		cout << "array = ";
		random_queue.Dump();
		cout << endl;
	}
	
	return 0;
}

/* 
pop = 77 
array = 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27
28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53
54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 99 78 79
80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98

pop = 50
array = 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27
28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 98 51 52 53
54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 99 78 79
80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97

pop = 27
array = 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 97
28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 98 51 52 53
54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 99 78 79
80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96

pop = 75
array = 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 97
28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 98 51 52 53
54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 96 76 99 78 79
80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95

pop = 86
array = 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 97
28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 98 51 52 53
54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 96 76 99 78 79
80 81 82 83 84 85 95 87 88 89 90 91 92 93 94
*/
