#include <fstream>
#include <cstdlib>
#include <ctime>

void createNumbers(int n) {
    std::ofstream file("number.txt");
    std::srand(std::time(0)); // 使用当前时间作为随机数生成器的种子

    for (int i = 1; i <= n; ++i) {
        file << std::rand() << ' '; // 写入随机数和一个空格

        if (i % 10 == 0) {
            file << '\n'; // 每10个数字写入一行
        }
    }

    file.close();
}

int main()
{
    createNumbers(10);
}