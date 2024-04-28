#include <iostream>
#include <string>
using namespace std;


int main() {
	
    // Problem #1: How many primes
    /*
	bool is_prime[100][100] {0};
	int row, coulm, value;

	std::cin >> row >> coulm;
	for(size_t i{0};i < row; ++i){
		for (size_t j{0}; j < coulm; ++j){
			std::cin>> value;

			if (value <= 1)
				continue;

			is_prime[i][j] = 1;
			for (size_t k{2}; k < value; ++k) {
				is_prime[i][j] = 0;
				break;
			}
		}
	}

	int q, frist, second, third, fourth;
	std::cin >> q;
	while (q--) {
		
		std::cin >> frist >> second >> third >> fourth;
		int count{0};

		for (size_t i{frist}; i <= frist + third -1; ++i) {
			for (size_t j{second}; j <= second + fourth -1; ++j)
				count += is_prime[i][j];
		}
		std::cout << count << "\n";
	}
	*/
	// Problem #2: Find mountains
	/*
	int arr[100][100];
	int row, coulm;

	std::cin >> row >> coulm;
	for(size_t i{0};i < row; ++i){
		for (size_t j{0}; j < coulm; ++j){
			std::cin >> arr[i][j];
		}
	}

	int di[8] {1, 0, -1, 0, -1, 1, -1, 1};
	int dj[8] {0, 1, 0, -1, -1, 1, 1, -1};
	
	for (size_t i{0}; i < row; ++i) {
		for (size_t j{0}; j < coulm; ++j){
				bool valid_mountain {true};  // if no neighbors, will remain true!

			// check the 8 neighbors using dir array
			for (size_t d {0}; d < 8 && valid_mountain; ++d) {
				int ni = i + di[d];
				int nj = j + dj[d];

				if (ni < 0 || ni >= row || nj < 0 || nj >= coulm)
					continue;	// outside borders

				if (arr[i][j] <= arr[ni][nj]) {
					valid_mountain = false;
					break;
				}
			}

			if (valid_mountain)
				std::cout << i << " " << j << "\n";
		}
	}
	*/
	// Problem #3: Active Robot
	/*
	int num_row, num_coulm, row{0}, coulm{0};

	std::cin >> num_row >> num_coulm;
	
	// Direction from 1 to 4: up, right, down, left
	int row_d[4]   { -1, 0, 1, 0 };
	int coulm_d[4] { 0, 1, 0, -1 };

	int k;
	std::cin >> k;

	while (k--) {
		int direction, steps;
		std::cin >> direction >> steps;
		--direction;
		row = (row + row_d[direction] * steps) % num_row;
		coulm = (coulm + coulm_d[direction] * steps) % num_coulm;
		
		if (row < 0)
			row += num_row;

		if (coulm < 0)
			coulm += num_coulm;


		std::cout << row << " " << coulm << "\n";
	}
	*/
	// Problem #4: Flatten 3D Array 
	
	if (false) {
		int idx = 0;
		for (int dep = 0; dep < 3; ++dep)
			for (int row = 0; row < 4; ++row)
				for (int col = 0; col < 5; ++col)
					std::cout << idx++ << " = " << dep << " " << row << " " << col
							<< "\n";
	}

	int D, R, C, type;
	int d, r, c, idx;

	std::cin >> D >> R >> C >> type;

	int Db = R * C;
	int Rb = C;

	if (type == 1) {
		std::cin >> d >> r >> c;
		idx = d * Db + r * Rb + c * 1;
		std::cout << idx << "\n";
	} else {
		std::cin >> idx;

		// r * Rb + c * 1 < Db
		d = idx / Db;

		// Remove d part, then extract r
		r = (idx % Db) / Rb;

		c = (idx % Db) % Rb;

		std::cout << d << " " << r << " " << c << "\n";
	}

return 0;
}
