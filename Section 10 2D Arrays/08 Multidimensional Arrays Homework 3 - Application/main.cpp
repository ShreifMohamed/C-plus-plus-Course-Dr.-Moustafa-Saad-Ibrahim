#include <iostream>
#include <string>
using namespace std;


int main() {
	
    // Homework 3: Tic Tac Toe
	
	int n;
	std::cout << "Enter grid dimension: ";
	std::cin >> n;
	int grid[n][n] {0};

	int row_step[n], coulm_step[n], direction_row[n], direction_coulm[n];

	int verify{0};

	// Add row n positions to verify
	for (size_t r{0}; r < n; ++r)
		row_step[verify] = r, coulm_step[verify] = 0, direction_row[verify] = 0, direction_coulm[verify++] = 1;
	
	// Add col n positions to verify
		for (size_t c{0}; c < n; ++c)
		row_step[verify] = 0, coulm_step[verify] = c, direction_row[verify] = 1, direction_coulm[verify++] = 0;

	// Add diagonal 1
	row_step[verify] = 0, coulm_step[verify] = 0, direction_row[verify] = 1, direction_coulm[verify++] = 1;	
	// Add diagonal 2
	row_step[verify] = 0, coulm_step[verify] = n - 1, direction_row[verify] = 1, direction_coulm[verify++] = -1;

	int turn {0};	// 0 for x, 1 for o. Don't get confused with grid values

	int steps {0};
	while (true) {
		if (steps == n*n) {
			std::cout <<"Tie\n";
			break;
		}
		char symbol {'x'};
		if (turn == 1)
			symbol = 'o';

		std::cout << "Player " << symbol << " turn. Enter empty location (r, c): ";
		int r, c;
		cin >> r >> c;

		r -= 1, c -= 1;

		if (r < 0 || r >= n || c < 0 || c >= n || grid[r][c] != 0) {
			std::cout << "Invalid input. Try again\n";
			continue;
		}
		grid[r][c] = turn + 1;

		// print the grid
		for (int r = 0; r < n; ++r) {
			for (int c = 0; c < n; ++c) {
				char ch = '.';
				if (grid[r][c] == 1)
					ch = 'x';
				else if (grid[r][c] == 2)
					ch = 'o';
				cout << ch;
			}
			cout << "\n";
		}

		// Check win status
		for (int check = 0; check < verify; ++check) {
			int r = row_step[check], c = coulm_step[check], rd = direction_row[check], cd = direction_coulm[check];
			int cnt = 0, first = grid[r][c];

			if (first == 0)
				continue;

			for (int step = 0; step < n; ++step, r += rd, c += cd)
				cnt += grid[r][c] == first;

			if (cnt == n) {
				cout << "Player " << symbol << " won\n";
				return 0;
			}
		}

		turn = !turn;	// 0 be 1, 1 be 0 = flip player
		steps++;
	}

return 0;
}
