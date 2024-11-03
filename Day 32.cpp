#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cumulative_score_player1 = 0;
    int cumulative_score_player2 = 0;
    int max_lead = 0;
    int winner = 0;

    for (int i = 0; i < n; i++) {
        int score1, score2;
        cin >> score1 >> score2;
        
        cumulative_score_player1 += score1;
        cumulative_score_player2 += score2;
        
        int current_lead = abs(cumulative_score_player1 - cumulative_score_player2);
        
        if (current_lead > max_lead) {
            max_lead = current_lead;
            winner = (cumulative_score_player1 > cumulative_score_player2) ? 1 : 2;
        }
    }

    cout << winner << " " << max_lead << endl;

    return 0;
}
