#include <iostream>
using namespace std;

int main() {
    string name;
    int score = 0;
    string answer;

    cout << "==============================\n";
    cout << " Smart Skills Self-Check Quiz \n";
    cout << "==============================\n";

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "\nWelcome, " << name << "! Let's begin.\n";
    cout << "You can score up to 10 points.\n";
    cout << "\nNote: Minimum score to pass is 6 out of 10.\n";
    cout << "\n------------------------------\n";
    cout << "==== QUIZ START ====\n";

    // Q1
    cout << "\n------------------------------\n";
    cout << "\n1. What does AI stand for?\n";
    cout << "a) Automatic Internet\nb) Artificial Intelligence\nc) Advanced Interface\n";
    cout << "Please type a, b, or c.\n";
    cout << "Answer: ";
    cin >> answer;
    if(answer == "b" || answer == "B") {
   score++;
   cout << "Correct!\n";
} else {
   cout << "Wrong!\n";
}

    // Q2
    cout << "\n------------------------------\n";
    cout << "\n2. Which is a strong password?\n";
    cout << "a) 123456\nb) Hello@2024!\nc) myname\n";
    cout << "Please type a, b, or c.\n";
    cout << "Answer: ";
    cin >> answer;
    if(answer == "b" || answer == "B") {
   score++;
   cout << "Correct!\n";
} else {
   cout << "Wrong!\n";
}

    // Q3
    cout << "\n------------------------------\n";
    cout << "\n3. What is phishing?\n";
    cout << "a) Fishing game\nb) Fake email trick\nc) A mobile feature\n";
    cout << "Please type a, b, or c.\n";
    cout << "Answer: ";
    cin >> answer;
    if(answer == "b" || answer == "B") {
   score++;
   cout << "Correct!\n";
} else {
   cout << "Wrong!\n";
}

    // Q4
    cout << "\n------------------------------\n";
    cout << "\n4. Which of the following is a web browser?\n";
    cout << "a) Firefox\nb) Google\nc) Android\n";
    cout << "Please type a, b, or c.\n";
    cout << "Answer: ";
    cin >> answer;
    if(answer == "a" || answer == "A") {
   score++;
   cout << "Correct!\n";
} else {
   cout << "Wrong!\n";
}

    // Q5
    cout << "\n------------------------------\n";
    cout << "\n5. What is a digital footprint?\n";
    cout << "a) Footprint scanned by phone\nb) Online activity trace\nc) Step counter app\n";
    cout << "Please type a, b, or c.\n";
    cout << "Answer: ";
    cin >> answer;
    if(answer == "b" || answer == "B") {
   score++;
   cout << "Correct!\n";
} else {
   cout << "Wrong!\n";
}

    // Q6
    cout << "\n------------------------------\n";
    cout << "\n6. Which is a secure way to protect your device?\n";
    cout << "a) Use no password\nb) Share password with friends\nc) Enable screen lock and antivirus\n";
    cout << "Please type a, b, or c.\n";
    cout << "Answer: ";
    cin >> answer;
    if(answer == "c" || answer == "C") {
   score++;
   cout << "Correct!\n";
} else {
   cout << "Wrong!\n";
}

    // Q7
    cout << "\n------------------------------\n";
    cout << "\n7. What should you do if you receive a suspicious link?\n";
    cout << "a) Click it quickly\nb) Ignore or report it\nc) Share it on social media\n";
    cout << "Please type a, b, or c.\n";
    cout << "Answer: ";
    cin >> answer;
    if(answer == "b" || answer == "B") {
   score++;
   cout << "Correct!\n";
} else {
   cout << "Wrong!\n";
}

    // Q8
    cout << "\n------------------------------\n";
    cout << "\n8. What does HTTPS mean in a website URL?\n";
    cout << "a) Hyper Text Transfer Protocol Secure\nb) High Tech Transfer Protocol Software\nc) Hackable Test Site\n";
    cout << "Please type a, b, or c.\n";
    cout << "Answer: ";
    cin >> answer;
    if(answer == "a" || answer == "A") {
   score++;
   cout << "Correct!\n";
} else {
   cout << "Wrong!\n";
}

    // Q9
    cout << "\n------------------------------\n";
    cout << "\n9. Which app is commonly used for video conferencing?\n";
    cout << "a) Zoom\nb) Paint\nc) Calculator\n";
    cout << "Please type a, b, or c.\n";
    cout << "Answer: ";
    cin >> answer;
    if(answer == "a" || answer == "A") {
   score++;
   cout << "Correct!\n";
} else {
   cout << "Wrong!\n";
}

    // Q10
    cout << "\n------------------------------\n";
    cout << "\n10. What is a two-factor authentication (2FA)?\n";
    cout << "a) Using 2 phones\nb) Two ways to log in securely\nc) Logging in twice\n";
    cout << "Please type a, b, or c.\n";
    cout << "Answer: ";
    cin >> answer;
    if(answer == "b" || answer == "B") {
   score++;
   cout << "Correct!\n";
} else {
   cout << "Wrong!\n";
}

    //11
    cout << "\n------------------------------\n";
    cout << "\n11. What is one way to protect your personal data online?\n";
    cout << "a) Share everything openly\nb) Use strong privacy settings\nc) Post your passwords\n";
    cout << "Please type a, b, or c.\n";
    cout << "Answer: ";
    cin >> answer;
    if(answer == "b" || answer == "B") {
   score++;
   cout << "Correct!\n";
} else {
   cout << "Wrong!\n";
}

    // Result
    cout << "\nYour score is: " << score << " out of 11\n";

    if(score >= 9)
    cout << "🌟 Excellent performance! You have mastered digital basics.\n";
	else if(score >= 6)
    cout << "✅ Fair attempt! Continue enhancing your knowledge.\n";
	else
    cout << "⚠️ You need improvement. Explore more digital learning resources.\n";

    cout << "\nThank you for taking the Smart Skills Quiz!\n";
    cout << "Share your score with your friends and challenge them too!\n";

    return 0;
}
