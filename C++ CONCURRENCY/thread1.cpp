#include <future>
#include <iostream>
#include <thread>
#include <vector>

int Add(int x, int y){
    return x + y;
}

int Square(int x){
    return x * x;
}

int Compute(const std::vector<int> &data){
    using namespace std;
    int sum {};
    for(auto e : data){
        sum += e;
        std::this_thread::sleep_for(1ms);
        std::cout << ',';
    }
    return sum;
}

int main(){
    std::packaged_task<int(int, int)> taskAdd{Add};
    std::future<int> ft = taskAdd.get_future();
    taskAdd(2, 3);

    auto result = ft.get();
    std::cout << result << std::endl;

    std::packaged_task<int(int)> taskSquare{Square};
    auto fSquare = taskSquare.get_future();
    taskSquare(5);

    std::cout << fSquare.get() << std::endl;

    std::packaged_task<int (const std::vector<int>&)> taskCompute{Compute};
    auto fCompute = taskCompute.get_future();
    std::vector<int> data{1,2,3,4,5};
    // taskCompute(data);

    std::thread threadCompute{std::move(taskCompute), data};
    std::cout << "Thread has started computing\n";
    std::cout << fCompute.get() << std::endl;

    std::cout << fCompute.get() << std::endl;
    std::cout << "End of main() \n";
    threadCompute.join();
}
