/**
 * 
 * 
 * 
**/

vector<int> dijkstra(const Graph &g, int s){
    int n = g.size();
    vector<int> dist(n, inf);
    priority_queue<pii,vector<pii>,greater<pii>> task;
    dist[s] = 0;
    task.push(pii(dist[s], s));
    while(task.size()){
        pii p = task.top();
        task.pop();
        int v = p.second;
        if(dist[v] < p.first) continue;
        for(auto e : g[v]) {
            if(dist[e.to] > dist[v] + e.cost){
                dist[e.to] = dist[v] + e.cost;
                task.push(pii(dist[e.to], e.to));
            }
        }
    }
    return dist;
}
