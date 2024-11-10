#include <iostream>
using namespace std;

int Cal_time(int reading, int writing){
    float daily_time = reading + writing;
    return daily_time/60;
}

void dailyRoastFeedback(int daily_time) {

    if (daily_time < 1) {
        cout << "Chalo, kam az kam tumne apni zindagi ke 1 ghante se kam hi barbaad kiye. Isi tarah control mein raho aur asli zindagi mein bhi kuch kar dikhane ka irada rakho!" << endl;
    } else if (daily_time < 2) {
        cout << "Vah, lagta hai aj sirf confession scroll karne ka irada tha. 1 se 2 ghante waste karke samajhte ho tumhari life set ho jayegi? Thora focus apne real goals pe bhi rakho, shayad kuch ban jao" << endl;
    } else if (daily_time >= 2){
        cout<<" Oh bhai, 2 ghante confessions mein laga diye?! Kya NASA mein job lagne wali hai is se? Acha hota yehi time kisi kaam ki cheez pe lagate. Zindagi mein kuch bara karna hai ya bas yahan hi phasna hai? "<< endl;
    } else {
        cout<<"Invalid";
    }
}

void weeklyRoastFeedback(int total_time){
    if (total_time > 10){
        cout<<" Kya baat hai, 10 ghante se zyada confessions mein ghusa hua hai? Jawan admi ho ya waqt barbaad karne ki machine? Kuch productive cheez socho, warna ye confessions tumhari CV mein nahi likhe jayenge! ";
    }else if (total_time < 10){
        cout<<" Wah bhai, lagta hai thoda waqt manage karna seekh rahe ho! Isi tarah apne goals par focus karo, warna ye confession wali duniya tumhe kabhi aagay nahi le jaayegi. Shabash, sahi raho! ";
    }
}

int main(){
    
    int reading = 0;
    int writing = 0;
    float total_time = 0;
    float daily_time = 0;
    int days[7] = {};

    for(int i = 1; i<=7; i++){
        cout<<"Enter the Reading Time of Day "<< i<<" ";
        cin>> reading;

        cout<<"Enter the writing time of day "<< i<< " ";
        cin >> writing;

        float daily_time = Cal_time(reading, writing);
        dailyRoastFeedback(daily_time);

        total_time += daily_time;
    }
    cout<<"The Total time is "<<total_time<< endl;
 

    weeklyRoastFeedback(total_time);
    system("Pause");
}   
