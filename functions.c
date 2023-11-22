#include <stdio.h>

/* Function1: Prints the sum of the even numbers in interval [1, b], b is an
 * integer number which is taken by user.
 */
void function1() {

  int n, sum = 0;

  printf("Enter a positive integer: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; ++i) {
    if (i % 2 == 0) {
      sum += i;
    }
  }
  printf("Sum = %d", sum);
}

/* Function2: Prints the character type which typed by user.

  */
void function2() {
  char ch;
  // Get user input
  printf("Enter a character: ");
  scanf(" %c", &ch);

  if (((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
    printf("%c is a letter.\n", ch);
  } else if (ch >= '0' && ch <= '9') {
    printf("%c is a number.\n", ch);

  } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=' ||
             ch == '>' || ch == '<' || ch == '&') {
    printf("%c is a symbol.\n", ch);

  } else {
    printf("%c is not a letter, number, or symbol.\n", ch);
  }
}

// Function3: Prints positive, negative or zero.

void function3() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  if (n > 0) {
    printf("%d is positive.\n", n);

  } else if (n < 0) {
    printf("%d is negative.\n", n);
  } else {
    printf("%d is zero.\n", n);
  }
}

void max(int x, int y, int z) {

  if (x > y && x > z) {
    printf("Max number: %d\n", x);
  } else if (y > x && y > z) {
    printf("Max number: %d\n", y);
  } else {
    printf("Max number: %d\n", z);
  }
}

void day() {
  int dayNumber;

  // Get user input for the day number
  printf("Enter a day number (1-7): ");
  scanf("%d", &dayNumber);

  // Use switch case to print the day of the week name
  switch (dayNumber) {
  case 1:
    printf("Sunday\n");
    break;
  case 2:
    printf("Monday\n");
    break;
  case 3:
    printf("Tuesday\n");
    break;
  case 4:
    printf("Wednesday\n");
    break;
  case 5:
    printf("Thursday\n");
    break;
  case 6:
    printf("Friday\n");
    break;
  case 7:
    printf("Saturday\n");
    break;
  default:
    printf("Invalid day number. Please enter a number between 1 and 7.\n");
    break;
  }
}

void alphabet() {
  for (char ch = 'a'; ch <= 'z'; ++ch) {
    printf("%c ", ch);
  }

  printf("\n");
}

void square_cube() {
  int x;
  printf("Enter a number: ");
  scanf("%d", &x);
  printf("Square of %d is %d\n", x, x * x);
  printf("Cube of %d is %d\n", x, x * x * x);
}

void square() {
  int sum = 0;
  for (int i = 1; i <= 10; i++) {
    sum += i * i;
  }
  printf("Sum of squares from 1 to 10 is: %d\n", sum);
}
// Write a function that selects random numbers from 1 to 6.
void random_numbers() {
  int n;
  printf("Enter the number of random numbers to generate: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    printf("%d ", rand() % 6 + 1);
  }
  printf("\n");
}

/*Solve the factorization of the number entered by the user with a
recursive function.
  */
int factorial_recursive(int n) {
  if (n == 0) {
    return 1;
  }
  return n * factorial_recursive(n - 1);
}
void factorial() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Factorial of %d is %d\n", n, factorial_recursive(n));
}

// Print a sample fibonacci series using a recursive function.
#include <stdio.h>

int fibonacci(int n) {
  if (n <= 1) {
    return n;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacci(int count) {
  for (int i = 0; i < count; i++) {
    printf("%d ", fibonacci(i));
  }
}
void multiplicationTable() {
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
      printf("%d x %d = %d\t", i, j, i * j);
    }
    printf("\n");
  }
}

// Function to calculate the perimeter of a circle
double calculatePerimeter(int radius) {
  double perimeter = 2 * 3.14159 * radius;
  return perimeter;
}

// Function to calculate the area of a circle
double calculateArea(int radius) {
  double area = 3.14159 * radius * radius;
  return area;
}

void periArea() {
  int radius;
  printf("Enter the radius of the circle: ");
  scanf("%d", &radius);
  int request;
  printf("Enter 1 to calculate perimeter or 2 to calculate area: ");
  scanf("%d", &request);
  if (request == 1) {
    double perimeter = calculatePerimeter(radius);
    printf("The perimeter of the circle is: %.2f\n", perimeter);
  } else if (request == 2) {
    double area = calculateArea(radius);
    printf("The area of the circle is: %.2f\n", area);

  } else {
    printf("Invalid request. Please enter 1 or 2.\n");
  }
}

void findOddNumbersAndSum() {
  int terms;
  printf("Enter the number of terms: \n");
  scanf("%d", &terms);
  int count = 0;
  int currentNumber = 1;
  int sum = 0;

  for (int i = 0; count < terms; i++) {
    if (currentNumber % 2 != 0) {
      sum += currentNumber;
      printf("Odd Number %d: %d\n", count + 1, currentNumber);
      count++;
    }
    currentNumber++;
  }

  printf("Sum of the first %d odd numbers is: %d\n", terms, sum);
}

void stars() {
  int n;
  printf("Enter the number of stars: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    printf("* ");
    for (int j = 0; j < i; j++) {
      printf("* ");
    }
    printf("\n");
  }
}

void numberPyramid() {
  int n;
  printf("Enter the number of stars: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d ", j);
    }

    printf("\n");
  }
}

void numberPyramid2() {
  int n;
  printf("Enter the number of stars: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d ", i);
    }

    printf("\n");
  }
}

void subEven() {
  int n, i = 1;
  int result = 0;
  printf("Enter the number: ");
  scanf("%d", &n);
  while (i <= n) {
    printf("%d ", 2 * i);
    result -= 2 * i;
    i++;
  }
  printf("\nResult: %d\n", result);
}

int main() {
  int n = 10; // Number of terms in the Fibonacci series
  // printFibonacci(n);
  // multiplicationTable();
  // findOddNumbersAndSum();
  // stars();
  // numberPyramid2();
  // subEven();
  return 0;
}

