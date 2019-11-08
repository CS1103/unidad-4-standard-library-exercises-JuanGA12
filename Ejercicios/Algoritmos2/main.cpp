#include <stdio.h>
#include <iostream>
#include <map>
#include <string.h>
#include <algorithm>
using namespace std;
struct team {
    char name[105];
    int pt, win, lose, tie, score, invscore;
    void init() {
        pt = win = lose = tie = 0;
        score = invscore = 0;
    }
    void w_team(int a, int b) {
        if(a > b){
            win++, pt += 3;
        }

        else if(a < b){
            lose++;
        }
        else{
            tie++, pt++;
        }
        score += a, invscore += b;
    }
    team(string name) {name = name; pt = 0; win = 0; lose = 0; tie = 0; score = 0; invscore = 0;}
};
bool cmp(team a, team b) {
    if(a.pt != b.pt){
        return a.pt > b.pt;
    }

    if(a.win != b.win){
        return a.win > b.win;
    }
    if(a.score-a.invscore != b.score-b.invscore) {
        return a.score - a.invscore > b.score - b.invscore;
    }
    if(a.score != b.score) {
        return a.score > b.score;
    }
    if(a.win+a.lose+a.tie != b.win+b.lose+b.tie)
        return a.win+a.lose+a.tie < b.win+b.lose+b.tie;
    return strcasecmp(a.name, b.name) < 0;
}
int main() {
    int Tests,n,m;
    cin>>Tests;
    char name[100];
    char buf[105];
    while(Tests--){
        string cup;
        getline(cin, cup);
        cin.ignore();
        cin >> n;
        for (int i = 0; i < n; i++){
            string name;
            getline(cin, name);

        }
        cin >> m;
        cin.ignore();
        while(m--){
            char name1[100], name2[100];
            int score1, score2;
            sscanf(buf, "%[^#]#%d@%d#%[^\n]", name1, &score1, &score2, name2);
            team(name1).w_team(score1, score2);
            team(name2).w_team(score2, score1);
        }
    }
    return 0;
}
/*
 *  int test;
 *  cin>>test;
    int n, m, cases = 0, i;
    char name[105], buf[105];
    while (test--) {
        cin>>n;
        getchar();
        map<string, int> R;
        if (cases++) puts("");
        puts(name);
        team A[50];
        for (i = 0; i < n; i++) {
            gets(A[i].name);
            A[i].init();
            R[A[i].name] = i;
        }
        cin>>m;
        getchar();
        while (m--) {
            gets(buf);
            char name1[50], name2[50];
            int num1, num2;
            sscanf(buf, "%[^#]#%d@%d#%[^\n]", name1, &num1, &num2, name2);
            A[R[name1]].w_team(num1, num2);
            A[R[name2]].w_team(num2, num1);
        }
        sort(A, A + n, cmp);
        for (i = 0; i < n; i++)
            printf("%d) %s %dp, %dg (%d-%d-%d), %dgd (%d-%d)\n",
                   i + 1, A[i].name, A[i].pt, A[i].win + A[i].lose + A[i].tie,
                   A[i].win, A[i].tie, A[i].lose, A[i].score - A[i].invscore,
                   A[i].score, A[i].invscore);
    }
 */