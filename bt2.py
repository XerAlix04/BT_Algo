import heapq

class PriorityQueue:
    def __init__(self):
        self.heap = []

    def push(self, item, priority):
        heapq.heappush(self.heap, (priority*(-1), item))

    def push(self, item):
        heapq.heappush(self.heap, (item*(-1), item))

    def pop(self):
        return heapq.heappop(self.heap)[1]

    def is_empty(self):
        return len(self.heap) == 0

# Tạo một hàng đợi ưu tiên
pq = PriorityQueue()

# Thêm các phần tử
pq.push(3)
pq.push(1)
pq.push(2)

# Xóa và lấy phần tử có ưu tiên cao nhất
while not pq.is_empty():
    num = pq.pop()
    print(num)