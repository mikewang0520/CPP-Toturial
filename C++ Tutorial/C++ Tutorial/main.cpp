//
//  main.cpp
//  C++ Tutorial
//
//  Created by Mike汪 on 2022/4/3.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    //1. String
    //    char str[] = "Hello";
    //    cout << str << endl;
    //    string str = "Helloo";
    //    cout << str << endl;
    
    //2. User input (cin)
    //    int a = 0;
    //    cout << "give a value of: " << endl;
    //    cin >> a;
    //    cout << "a is equal to: " << a <<  endl;
    
    //3. Switch
    //    Switch(detemine variable)
    //    {
    //    case 1:
    //        break;
    //    case 2:
    //        break;
    //    default:
    //        break;
    //    }
    
    //4. Do..while
    //do{}while() will excute once first compared to while(){}
    
    //5. For inside for
//    for (int i = 0; i < 10; i++)
//    {
//        for (int j = 0; j < 10; j++)
//        {
//            cout << "* ";
//        }
//        cout << endl;
//    }
    
    //6. Break & Continue
    //break是跳出循环，continue是忽略它下面的代码重新一轮循环
    
    //7. Goto (not recmanded)
//    goto FLAG;
//    1;
//    2;
//    FLAG;
//    3;
    //jump to excute 3
    
    //8. Array
//    int arr1[5];
//    int arr2[5] = {10, 20, 30, 40, 50};
//    int arr3[] = {0, 1, 2, 3};
//    sizeof(arr1);
//    sizeof(arr1[0]);
//    number of elements = sizeof(arr1) / sizeof(arr1[0]);
//    address of array = arr;
//    address of element = &arr[i];
    
    //9. Bubble sorting
//    int arr[] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
//    cout << "Before: " << endl;
//    for (int i = 0; i < 9; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    for (int i = 0; i < 9 - 1; i++)
//    {
//        for (int j = 0; j < 9 - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//
//    cout << "After: " << endl;
//    for (int i = 0; i < 9; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
 
    //10. 乘法口诀表
//    for(int i = 1; i <= 9; i++)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            cout << j << "*" << i << "=" << j*i << " ";
//        }
//        cout << endl;
//    }
    
    //11. 2D array
//    int arr[num of raw][num of cloum];
//    float arr[2][3] = {1.1, 1.2, 1.3, 2.1, 2.2, 2.3};
//    float arr[2][3] =
//    {
//        {1.1, 1.2, 1.3},
//        {2.1, 2.2, 2.3}
//    };
    
    //12. Pointer
    //points to an address
//    int a = 10;
//    int *p;
//    p = &a;
//    cout << p << endl;
//    //dereference
//    *p = 100;
//    cout << a << endl;
    //sizeof(p) = 4 under 32bit operating system (64:8)
    
    //13. Null pointer
//    int *p = NULL;
//    *p = 100; //wrong, cannot be accessed, because it is within 0-255, reserved for system
    
    //14. Wild pointer
//    int *p = (int *)0x1100; //wrong, memo cannot access
//    cout << *p << endl;
    
    //15. Const (+pointer, +variable, or +both)
//    const int *p = &a; //the address can be changed, value in it cannot
//    int * const p = &a; //the value in it can be changed, address cannot
//    const int * const p = &a; //the value and address cannot be changed
    
    //16.
    
    
    //system("pause");
    return 0;
}
