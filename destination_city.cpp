class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
      

        for(int i=0;i<paths.size();i++){
             bool found=false;
            for(int j=0;j<paths.size();j++){
                if(paths[i][1] == paths[j][0]){
                    found=true;
                    break;
                }
            }
             if(found == false) {
                return paths[i][1];
            }
        }
        return "";
    }
};
