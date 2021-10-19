# cpp
C++ Code Examples

## Compilation

To complie the program GNU C++ compiler g++ can be used as shown below in terminal.

```bash
g++ main.cpp -std=c++17
```
To run the program in Linux system like Ubuntu execute as shown below.

```bash
./a.out
```
##### Sort Elements of Array/Vector
###### Array
- Ascending
```c++
int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
int n = sizeof(arr) / sizeof(arr[0]);
sort(arr, arr + n);
```
- Descending
```c++
int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
int n = sizeof(arr) / sizeof(arr[0]);
sort(arr, arr + n, greater<int>());
```
###### Vector
- Ascending
```c++
vector<int> a = { 1, 45, 54, 71, 76, 12 };
sort(a.begin(), a.end());
```
- Descending
```c++
vector<int> a = { 1, 45, 54, 71, 76, 12 };
sort(a.begin(), a.end(), greater<int>());
```
##### Max Element Index on Array/Vector
- Array
```c++
int A[4] = {0, 2, 3, 1};
const int N = sizeof(A) / sizeof(int);

cout << "Index of max element: "
     << distance(A, max_element(A, A + N))
     << endl;
       
cout << "Index of max element: "
     << max_element(A, A + N) - A
     << endl;
     
cout << "Value of max element: "
     << *max_element(A, A+N)
     << endl;
```
- Vector
```c++
vector<int> v = {0, 2, 3, 1};

cout << "Index of max element: "
     << distance(v.begin(), max_element(v.begin(), v.end()))
     << endl;
       
cout << "Index of max element: "
     << max_element(v.begin(), v.end()) - v.begin()
     << endl;

cout << "Value of max element: "
     << *max_element(v.begin(), v.end())
     << endl;
```

## License
[MIT](https://choosealicense.com/licenses/mit/)

<!-- CONTACT -->
## Contact

Abhishek Kumar Sinha - [@_abhisheksinha](https://twitter.com/_abhisheksinha) - email4abhi@gmail.com

Project Link: [https://github.com/AbhishekKumarSinha/cpp](https://github.com/yAbhishekKumarSinha/cpp)

