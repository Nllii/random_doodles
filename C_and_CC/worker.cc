#include <iostream>



int multiple(int a, int b) {
  return a * b;
}







void repeat_10(){
    // counting starts at 0
    for (int i = 0; i < 10; i++)
    {
    
     int result = multiple(i, 10);
    //  std::cout << "the result is: " << result << std::endl;
     // if the result is greater than 100, print it
        if (result > 10)
        {
            std::cout << "the result is greater than 10 : " << result << std::endl;
        }  
        else
        {
            std::cout << "the result is less than : " << result << std::endl;
        }

    //  std::cout << result << std::endl;
     // print the result to the stdout and text 
    
      }
    
    }
    






int main(int argc, char** argv) {
    repeat_10();
    return 0;
    }   
    


