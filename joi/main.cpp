#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main(){

  std::string options[] = {
    "You are doing great",
    "You are special. Your story isn't over yet",
    "This day will be over soon. And tomorrow will be much easier",
    "You are on your path. It's all just your path",
    "You are enough",
    "It could have been worse",
    "You will figure it out",
    "You've already done so much. Just think about it",
    "Breathe",
    "Take a walk",
    "Take a rest",
    "I believe in you. And I always have",
    "It's okay to feel whatever you feel",
    "Don't ever hesistate in yourself",
    "Fuck them. The world is ours"
  };

  int size = sizeof(options) / sizeof(options[0]);
  std::srand(std::time(0));
  std::cout << "My name is Joi and I'm here for you. Just type my name followed by your concerns." << std::endl;

  std::string userline;
  while(true){
    std::getline(std::cin, userline);
   

    if(userline.find("Joi") == 0){
        int randomIndex = std::rand()%size;
        std::cout << options[randomIndex] << std::endl;
   
    }
  }



   return 0;
  }
    







