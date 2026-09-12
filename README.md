# mercenary
A lightning-fast, header-only C++17 library to effortlessly format boolean values into custom text layouts.
## Features
* 'binary(x)'  -> Outputs '1' or '0'
* 'normal(x)'  -> Outputs 'true' or 'false'
* 'normalCaps(x)' -> Outputs 'True' or 'False'
## Installation
Since 'mercenary' is **header-only**, you don't need to build or compile anything.
1. Download 'mercenary.h' from my [v1.0.0 Release](https://github.com).
2. Drop it into your project's 'include' folder.
## Quick Usage Example
'''cpp
#include <iostream>
#include "include/mercenary.h"
using namespace std;
int main()
{
  bool x=false;
  cout<< binary(x)<<"\n";  //Outputs: 0
  cout<< normal(x)<<"\n";  //Outputs: false
  cout<< normalCaps(x)<<"\n"; //Outputs: False
  return 0;
}
'''
#License
This project is licensed under the MIT License.
