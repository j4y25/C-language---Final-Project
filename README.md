output screenshot :"https://drive.google.com/drive/folders/1noKP1FOj-0HR2Q_D7dZH13tRurE9ZSqp?usp=sharing"


Q1 — Vowel or Consonant using switch

In this program, we take one character from the user and check whether it is a vowel or consonant using a switch statement. First, we declare a character variable ch and take input using scanf(). The switch(ch) checks the entered character against the vowel cases a, e, i, o, and u. If the character matches any of these cases, the program prints Vowel. If none of the cases match, the default statement executes and prints Consonant. The break statement is used to stop the switch after the correct case is found.

Q2 — Find the Largest Element in a 1D Array

In this program, we find the largest number from a one-dimensional array. First, we create an array containing five numbers and assume that the first element is the largest by writing largest = arr[0]. Then, a for loop starts from the second element and compares each element with largest. If the current array element is greater than largest, we update largest with that value. After checking all five elements, the variable largest contains the biggest number, which is displayed using printf(). For example, if the array contains 10, 20, 30, 40, 50, the largest element is 50.

Q3 — Reverse a String Using a Function

In this program, we reverse a string without using library functions such as strlen() or strrev(). First, we declare a character array to store the string and take the string as input. We create a separate function called reverse() and pass the string to it. Inside the function, the first for loop counts the number of characters until it reaches the null character \0. Then, another for loop starts from the last character and moves backward to the first character, printing each character. For example, if the user enters HELLO, the program prints OLLEH.

Q4 — Square of Each Array Element Using Pointer

In this program, we find the square of every element in a one-dimensional array using a pointer. First, we create an integer array and declare an integer pointer p. We assign p = arr, which makes the pointer point to the first element of the array. A for loop is then used to process every element. *p gives the value stored at the current pointer position, and (*p) * (*p) calculates its square. After printing the square, p++ moves the pointer to the next array element. For example, if the array contains 10, 20, 30, the output will be 100, 400, 900.

Q5 — Pattern Using Nested for Loops

In this program, we print the given number pattern using nested for loops. The outer for loop controls the number of rows, while the inner for loop controls how many numbers are printed in each row. In each row, the same square number is printed multiple times. For example, the first row prints 1 one time, the second row prints 4 two times, the third row prints 9 three times, and so on. The pattern is based on the square of the row number: 1² = 1, 2² = 4, 3² = 9, 4² = 16, and 5² = 25. Therefore, the final pattern contains five rows.
