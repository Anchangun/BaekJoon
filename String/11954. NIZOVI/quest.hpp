#pragma once
/*
An array in a certain programming language is defined in the following way:

The beginning and the end of an array is denoted by an open and closed curly bracket, respectively.
Inside the curly braces, there are (possibly even 0) values separated by a comma (there is no comma after the last value in the array).
Each value can be a word (an array of lowercase letters of the English alphabet) or another array.
Examples of correctly defined arrays are: {}, {a,b,c}, {abc,znj,{novi,niz},pozz}.
Recently, you’ve noticed that the programming language does not throw an error if you do not place the appropriate number of spaces and new lines before or after the curly braces or the commas. Given the fact that you too mind the values being so „squished“ together, you’ve decided to get to work and modify the shape of the array in the following way:

Each value that is not an array or denotes the beginning or the end of the array (curly braces) will be in its own line.
The commas are „connected“ with the value located directly before them and there is a new line after each comma.
After the curly bracket denoting the beginning of the array, the indentation of the content increases (shifting the output to the right) for 2 spaces.
Before the curly bracket denoting the end of the array ’}’, the indentation of the content decreases (shifting the output to the left) for 2 spaces.
입력
The first line of input contains an array of characters S (1 ≤ |S| ≤ 1500), representing the array from the task.

출력
The output must consist of the modified version of the array from the task.

예제 입력 1
{abc,ono,sto}
예제 출력 1
{
  abc,
  ono,
  sto
}
예제 입력 2
{}
예제 출력 2
{
}
예제 입력 3
{znakovi}
예제 출력 3
{
  znakovi
}
예제 입력 4
{a,b,{c,d},e,{}}
예제 출력 4
{
  a,
  b,
  {
    c,
    d
  },
  e,
  {
  }
}
*/