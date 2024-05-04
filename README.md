    <h1>Student Attendance System</h1>

    <p>
        This project is a simple console-based student attendance system implemented in C++. It allows users to manage student records, take attendance, and view attendance reports.
    </p>

    <h2>Features</h2>
    <ul>
        <li><strong>Add Students:</strong> Add students to the attendance register along with their names and roll numbers.</li>
        <li><strong>Take Attendance:</strong> Take attendance either by student name or roll number and mark them as present or absent.</li>
        <li><strong>Check Attendance:</strong> View a summary of attendance for each student and the overall class attendance.</li>
        <li><strong>Remove Students:</strong> Remove a student from the attendance register.</li>
        <li><strong>Reset Data:</strong> Reset all student data including names, roll numbers, and attendance records.</li>
    </ul>

    <h2>How to Use</h2>
    <ol>
        <li><strong>Compilation:</strong> Compile the <code>main.cpp</code> file using a C++ compiler (e.g., <code>g++ -o attendance main.cpp</code>).</li>
        <li><strong>Run:</strong> Execute the compiled program (<code>./attendance</code> on Unix/Linux or <code>attendance.exe</code> on Windows).</li>
        <li><strong>Menu Options:</strong> Follow the on-screen menu to perform various operations like adding students, taking attendance, etc.</li>
    </ol>

    <h2>Usage Example</h2>
    <ol>
        <li><strong>Adding Students:</strong>
            <ul>
                <li>Enter the number of students to add.</li>
                <li>Input each student's name and 4-digit roll number.</li>
            </ul>
        </li>
        <li><strong>Taking Attendance:</strong>
            <ul>
                <li>Choose to take attendance by either name or roll number.</li>
                <li>Enter 'Y' for present and 'N' for absent for each student.</li>
            </ul>
        </li>
        <li><strong>Checking Attendance:</strong>
            <ul>
                <li>View a detailed report showing the attendance status of each student.</li>
            </ul>
        </li>
        <li><strong>Removing Students:</strong>
            <ul>
                <li>Remove a student by entering their name.</li>
            </ul>
        </li>
        <li><strong>Resetting Data:</strong>
            <ul>
                <li>Reset all student data including names, roll numbers, and attendance records.</li>
            </ul>
        </li>
    </ol>

    <h2>Notes</h2>
    <ul>
        <li>The system uses arrays to store student data and attendance records.</li>
        <li>Input validation is implemented for roll numbers and user choices.</li>
    </ul>

    <h2>Dependencies</h2>
    <p>This project requires a C++ compiler to build and run.</p>

    <h2>Contribution</h2>
    <p>Contributions and improvements are welcome! Feel free to submit issues and pull requests.</p>