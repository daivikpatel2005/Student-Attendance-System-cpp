# Student Attendance System

This project is a console-based student attendance system implemented in C++. It allows users to manage student records, take attendance, and view attendance reports.

## Features

- **Add Students:** Add students to the attendance register along with their names and roll numbers.
- **Take Attendance:** Record attendance for students by name or roll number (marking them as present or absent).
- **Check Attendance:** View a summary of attendance for each student and the overall class attendance.
- **Remove Students:** Remove a student from the attendance register.
- **Reset Data:** Reset all student data, including names, roll numbers, and attendance records.

## Usage

1. **Compilation:**
   - Compile the `Student Attendance System.cpp` file using a C++ compiler:
     ```bash
     g++ -o attendance_system Student\ Attendance\ System.cpp
     ```

2. **Run:**
   - Execute the compiled program:
     - Unix/Linux:
       ```bash
       ./attendance_system
       ```
     - Windows:
       ```bash
       attendance_system.exe
       ```

3. **Menu Options:**
   - Use the interactive menu to perform operations like adding students, taking attendance, checking attendance, and more.

## Usage Example

### Adding Students
1. Enter the number of students to add.
2. Input each student's name and 4-digit roll number.

### Taking Attendance
- Choose to take attendance by either student name or roll number.
- Input 'Y' for present and 'N' for absent for each student.

### Checking Attendance
- View a detailed report showing the attendance status of each student.

### Removing Students
- Remove a student by entering their name or their roll number.

### Resetting Data
- Reset all student data and attendance records.

## Notes

- The system utilizes arrays for storing student data and attendance records.
- Input validation ensures correctness of roll numbers and user choices.

## Dependencies

This project requires a C++ compiler to build and run.

## Contributions

Contributions and improvements are welcome! Feel free to submit issues.
