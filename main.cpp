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
// A. INPUT ✅: yes
// B. OUTPUT ✅: yes
// C. CALCULATIONS ✅: yes
// D. LOGIC and ALGORITHMS ✅: yes
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: yes
// (Optional) Additional tests count: 2


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

int count = 0;
int total_pizzas = 0;
int max_people = 0;
double max_cost = 0.0;
double average = 0.0;

cout << "Welcome to the Pizza Party Statistic Program!" << endl << endl;

bool again = true;
while (again) {

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

// max

max_people = max(max_people, num_people);

max_cost = max(max_cost, total_cost);

total_pizzas = total_pizzas + num_of_pizzas;

count++;


cout << "Do you want to enter more? (y/n): ";
cin >> answer;
answer = tolower(answer);
again = answer == 'y';

cout << endl << endl;
}

// after everything

average = static_cast<double>(total_pizzas) / count;

cout << "Number of entries: " << count << endl;
cout << "Total number of pizzas: " << total_pizzas << endl;
cout << setprecision(1);
cout << "Average number of pizzas: " << average << endl;
cout << "Maximum number of people: " << max_people << endl;
cout << setprecision(2);
cout << "Maximum cost of pizzas: $" << max_cost << endl << endl;

cout << "A pizza a day keeps the doctor away!" << endl;

  return 0;
}


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
int num_people
double slices_per_person
double pizza_cost
char answer

B. OUTPUT
int num_of_pizzas
double cost_of_pizzas
double total_tax
double total_delivery_tax
double total_cost
int count
int total_pizzas
double average
int max_people
double max_cost

C. CALCULATIONS
slices = num_people * slices_per_person
fraction_pizzas = slices / slices_per_pizza
num_of_pizzas = ceil(fraction_pizzas)
cost_of_pizzas = num_of_pizzas * pizza_cost
total_tax = tax * cost_of_pizzas
pizzas_and_tax = cost_of_pizzas + total_tax
total_delivery_tax = delivery_charge * pizzas_and_tax
total_cost = pizzas_and_tax + total_delivery_tax
total_pizzas = total_pizzas + num_of_pizzas
average = static_cast<double>(total_pizzas) / count

D. LOGIC and ALGORITHMS

MESSAGE "Welcome to the Pizza Party Statistic Program!"

MAKE:
tax = 0.07
slices_per_pizza = 8
delivery_charge = 0.2

SET again = true
WHILE again == true {
    PROMPT "Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: "
    INPUT num_people
    INPUT slices_per_person
    INPUT pizza_cost

    // DO CALCULATIONS
    fixed << setprecision(2);
    DISPLAY "Number of pizzas: " << num_of_pizzas
    DISPLAY "Cost of pizzas: $" << cost_of_pizzas
    DISPLAY "Tax: $" << total_tax
    DISPLAY "Delivery: $" << total_delivery_tax
    DISPLAY "Total Cost: $" << total_cost

    // Update total pizzas
    
    max_people = max(max_people, num_people)
    max_cost = max(max_cost, total_cost)

    count++ // incremement amount of entry

    PROMPT "Do you want to enter more? (y/n): "
    INPUT answer
    CONVERT answer to lowercase

} END WHILE

// Calculate average

DISPLAY "Number of entries: " << count
DISPLAY "Total number of pizzas: " << total_pizzas
DISPLAY "Average number of pizzas: " << average
DISPLAY "Maximum number of people: " << max_people
DISPLAY "Maximum cost of pizzas: $" << max_cost

MESSAGE "A pizza a day keeps the doctor away!"


SAMPLE RUNS

Welcome to my Pizza Party Statistics program!

Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: 10  2.6  10.50

Number of pizzas: 4
Cost of pizzas:  $42.00
Tax:             $2.94
Delivery:        $8.99
Total Cost:      $53.93

Do you want to enter more (y/n): y

Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: 9   2.5   10.95

Number of pizzas: 3
Cost of pizzas:  $32.85
Tax:             $2.30
Delivery:        $7.03
Total Cost:      $42.18

Do you want to enter more (y/n): y

Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: 14   3.2   14.95

Number of pizzas: 6
Cost of pizzas:  $89.70
Tax:             $6.28
Delivery:        $19.20
Total Cost:      $115.17

Do you want to enter more (y/n): n

Number of entries: 3
Total number of pizzas: 13
Average number of pizzas: 4.3
Maximum number of people: 14
Maximum cost of pizzas: $115.17

Thank you for using my program!
*/