import itertools

def tsp_bruteforce(graph):
    n = len(graph)
    cities = list(range(n))
    min_cost = float('inf')
    optimal_path = None

    for path in itertools.permutations(cities):
        cost = 0
        for i in range(n - 1):
            cost += graph[path[i]][path[i + 1]]
        cost += graph[path[-1]][path[0]]  # Kết nối thành phố cuối cùng với thành phố đầu tiên

        if cost < min_cost:
            min_cost = cost
            optimal_path = path

    return optimal_path, min_cost

# Đầu bài của bạn - thay đổi ma trận và kích thước m và n theo yêu cầu của bạn
m, n = 5,5
your_graph = [
    [0, 3, 14,18,15],
    [3, 0, 4,22,20],
    [17, 9,0,16,4],
    [6,2,7,0,12],
    [9,15,11,5,0]
]

optimal_path, min_cost = tsp_bruteforce(your_graph)
print("Đường đi tối ưu:", optimal_path)
print("Chi phí tối thiểu:", min_cost)
