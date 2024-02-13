#include <iostream>
#include <string>

using namespace std;

int main() {
    string user_input;
    cout << "<------------------------>"<<endl;
    cout << "Pippit: Hi! How can I help you today?"<<endl; 

    while (true) {
        cout << "You: ";
        getline(cin, user_input);

        if (user_input == "hello" || user_input == "hi" || user_input == "Hello" || user_input == "Hi") {
            cout << "Pippit: Hello! How can I assist you?"<<endl;
        } else if (user_input == "how are you" || user_input == "how are you?" || user_input == "How are you" || user_input == "How are you?") {
            cout << "Pippit: I'm very well, what about you?"<<endl; 
        } else if (user_input == "bye" || user_input == "exit" || user_input == "Bye") {
            cout << "Pippit: Goodbye! Have a great day!"<<endl;
            cout << "<------------------------>"<<endl;
            break;
        } else if (user_input == "Introduce yourself!" || user_input == "tell me about yourself" || user_input == "introduce yourself" || user_input == "what are you?") {
            cout << "Pippit: I'm Pippit. I'm an C++ Chatbot developed by Mehak Arshad. I can answer your questions based on my limited amount of data."<<endl ;
        } else if (user_input == "for which purpose were you made?" || user_input == "what was the reason of your making?") {
            cout << "Pippit: I'm an assistant to answer your questions."<<endl;
        } else if(user_input == "What is the capital city of Pakistan?"){
            cout << "Pippit: Islamabad is the capital city of Pakistan."<<endl;
        } else if(user_input == " What is the official language of Pakistan?"){
            cout << "Pippit: Urdu is the official language of Pakistan."<<endl;
        } else if(user_input == "Pakistan shares its longest border with which neighboring country to the east?"){
            cout << "Pippit: Pakistan shares its longest border with India."<<endl;
        } else if(user_input == " Who is the founder of Pakistan and its first Governor-General?"){
            cout << "Pippit: Muhammad Ali Jinnah is the founders of Pakistan."<<endl;
        } else if(user_input == " What is the largest planet in our solar system?"){
            cout << "Pippit:Jupiter is the largest planet in our solar system."<<endl;
        } else if(user_input == "  Which gas do plants absorb from the atmosphere and use for photosynthesis?"){
            cout << "Pippit: Carbon dioxide (CO2) gas is absorbed."<<endl;
        } else if(user_input == " Who wrote the play Romeo and Juliet?"){
            cout << "Pippit: William Shakespeare wrote the play Romeo and Juliet."<<endl;
        } else if(user_input == "  Which natural disaster is measured on the Richter scale?"){
            cout << "Pippit: Earthquake is measured on the Richter scale."<<endl;
        } else if(user_input == "  What is the meaning of life?"){
            cout << "Pippit: The meaning of life is subjective, varying from person to person."<<endl;
        } else if(user_input == "tell me a joke"){
            cout << "Pippit: Why don't skeletons fight each other? They don't have the guts!."<<endl;
            cout << "I hope these brought a smile to your face!"<<endl;
        } else if(user_input == "  What is the meaning of life?"){
            cout << "Pippit: The meaning of life is subjective, varying from person to person."<<endl;
        }  else if (user_input == "help me at math" || user_input == "math help") {
            cout << "Pippit: Sure, please provide a math problem, and I'll do my best to solve it for you."<<endl;
        } else if (user_input == "what's the value of pi?" || user_input == "pi") {
            cout << "Pippit: The value of pi (p) is approximately 3.14159265359. Is there anything else you'd like to know?"<<endl;
        } else if (user_input == "what's the square root of 16?" || user_input == "square root of 16") {
            cout << "Pippit: The square root of 16 is 4. Is there anything else I can help you with?"<<endl;
        } else if (user_input == "what's the circumference of Earth?") {
            cout << "Pippit: The Earth's equatorial circumference is approximately 24,901 miles (40,075 kilometers)."<<endl;
        } else if ( user_input == "what if you uncoil the DNA?") {
            cout << "Pippit: If you were to uncoil all the DNA in a single human body, it would stretch to about twice the diameter of the Solar System."<<endl;
        } else if ( user_input == "what is the speed of Light?") {
            cout << "Pippit: The speed of light in a vacuum is approximately 186,282 miles per second (299,792 kilometers per second)."<<endl;
        } 
         else {
                cout << "Pippit: I'm not sure how to respond to that. Ask me something else."<<endl ;
            }
        }
    return 0;
}
