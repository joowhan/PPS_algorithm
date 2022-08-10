#include <iostream>
#include <vector>
using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    for(int i=0;i<skill_trees.size();i++){
        
        vector<int> temp;
        bool is_skill=true;
        for(int j=0;j<skill_trees[i].length();j++){
            for(int k=0;k<skill.length();k++){
                if(skill[k]==skill_trees[i][j])
                    temp.push_back(skill_trees[i][j]);
            }
        }
        // temp가 skill의 순서를 따르지 않으면 flag=false
        for(int i=0;i<temp.size();i++){
            if(temp[i]!=skill[i]){
                is_skill=false;
                break;
            }
        }
        if(is_skill)
            answer++;
    }
    return answer;
}