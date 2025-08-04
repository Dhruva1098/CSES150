#include <iostream>
#include <vector> 

using namespace std;

int H, W;
vector<vector<char>> grid;
vector<vector<int>> memo;
int dr[] = {-1,-1,-1,0,0,1,1,1};
int dc[] = {-1,0,1,-1,1,-1,0,1};

int dfs(int i, int j){
	if(memo[i][j] != -1) return memo[i][j];
	char target = grid[i][j] + 1;
	int max_len = 0;
	for(int k = 0; k < 8; k++){
		int nr = i + dr[k];
		int nc = j + dc[k];

		if(nc>=0 && nc < W && nr >= 0 && nr < H && grid[nr][nc] == target){
			max_len = max(max_len, dfs(nr,nc));
		}
	}
	return memo[i][j] = 1 + max_len;


}
int main(){
	int c = 1;
	while(cin >> H >> W && (H != 0 && W != 0)){
		grid.assign(H,vector<char>(W));
		memo.assign(H,vector<int>(W,-1));

		for(int i = 0; i < H; i++)
			for(int j = 0; j < W; j++)
				cin >> grid[i][j]; 

		int longest = 0;
		for(int i = 0; i < H; i++)
			for(int j = 0; j < W; j++)
				if(grid[i][j] == 'A') longest = max(longest, dfs(i,j));

		cout << "Case " << c++ << ": " << longest << "\n";
	}
}