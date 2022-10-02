// Source : https://leetcode.com/problems/bulls-and-cows/

 
class Solution {
public:
    string getHint(string secret, string guess) {
        return getHint02(secret, guess);
        return getHint01(secret, guess);
    }

    string getHint01(string secret, string guess) {
        int appears_in_secret[10] = {0}, appears_in_guess[10] = {0}, bulls[10] = {0};
        int total_bulls = 0, total_cows = 0;
        for(int i = 0; i < secret.size(); i++)
            appears_in_secret[secret[i] - '0']++;
        for(int i = 0; i < guess.size(); i++)
        {
             if(secret[i] == guess[i])
                 bulls[secret[i] - '0']++;
             appears_in_guess[guess[i] - '0']++;
        }
        for(int i = 0; i <= 9; i++)
        {
            total_bulls += bulls[i];
            total_cows += min(appears_in_secret[i], appears_in_guess[i]) - bulls[i];
        }
        return to_string(total_bulls) + "A" + to_string(total_cows) + "B";
    }

    // Another implemntation - to save more space
    string getHint02(string secret, string guess) {
        
        const int digital_num = 10;
        int secret_stat[digital_num]={0};
        
        int bull = 0;
        for(int i=0; i<secret.size(); i++) {
            //both number & location are matched, count bull
            if ( secret[i] == guess[i] ) {
                bull++;
                continue;
            }
            //otherwise, count the unmatched digits.
            secret_stat[secret[i]-'0']++;
        }
        
        int cow = 0;
        for(int i=0; i<guess.size(); i++) {
            //deal with duplication - decrease the digits count if cow is found.
            if ( secret[i] != guess[i] && secret_stat[guess[i]-'0']-- > 0 ) {
                cow++;
            }
        }
        
        return to_string(bull) + "A" + to_string(cow) + "B";
    }
};