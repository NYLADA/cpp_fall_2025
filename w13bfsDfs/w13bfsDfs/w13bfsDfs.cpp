/* BFS & DFS - Week 13

* Adalyn Behan

* 11/12/25

*  Define BFS & DFS. Which would be used for chess? Which would be used for a maze?

Create a BFS and DFS for your Graph. List the order of Nodes visited

*/

#include <iostream>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <set>
using namespace std;

//breadth first search
void BFS(map<char, vector<char>>& graph, char start) {
    set<char> visited;
    queue<char> q;

    visited.insert(start);
    q.push(start);

    cout << "BFS Order: ";
	// Traverse the graph
    while (!q.empty()) {  
        char node = q.front();
        q.pop();
        cout << node << " ";

		for (char next : graph[node]) {  // Enqueue next if not visited
            if (visited.find(next) == visited.end()) {
                visited.insert(next);
				q.push(next); // Enqueue next node
            }
        }
    }
    cout << endl;
}
 
//depth first search 
void DFS(map<char, vector<char>>& graph, char start) {
    set<char> visited;
    stack<char> s;
    s.push(start);
    cout << "DFS Order: ";
	// Traverse the graph
    while (!s.empty()) {
        char node = s.top();
        s.pop();
		if (visited.find(node) == visited.end()) { // If not visited
			visited.insert(node); // Mark node 
            cout << node << " "; 
			for (char next : graph[node]) {  // Push next onto stack
                if (visited.find(next) == visited.end()) {
                    s.push(next);
                }
            }
        }
    }
    cout << endl;
}

int main(){
	cout << "Adalyn Behan, BFS & DFS Assignment, 11/12/25" << endl;

    map<char, vector<char>> graph;

    graph['A'] = { 'B', 'D' };
    graph['B'] = { 'A', 'C', 'E' };
    graph['C'] = { 'B' };
    graph['D'] = { 'A' };
    graph['E'] = { 'B' };

    cout << "BFS and DFS traversals:\n"; //output
    BFS(graph, 'A');
    DFS(graph, 'A');

	cout << "This is the end of the program." << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
