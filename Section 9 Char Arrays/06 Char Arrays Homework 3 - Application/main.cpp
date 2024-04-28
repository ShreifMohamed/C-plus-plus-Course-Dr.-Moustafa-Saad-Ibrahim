#include <iostream>
#include <string>
using namespace std;

int main() {
	
    const int max {10000};

    string name[max], gender[max];
    int age[max];
    double salary[max];
    int added {0};

    while (true) {
        int choise {-1};
        std::cout << "Enter your choice: \n"
             << "1) Add new employee\n"
             << "2) Print all employees\n"
             << "3) Delete by age\n"
             << "4) Update Salary by name\n";

        std::cin >> choise;

        if (!(choise >= 1 && choise <= 4)) {
            std::cout << "Invalid choice. Try again \n";
            continue;
        }
		string emp_name;
		bool is_found{false};

        switch (choise) {
            case 1:
                std::cout << "Enter Name : ";         std::cin >> name[added];      
                std::cout << "Enter age : ";          std::cin >> age[added];       
                std::cout << "Enter salary : ";       std::cin >> salary[added];    
                std::cout << "Enter gender (M/F): ";  std::cin >> gender[added];    
                ++added;
                break;
            case 2:
                std::cout << "******************************\n";    
                for (size_t i{0}; i < added; ++i){
                    if (age[i] != -1){
                        std::cout << name[i] << " " << age[i] << " " << salary[i] << " " << gender[i] << "\n";
                    }
                }
                break;
            case 3:
                int start, end;
                std::cout << "Enter start and end age\n";
                std::cin >> start >> end;    
                for (size_t i{0}; i < added; ++i){
                    if (start <= age[i] && age[i] <= end){
                        age[i] = -1;
                    }
                }
                break;
            case 4:
                double newsalary;
                std::cout << "Enter the name and salary \n";
                std::cin >> emp_name >> newsalary;    
                for (size_t i{0}; i < added; ++i){
                    if (age[i] != -1 && name[i] == emp_name){
                        is_found = true;
						salary[i] = newsalary;
						break;
                    }
                }
                if(!is_found)
					std::cout << "No employee with this name! \n";
            default:
                std::cout << "Invalid choice. \n";
                break;
        }
    }
	
	
    return 0;
}
