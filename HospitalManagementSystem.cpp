#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Patient {
    string name;
    int age;
    string gender;
    string disease;
    string appointmentDate;
};

struct Doctor {
    string name;
    string specialization;
    string visitingTime;
    int roomNumber;
    int floor;
    double visitingCharge;
};


struct Medicine {
    string name;
    double price;
};


vector<Patient> patients;
vector<Doctor> doctors;
vector<Medicine> medicines;


void addPatient() {
    Patient p;
    cout << "\nEnter Patient Name: ";
    cin.ignore();
    getline(cin, p.name);
    cout << "Enter Age: ";
    cin >> p.age;
    cout << "Enter Gender: ";
    cin >> p.gender;
    cout << "Enter Disease: ";
    cin >> p.disease;
    cout << "Enter Appointment Date (DD/MM/YYYY): ";
    cin >> p.appointmentDate;

    patients.push_back(p);
    cout << "Patient Added Successfully!\n";
}


void addDoctor() {
    Doctor d;
    cout << "\nEnter Doctor Name: ";
    cin.ignore();
    getline(cin, d.name);
    cout << "Enter Specialization: ";
    getline(cin, d.specialization);
    cout << "Enter Visiting Time: ";
    getline(cin, d.visitingTime);
    cout << "Enter Room Number: ";
    cin >> d.roomNumber;
    cout << "Enter Floor: ";
    cin >> d.floor;
    cout << "Enter Visiting Charge: ₹";
    cin >> d.visitingCharge;

    doctors.push_back(d);
    cout << "Doctor Added Successfully!\n";
}


void addMedicine() {
    Medicine m;
    cout << "\nEnter Medicine Name: ";
    cin.ignore();
    getline(cin, m.name);
    cout << "Enter Price (without GST): ₹";
    cin >> m.price;

    medicines.push_back(m);
    cout << "Medicine Added Successfully!\n";
}

void displayPatients() {
    cout << "\n---- PATIENT DETAILS ----\n";
    for (const auto& p : patients) {
        cout << "Name: " << p.name << ", Age: " << p.age << ", Gender: " << p.gender
             << ", Disease: " << p.disease << ", Appointment Date: " << p.appointmentDate << "\n";
    }
}


void displayDoctors() {
    cout << "\n---- DOCTOR DETAILS ----\n";
    for (const auto& d : doctors) {
        cout << "Name: " << d.name << ", Specialization: " << d.specialization
             << ", Visiting Time: " << d.visitingTime << ", Room: " << d.roomNumber
             << ", Floor: " << d.floor << ", Visiting Charge: ₹" << d.visitingCharge << "\n";
    }
}


void displayMedicines() {
    cout << "\n---- MEDICINE DETAILS (with 12% GST) ----\n";
    for (const auto& m : medicines) {
        double gst = 0.12 * m.price;
        double total = m.price + gst;
        cout << fixed << setprecision(2);
        cout << "Medicine: " << m.name << ", Price: ₹" << m.price
             << ", GST: ₹" << gst << ", Total Price: ₹" << total << "\n";
    }
}

int main() {
    int choice;

    do {
        cout << "\n=========== HOSPITAL MANAGEMENT SYSTEM ===========\n";
        cout << "1. Add Patient\n";
        cout << "2. Add Doctor\n";
        cout << "3. Add Medicine\n";
        cout << "4. Show All Patients\n";
        cout << "5. Show All Doctors\n";
        cout << "6. Show All Medicines (with GST)\n";
        cout << "0. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addPatient(); break;
            case 2: addDoctor(); break;
            case 3: addMedicine(); break;
            case 4: displayPatients(); break;
            case 5: displayDoctors(); break;
            case 6: displayMedicines(); break;
            case 0: cout << "\n Thank you for using Hospital Management System!\n"; break;
            default: cout << "Invalid Choice! Try Again.\n";
        }

    } while (choice != 0);

    return 0;
}