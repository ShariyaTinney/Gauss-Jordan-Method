📐 Gauss Elimination Method in C++

📌 Overview
This project implements the "Gauss Elimination Method" using "C++" to solve a system of linear equations represented in augmented matrix form.
Gauss Elimination is a direct numerical method for solving systems of linear equations by transforming the augmented matrix into an "upper triangular matrix", then solving via "back substitution".


📘 Equation Form
A system of equations like:

a₁₁x₁ + a₁₂x₂ + ... + a₁ₙxₙ = b₁  
a₂₁x₁ + a₂₂x₂ + ... + a₂ₙxₙ = b₂  
...  
aₙ₁x₁ + aₙ₂x₂ + ... + aₙₙxₙ = bₙ  

is represented as an augmented matrix [A],[B], and the goal is to find the values of x₁, x₂, ..., xₙ.



🎯 Features
✅ Solves systems of linear equations using "Gauss Elimination"
✅ Accepts augmented matrix input of size "n x (n+1)"
✅ Performs forward elimination and back substitution
✅ Displays solutions with 6-digit precision
✅ Simple and readable "C++" code using modern syntax



🛠 Requirements
* A C++ compiler (e.g., g++, clang++)
* A text editor or IDE such as Visual Studio Code, CLion, Code::Blocks, etc.


🚀 How to Run

1.Clone the repository or download the source code:
   git clone https://github.com/YOUR_USERNAME/gauss-elimination-cpp.git
   cd gauss-elimination-cpp
  
2.Compile the code:
   g++ main.cpp -o gauss
  

3. Run the executable:
   ./gauss
 


🧠 How It Works
1. The program accepts an augmented matrix of size "n x (n+1)".
2. It performs "forward elimination" to convert the matrix into "upper triangular form".
3. Once upper triangular, "back substitution" is used to solve for each variable.
4. The solution is printed with proper formatting.



📁 File Structure
gauss-elimination-cpp/
├── main.cpp      # Main C++ program implementing Gauss Elimination
└── README.md     # This documentation file



📤 Sample Output
👇 Input
Enter the size of matrix: 3

Enter the elements of the augmented matrix row-wise:
A[1][1]: 2
A[1][2]: -1
A[1][3]: 3
A[1][4]: 9
A[2][1]: 1
A[2][2]: 1
A[2][3]: 1
A[2][4]: 6
A[3][1]: 3
A[3][2]: -1
A[3][3]: -1
A[3][4]: 2

✅ Output
The solution is:
x1 = 1.000000
x2 = 2.000000
x3 = 3.000000



🔧 Customization
You can change the following as needed:
✅ Matrix size (n) to solve a system with more or fewer variables
✅ Elements of the matrix to solve different systems
✅ Output formatting (`setprecision`) to adjust decimal precision



🤝 Contributions
Contributions are welcome!
To contribute:
* Fork the repository
* Create a new branch
* Make your changes
* Submit a "Pull Request"



📧 Contact
For feedback or questions, feel free to contact:
"Shariya Tinney"— \[shariyatinney.gmail@example.com](mailto:shariyatinney.gmail@example)]

> ⚠️ "Don’t forget to replace" 'YOUR_USERNAME', 'Your Name', and 'your.email@example.com' with your actual details before uploading to GitHub.


📚 Resources
* [Gauss Elimination – Wikipedia](https://en.wikipedia.org/wiki/Gaussian_elimination)
* [C++ iostream Reference](https://cplusplus.com/reference/iostream/)
* [Numerical Methods Notes](https://nptel.ac.in/courses/111/107/111107105/)


🧩 Language
![C++](https://img.shields.io/badge/C%2B%2B-100%25-blue)



💡 Future Improvements
* Add "partial pivoting" for improved numerical stability
* Allow "dynamic memory allocation" for larger matrix sizes
* Support reading input from a file
* Include "error detection| for singular matrices


