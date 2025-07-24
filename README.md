🏥 Hospital Management System (C++)

📌 Project Overview

The Hospital Management System is a console-based application built using C++, designed to streamline and simplify the core operations of a hospital. It allows hospital staff to efficiently manage patient records, doctor details, appointments, medications, and billing. This system ensures quick access to information and reduces manual paperwork by storing data securely using file handling techniques.

This project demonstrates the use of Object-Oriented Programming (OOP) principles such as encapsulation, abstraction, and modular design, ensuring the code is easy to maintain and expand.


---

💻 Technologies Used

Component	Description

C++	Core programming language
OOP (Object-Oriented Programming)	Used for designing real-world entities like Patient, Doctor, etc.
Input/Output (cin/cout)	User interaction through the terminal
File Handling	Stores and retrieves data persistently
Bill Calculation	Automatically calculates total charges including doctor visits and medicines



---

✅ Features

👨‍⚕ Doctor Management

Add/view doctor details (name, specialization, room number, floor)

Visiting time and charges

View available doctors by department


🧑‍🤝‍🧑 Patient Management

Add/view patient details (name, age, gender, disease)

Manage patient appointments with doctors

Track admitted patients


🗓 Appointment Scheduling

Schedule appointments for patients with available doctors

Display upcoming and past appointments


💊 Medicine Management

Store medicine names, prices, and GST-inclusive billing

Add prescribed medicines to patient records


🧾 Billing System

Automatic calculation of total charges

Room charges

Doctor visit fees

Medicine cost with GST


Generate bill receipts


🗂 File Management

Patient and doctor data are saved to files (no need for databases)

Data is retained between program executions


📋 User-Friendly Interface

Simple menu-driven UI for easy navigation

Console-based interaction for lightweight performance



---

📁 Project Structure

HospitalManagementSystem/
│
├── main.cpp            // Main program with menu system
├── patient.cpp         // Patient class implementation
├── doctor.cpp          // Doctor class implementation
├── appointment.cpp     // Appointment handling
├── billing.cpp         // Billing and medicine management
├── data/               // Folder containing text files for storing data
│   ├── doctors.txt
│   ├── patients.txt
│   └── bills.txt
└── README.md           // Project documentation




🚀 Future Enhancements

GUI integration using Qt or C++/CLI

MySQL or SQLite database integration

Admin login and authentication

Report generation and data analytics





🙌 Contributions

Contributions, suggestions, and feedback are welcome! Feel free to fork the project and enhance its features or UI.




📜 License

This project is open-source and free to use for educational purposes.
