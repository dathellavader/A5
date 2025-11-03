// ------------- FILE HEADER -------------
// Author ✅: Ella Henner
// Assignment ✅: 5
// Date ✅: 11/2/25
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 5
// Participation ✅: 84%
// Challenge ✅: 74%
// Labs ✅: 100%


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅: 1
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <cmath>
#include <cctype>
#include <iomanip>
using namespace std;


// Compile and test
// g++ main.cpp && ./a.out < test.txt && rm ./a.out
int main() {

const double tax = 0.07;
const int slices_per_pizza = 8;
const double delivery_charge = 0.2;

int num_of_pizzas = 0;
double cost_of_pizzas = 0.0;
double total_tax = 0.0;
double total_delivery_tax = 0.0;
double pizzas_and_tax = 0.0;
double total_cost = 0.0;

int num_people = 0;
double slices_per_person = 0.0;
double pizza_cost = 0.0;

char answer = ' ';

cout << "Welcome to my Pizza Party Statistic Program!" << endl << endl;
cout << "Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: ";
cin >> num_people;
cin >> slices_per_person;
cin >> pizza_cost;

// num pizza

double slices = num_people * slices_per_person;
double fraction_pizzas = slices / slices_per_pizza;
num_of_pizzas = ceil(fraction_pizzas);

// cost of pizza

cost_of_pizzas = num_of_pizzas * pizza_cost;

// tax

total_tax = tax * cost_of_pizzas;

// pizza and tax

pizzas_and_tax = cost_of_pizzas + total_tax;

// delivery

total_delivery_tax = delivery_charge * pizzas_and_tax;

// total cost

total_cost = pizzas_and_tax + total_delivery_tax;

// display
cout << endl;
cout << fixed << setprecision(2);
cout << "Number of pizzas: " << num_of_pizzas << endl;
cout << "Cost of pizzas:  $" << cost_of_pizzas << endl;
cout << "Tax:             $" << total_tax << endl;
cout << "Delivery:        $" << total_delivery_tax << endl;
cout << "Total Cost:      $" << total_cost << endl << endl;

cout << "Do you want to enter more? (y/n): " << endl << endl;
cin >> answer;







  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/