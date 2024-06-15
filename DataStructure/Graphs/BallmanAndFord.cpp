#include <stdio.h>

#define V 4  // 그래프에 있는 정점의 수

// 간단한 그래프의 최단 거리를 찾는 함수
void findShortestPath(int graph[V][V], int src) {
    int dist[V];  // 각 정점까지의 최단 거리를 저장할 배열

    // 처음에는 시작 정점에서 각 정점까지의 거리로 초기화합니다.
    for (int i = 0; i < V; i++) {
        dist[i] = graph[src][i];
    }

    // 각 정점을 한 번씩 확인하면서, 더 짧은 경로가 있는지 확인하고 업데이트합니다.
    for (int k = 2; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (dist[j] > dist[i] + graph[i][j]) {
                    dist[j] = dist[i] + graph[i][j];
                }
            }
        }
    }

    // 결과를 출력합니다.
    printf("Vertex Distance from %d\n", src);
    for (int i = 0; i < V; i++) {
        printf("%d -> %d: %d\n", src, i, dist[i]);
    }
}

int main() {
    // 그래프 데이터: 각 행은 시작 정점에서 다른 정점까지의 거리입니다.
    int graph[V][V] = {
        {0, 3, 10000, 7},
        {3, 0, 1, 5},
        {10000, 1, 0, 2},
        {7, 5, 2, 0}
    };

    findShortestPath(graph, 0);  // 0번 정점에서 시작하여 최단 거리를 찾습니다.

    return 0;
}
