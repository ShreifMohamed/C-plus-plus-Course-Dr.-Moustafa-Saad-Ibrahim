#include <iostream>
#include <string>
using namespace std;

// Global varibles
const int max_specializetion {20};
const int max_queue {5};

string names        [max_specializetion+1][max_queue+1];
int    status       [max_specializetion+1][max_queue+1]; // 0 regular, 1 urgent
int    queue_length [max_specializetion+1];              // for each specialization: how many patients so far

// Functions used in Hospital System
// Display the choices to the user
void menu() {
	std::cout << "Enter your choice : \n" 
		      << "1) Add new patient\n"
			  << "2) Print all patients\n"
			  << "3) Get next patient\n"
			  << "4) Exit\n"  ;
}
// Move each patient to the left. E.g if patient in position 5, it will be in 4
// Help in removing patient
void shift_left(int spec_number, string names_sp[], int status_sp[]) {
	int length {queue_length[spec_number]};
	for (int i{1}; i < length; ++i) {
		names_sp[i-1] = names_sp[i];
		status_sp[i-1] = status_sp[i];
	}
	queue_length[spec_number]--;
}
// Move each patient to the right. E.g if patient in position 5, it will be in 6
// Help in adding patient
void shift_right(int spec_number, string names_sp[], int status_sp[]) {
	int length {queue_length[spec_number]};
	for (int i{length - 1}; i >= 0; --i) {
		names_sp[i+1] = names_sp[i];
		status_sp[i+1] = status_sp[i];
	}
	queue_length[spec_number]++;
}
// Add a new patient
bool addd_new_patient() {
	int spec_number; string name; int st;
	
	std::cout << "Enter specialization, name, status: "; 
	std::cin >> spec_number >> name >> st;
	
	int pos {queue_length[spec_number]};
	if (pos >= max_queue){
		std::cout << "Sorry can't add more patients for this specialization\n";
		return false;
	}

	switch (st) {
	case 0: // regular, add to end
			names[spec_number][pos] = name;
			status[spec_number][pos] = st;
			queue_length[spec_number]++;
			break;
	case 1: // urgent, add to begin. 
			shift_right(spec_number, names[spec_number], status[spec_number]);
			names[spec_number][0] = name;
			status[spec_number][0] = st;
			break;
	default:
		break;
	}
	return true;
}
// Print all patients in specialization
void print_patient(int spec_number, string names_sp[], int status_sp[]) {
	int length {queue_length[spec_number]};
	if (length == 0)
		return;
	
	std::cout << "There are " << length << " patients in specialization " << spec_number << "\n";
	for (size_t i{0}; i < length; ++i) {
		std::cout << names_sp[i] << " ";
		if (status_sp[i])
			std::cout << "urgent\n";
		else
		std::cout << "regular\n";
	}
	std::cout << "\n";
}

void print_patients() {
	std::cout << "******************************\n";
	for (size_t spec{0}; spec < max_specializetion; ++spec) {
		print_patient(spec, names[spec], status[spec]);
	}
}
// Get next patient 
void get_next_patient() {
	std::cout << "Enter specialization: ";
	int spec_number;
	std::cin >> spec_number;

	int length {queue_length[spec_number]};

	if (length == 0){
		std::cout << "No patients at the moment. Have res, Dr\n";
		return;
	}
	// frist patient goes to Dr
	std::cout << names[spec_number][0] << " Please go with the Dr\n";
	// Removeing the patient in postion 0
	shift_left(spec_number, names[spec_number], status[spec_number]);
}
// The main System
void Hospital_system() {
	int flag {true};
	while(flag) {
		menu();
		int choice;
		std::cin >> choice;
		switch (choice) {
		case 1:
				addd_new_patient();
				break;
		case 2:
				print_patients();
				break;
		case 3:
				get_next_patient();
				break;
		case 4:
				std::cout << "Bye Bye \n";
				flag = false;				
				break;	
		default:
				std::cout << "Invalid choice. please try again. \n";
			break;
		}
	}
}

int main() {

	Hospital_system();

return 0;
}