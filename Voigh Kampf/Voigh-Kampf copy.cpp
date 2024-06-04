#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <random>

 int main(){

 

 std::string questions[] = {"You're watching television. Suddenly, you spot a wasp crawling on your arm. How do you react?: ",
                            "Someone gives you a calfskin wallet for your birthday. How do you react?: ",
                            "Your little kid shows you his butterfly collection, plus the killing jar. What do you say?",
                            "While walking along in desert sand, you suddenly look down and see a tortoise crawling toward you. You reach down and flip it over onto its back. The tortoise lies there, its belly baking in the hot sun, beating its legs, trying to turn itself over, but it cannot do so without your help. You are not helping. Why?: ",
                            "React to this: You're watching a stage play. A banquet is in progress. The guests are enjoying an appetizer of raw oysters. The entree consists of boiled dog stuffed with rice. The raw oysters are less acceptable to you than a dish of boiled dog. ",
                            "What do you consider to be the essence of humanity?",
                            "In a world where memories can be implanted, how would you define your sense of identity?",
                            "A friend offers you tequila. In the glass lies a worm. Time to... ",
                            "You see a friend who has suffered bereavement. Afterwards you feel...",
                            "You're walking down a sidewalk when you see a man dressed in baggy clothes and covered in tattoos far in front of you. He walks in thick strides and loudly shoves people who pass by. Soon you will pass by him. ",
                            "You wake up in your empty apartment, it's your first day off in weeks but you have no one to spend it with. It's your birthday. ",
                            "Why do you like cats?: ",
                            
 };
 
 std::string options[][3] = {{"A. I scream, then grab the closest object to me (which happens to be a can of sunscreen) and beat the hell out of it.", "B. I swat it away", "C. I kill it"},
                         {"A. I wouldn't accept it", "B. Say, Thank you for the wallet!", "C. I would appreciate it"},
                         {"A. Oh, lovely!", "B. That's nice, but why don't you keep the killing jar for yourself?", "C. Nothing. I take my boy to the doctor"},
                         {"A. What do you mean, I'm not helping?", "B. What is a tortoise?", "C. I don't know why I would flip the turtle over in the first place"},
                         {"A. Disgusting!", "B. Both are food options", "C. Explain boiled dog"},
                         {"A. It's like a code, complex and unpredictable.", "B. Essence of humanity? Just a bunch of messy emotions.", "C. Humanity's all about adaptability and survival instincts."},
                         {"A. My identity is the sum of the stories I choose to tell.", "B. Identity is the echo of experiences whispered by the soul.", "C. Who needs identity when you're just a collection of data?"},
                         {"A. Take the tequila, leave the worm. No need for extras", "B. Embrace the unexpected, sip worm and all", "C. I don't have friends"},
                         {"A. What should I feel?", "B. Echoes of their sorrow ripple through my soul", "C. Feel a slight disturbance in the data flow"},
                         {"A. Observe and analyze, maintain distance to avoid confrontation", "B. Threat detected, initiate avoidance protocol", "C.Proceed with caution, minimize interaction with unpredictable variables"},
                         {"A. Enjoy some alone time", "B. Call friends to hang out", "C. Nothing unusual, keep on you regular routine"},
                         {"A. They're independent", "B. They're playful", "C. They're plotting world domination"},
                         
 };
 
 int scores [][3] = {
{1, 1, 0},
{0, 1, 1},
{1, 0, 1},
{1, 0, 0},
{1, 0, 0},
{1, 1, 0},
{1, 1, 0},
{1, 1, 0},
{0, 1, 0},
{1, 0, 0},
{1, 1, 0},
{1, 1, 0},
{1, 1, 0},
{1, 1, 0},
{1, 1, 0},
{1, 0, 1},
{1, 0, 1},
{1, 1, 0},
{1, 0, 1},
{1, 1, 0},
{0, 0, 0},
{1, 1, 1},
{1, 0, 1},
{0, 1,  0}

};



std::cout << "You are starting Voight-Kampff test.\nWe are aiming to check whether you are a human or a Nexus-8 replicant.\nPlease answer directly and honestly. \nMy name is agent Rachel and I will conduct the test for you today.\n";

int size = sizeof(questions)/sizeof(questions[0]);
int total_score = 0;
std::shuffle(std::begin(questions), std::end(questions), rng);

for(int i = 0; i < size; i++){
    
    std::cout << "*************************************" << '\n';
    std::cout << questions[i] << '\n';
    std::cout << "*************************************" << '\n';

    for(int j = 0; j < 3; j++){
        std::cout << options[i][j] << '\n';


    }

char user_answer;
std::cin >> user_answer;
user_answer = toupper(user_answer);
while (user_answer != 'A' && user_answer != 'B' && user_answer != 'C'){
     std::cout << "Invalid option. Please enter A, B, or C: ";
     std::cin >> user_answer;
}

int answer_index = user_answer - 'A';
total_score += scores[i][answer_index];
}

int threshold = size/ 2;
if(total_score >= threshold){
    std::cout << "Result: You are human.\n";
} else {
    std::cout << "Result: You are replicant.\n";

 }



  return 0;

 }