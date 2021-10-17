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

###### Max Element Index on Array/Vector
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

