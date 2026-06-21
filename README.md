# Smart Campus Management System (SCMS)

## Project Info
- **Student**: Muneeb Qurashi
- **Roll No**: 25-CS-126
- **Course**: Object-Oriented Programming (CS-202)
- **Institution**: HITEC University Taxila

## Project Description
Smart Campus Management System (SCMS) is a C++ based application designed to streamline and automate key administrative operations of a university campus. The system provides a unified interface to manage student records, faculty information, course enrollment, library catalogs, fee tracking, and hostel allocations in a structured and fully object-oriented manner. Built with C++17 standards, it features memory safety through smart pointers, error handling with custom exceptions, and a modular architecture to simulate professional software development workflows.

## OOP Concepts Demonstrated
1. **Classes & Objects**: Used throughout the project (e.g., `Student`, `Faculty`, `Course`) to model real-world campus entities.
2. **Encapsulation**: Keeping data members private and exposing them through public getters and setters across all classes.
3. **Constructors**: Parameterized and default constructors used to initialize member variables (e.g., `Person`, `Course`, `FeeRecord`).
4. **Destructors**: Virtual destructors implemented (e.g., `Library`, `HostelManager`) to clean up dynamic memory safely.
5. **Single Inheritance**: `Student` inherits directly from the base class `Person`.
6. **Multi-level Inheritance**: Extending the student hierarchy (e.g., `GradStudent` inheriting from `Student` which inherits from `Person`).
7. **Multiple Inheritance**: `HostelManager` inherits from both `Accommodation` and `Reportable`.
8. **Virtual Inheritance**: Used to resolve the Diamond Problem in multiple inheritance (e.g., in `HostelManager`).
9. **Abstract Classes**: `Person`, `LibraryItem`, and `Accommodation` define pure virtual interfaces.
10. **Pure Virtual Functions**: Declared as `= 0` in abstract base classes to enforce overriding in derived classes (e.g., `displayInfo()`).
11. **Runtime Polymorphism**: Invoking `displayInfo()` dynamically using base pointers to objects of derived classes.
12. **Compile-Time Polymorphism**: Implemented via function and operator overloading.
13. **Operator Overloading**: Overloaded `==` (compare courses), `<<` (stream output), and `-=` (deduct fee balance) operators.
14. **Friend Functions**: Declared `operator<<` as a friend function to allow custom formatting of class outputs.
15. **Static Members**: `Invoice::invoiceCounter` tracks and auto-increments invoice IDs globally.
16. **Copy Constructor (Deep Copy)**: Implemented in `FeeRecord` to handle deep copy semantics.
17. **Copy Assignment Operator**: Implemented in `FeeRecord` to prevent shallow copy issues.
18. **Move Semantics (Rule of Five)**: Implemented move constructor and move assignment operator for `Invoice`.
19. **Function Templates**: `searchByTitle<T>()` in `Library` searches across books and journals generically.
20. **Class Templates**: `Library<T>` is a template class holding collection of generic items.
21. **STL Containers**: Extensive usage of `std::vector`, `std::map`, and `std::set` for data management.
22. **Exception Handling**: Custom exception classes (`CapacityExceededException`, `OverdueException`) handled with `try/catch`.
23. **File I/O (fstream)**: Saving and loading the library catalog data to/from external `.txt`/`.csv` files.
24. **Namespaces**: `SCMS::Reports` and `SCMS::Utils` encapsulate utility and reporting functions.
25. **Smart Pointers**: Utilizing `std::unique_ptr` and `std::shared_ptr` for memory management in reporting and hostel modules.

## Modules
1. **Person Module**: Manages records of Students, Faculty, and Staff with dynamic runtime polymorphism.
2. **Course Module**: Handles course offerings, credit hours, capacity verification, and enrollment of students.
3. **Library Module**: Manages a catalog of books and journals with support for issuing, returning, and overdue calculations.
4. **Finance Module**: Tracks invoices and payments, managing student balances and using Rule of Five for move mechanics.
5. **Hostel Module**: Allocates and vacates rooms in blocks, resolving multiple inheritance diamond problems.
6. **Reports Module**: Generates consolidated campus reports using advanced features like Lambda expressions and smart pointers.

## How to Compile & Run
Compile the application with any C++17 compliant compiler:
```bash
g++ -std=c++17 -Wall -Isrc src/main.cpp -o scms
./scms
```

## UML Class Diagram
![Class Diagram](docs/class_diagram.png)

## GitHub Repository
https://github.com/25-cs-126-sys/HITEC-OOP-SCMS-25-CS-126