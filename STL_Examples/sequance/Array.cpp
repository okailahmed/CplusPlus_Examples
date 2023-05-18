#include <iostream>
#include <array>
using namespace std;

/*===============================================*/
//      Iterartor 
//      1-pointer like objects  
//      2-used to access element by therir position   
//      3-provide overloaded operator ++,-- *
//      4-created through begin() & end() function 
/*================================================*/


/*===============================================*/
//      Fixed size 
//      support iterator 
//      provide random access  
//      can not grow  
/*================================================*/



/*===============================================*/
//      array is class (member functions)
//      1- iterator  (begin , end , rbegin , rend, cbegin , cend , crbegin , crend ) 
//      2- capicity   (size , max_size , empty)
//      3- element access  ([] , at  , front , back , data)
//      4- modifiers  ( fill , swap)
/*================================================*/


void Array_with_modifiers()
{
    std::array<int , 4> arr1{3,6,4,5};
    std::array<int , 4> arr2{9,8,2,1};

    for(int i = 0; i < arr1.size();i++)
    {
        std::cout<< arr1[i]<<" ";
    }

    std::cout << std::endl;

    for(int i = 0; i < arr2.size();i++)
    {
        std::cout<< arr2[i]<<" ";
    }

    std::cout << std::endl;

    arr1.fill(5);
    arr1.fill(6);

    for(int i = 0; i < arr1.size();i++)
    {
        std::cout<< arr1[i]<<" ";
    }

    std::cout << std::endl;

    for(int i = 0; i < arr2.size();i++)
    {
        std::cout<< arr2[i]<<" ";
    }

    std::cout << std::endl;

    arr1.swap(arr1);

    for(int i = 0; i < arr1.size();i++)
    {
        std::cout<< arr1[i]<<" ";
    }

    std::cout << std::endl;

    for(int i=0 ; i < arr2.size();i++)
    {
        std::cout<< arr2[i]<<" ";
    }

    std::cout << std::endl;

}

void Array_with_iterator()
{


}

void Array_with_capicity()
{


}

void Array_with_elemntAccess()
{


}





int main()
{
   
    Array_with_modifiers();
   return 0;
}