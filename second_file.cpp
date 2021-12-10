// Research.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<vector>
#include<map>
#include<random>
#include <unordered_set>
#include <algorithm>
#include <numeric>
#include <unordered_map>
void CalculateMatchMult(std::vector<long long>& v)
{
    for (int i = 0; i < 73; ++i) {
        v.push_back(i * i);
    }
}

void CalculateUnmatchMult(std::vector<long long>& v)
{
    for(int i = 0; i < 73; ++i)
        for (int j = 0; j < 73; j++) {
            
            if (i != j) {
                v.push_back(i + j);
            }
        }
}

void CalculateSquaresDecimal(std::vector<long long>& v)
{
    const long long max_sum = 9 * 6;

    for (int i = 0; i < max_sum + 1; ++i) {
        v.push_back(i * i);
    }
}

void TestModulo(std::vector<long long>& v_power)
{
    long long p = 0;
    const long long mod = 2;

    for (int i = 0; i < v_power.size(); ++i) {
        p = (long long)std::sqrt(v_power[i]);

        std::cout << "POWER MOD:" << v_power[i] % mod << "  SQRT_MOD:" << p % mod << std::endl;
        
    }
}

void TestRing()
{
    long long squares = 624;
        
    long long max_val = (long long)std::powl(13, 5);
    
    std::map<int,long long> square_distribution;

    std::vector<long long> sums;

    for (long long i = 0; i < max_val; ++i) {
        sums.push_back(i % 624);
    }

    for (long long i = 1; i  < 26; ++i) {
        square_distribution[i] = (max_val - 1) / (i * i);
    }
    
    
    
    int a = 0;
}

void GearWheelResearch()
{
    const unsigned long max_pos = 269568LL;
    const unsigned long max_rounds = 20736LL;

    unsigned long max_val = (unsigned long)std::powl(13, 5) - 1;

    unsigned long div_pos = max_val % max_pos;
    unsigned long div_rounds = max_val / max_rounds;


    int a = 0;
}

void TestTredecimalNumbers()
{
    unsigned long long max_num = 46596170244962LL;
    unsigned long long min_num = 23298085122481LL;

    unsigned long long numbers_to_check = max_num - min_num;


        int a = 0;
}

void TestStepTwelve()
{
    unsigned long long nums_count = (unsigned long long)std::powl(13, 5);
    unsigned long long min_num = 28561LL;
    unsigned long long step = 0;
    unsigned long long counter = 0;
    unsigned long long nums_checked = min_num;
    unsigned long long current = min_num;

    while (current < nums_count) {
        step = current % 13;

        if (step == 0)step = 12;

        current += step;

        counter++;
    }
        
    

    int a = 0;
}

void TestRemainders()
{
    std::vector<unsigned int> remainders;
    std::vector<unsigned int> sum_remainders;


    for (int i = 0; i < 10; ++i) {
        remainders.push_back(i % 13);
    }

    for (int i = 0; i < 25; ++i) {
        sum_remainders.push_back(i % 10);
    }

    int a = 0;

}

unsigned long Euclid(unsigned long a,unsigned long b)
{
    if (b == 0) return a;

    return Euclid(b, a % b);
}

void PollardRhoTest(unsigned long number)
{
    std::default_random_engine re;
    std::uniform_int_distribution<unsigned long> rand(0LL, number - 1);
    
    std::unordered_set<unsigned long> factors;
    unsigned int while_counter = 0;
    const unsigned int optimal_factors = number / 2;
    unsigned long random_y = rand(re);
    unsigned long random_x = random_y;
    unsigned long counter = 1;
    unsigned long counter_k = 2;
    bool contains = true;

    while (contains) {
        counter++;
        unsigned long square = ((counter - 1) * (counter - 1) - 1) % number;
        unsigned long remainder = Euclid(random_y - square, number);

        if (remainder != 1 && remainder != number) {
            if (factors.find(remainder) == factors.end()) {
                factors.insert(remainder);
            }
            
                
        } 
        else if (counter == counter_k) {
                random_y = square;
                counter_k *= 2;
            
            
        }
        
        while_counter++;
        if (while_counter > optimal_factors) contains = false;
       
    }



    int b = 0;


}

void SetTest()
{
    std::unordered_set<int> set;

    set.insert(1);
    set.insert(2);
    set.insert(3);
    int beast = 0;
    if (set.find(0) == set.end()) {
        beast = 0x29a;
    }

    int a = 0;
}

void TestSymmetry()
{
    unsigned long max_num = (long long)std::powl(13, 5) - 1;
    const unsigned long num = 371274;
    unsigned long minus = max_num - num;
    unsigned long div = max_num / minus;

        int a = 0;
}

void FiveSumsTest()
{
    std::vector<unsigned int> sums(61);
    unsigned int sum = 0;

    for (unsigned int a = 0; a < 13; ++a) {
        for (unsigned int b = 0; b < 13; ++b) {
            for (unsigned int c = 0; c < 13; ++c) {
                for (unsigned int d = 0; d < 13; ++d) {
                    for (unsigned int e = 0; e < 13; ++e) {
                        sum = a + b + c + d + e;
                        sums[sum]++;
                    }
                }
            }
        }
    }

    unsigned int accum = std::accumulate(sums.begin(), sums.end(), 0);

    int z = 0;
}



void CombinatoricsCalc()
{
    unsigned int max_num = (unsigned int)std::powl(13, 5);
    unsigned int four_five_three = 0;
    std::vector<unsigned int> sums(25);
    std::unordered_map<unsigned int, int> differences;
    std::vector<unsigned int> one_side_sum_happens(25);
    std::vector<unsigned int> some_vec;

    unsigned int sum = 0;
    unsigned int difference = 0;
    unsigned int zero_count = 0;
    unsigned int non_zero_count = 0;
    unsigned int sum_count = 0;
    for (int i = 0; i < 13; ++i) {
        for (int j = 0; j < 13; j++) {
            sum = i + j;
            sums[sum]++;
            sum_count++;
        }
    }

    for (int i = 1; i < sums.size(); ++i) {
        one_side_sum_happens[i] = sums[i] * 13;

        
    }

    one_side_sum_happens[0] = 13;


    std::vector<std::pair<int, int>> terms_zero;
    std::vector<std::pair<int, int>> terms_non_zero;
    std::vector<std::pair<int, int>> sum_fractions;
    

    for (int i = 0; i < sums.size(); ++i) {
        for (int j = 0; j < sums.size(); ++j) {
            std::pair<int, int> tmp;
            tmp.first = i;
            tmp.second = j;
            if (sums[i] - sums[j] == 0) {
                zero_count++;
                sum_fractions.push_back(std::make_pair(sums[i], sums[j]));
                terms_zero.push_back(tmp);

            }
            else { terms_non_zero.push_back(tmp); }
            
            non_zero_count++;
        }
    }

    //four_five_three = max_num - 
    int one_side_cumulative = std::accumulate(one_side_sum_happens.begin(), one_side_sum_happens.end(), 0);
    int b = std::accumulate(sums.begin(), sums.end(), 0);
    int a = 0;
}



void CalcFourNumbersCombinatorics()
{
    unsigned int nums_count = 0;
    


    for (int a = 0; a < 13; ++a) {
        for (int b = 0; b < 13; b++) {
            for (int c = 0; c < 13; c++) {
                for (int d = 0; d < 13; d++) {
                    if (((a + b) - (c + d)) == 0)
                        ++nums_count;
                }
            }
        }
    }

    int z = 0;
}

void TestPows()
{
    unsigned int nums_count = (unsigned int)std::pow(13, 5);
    unsigned int one_permutations = 13 * 5;
    unsigned int two_permutations = 13 * 13;
    unsigned int three_permutations = (unsigned int)std::pow(13, 3);
    unsigned int four_permutations = (unsigned int)std::pow(13, 4);
    unsigned int clear = nums_count - one_permutations *13 - two_permutations*13 - three_permutations*13;
    unsigned int four_permutations_test = four_permutations - one_permutations - two_permutations - three_permutations;



    int z = 0;
}

void CountSquares()
{
    unsigned int squares_count = 0;

    for (unsigned int i = 0; i < 28561; ++i) {
        if (i * i < 4196) ++squares_count;
    }

    int a = 0;
}

void TestModuleHalf()
{
    unsigned int max_num = (unsigned int)std::pow(13, 5) - 1;
    unsigned int half = 13;//max_num / 2;
    unsigned int counter = 0;
    unsigned int current = max_num;
    

    while (current > 169) {
        if (current % half == 0) {
            current--;
        }
        else {
            current -= current % half;
            counter++;
        }
    }
    

    int a = 0;
    
}


void TestDifference()
{
    const unsigned int max_num = (unsigned int)std::pow(13, 5) - 1;
    unsigned int upper = max_num/2;
    int lower = max_num/2;
    unsigned int sum = 0;
    unsigned int counter = 0;

    while ( upper <= max_num || lower > 0) {
        sum = upper + lower;

        if (sum == max_num) {
            counter++;
            upper++;
            lower--;
        }
        else {
            upper += 12;
            lower -= 12;
        }
    }

    int a = 0;
}

void TestModuleMining()
{
    unsigned int max_num = (unsigned int)std::pow(13, 5) - 1;
    bool proceed = true;
    std::vector<std::pair<int,int>> modules;
    std::vector<int> result;
    unsigned int current = max_num - 1;
    //2,5,4,6,9,12
    

    int a = 0;

}

void TestBoarders()
{
    unsigned int low_border = 1;
    unsigned int high_border = (long long)std::powl(13, 5) - 1;

    for (int i = 0; i < 5; ++i) {
        low_border *= 13;
        high_border /= 13;
    }

    int a = 0;
}

void TestIntegers()
{
    unsigned int max = (unsigned int)std::pow(13, 4) - 1;

    unsigned int counter = 0;
    unsigned int one = max - 1;
    unsigned int one_mod = 1 % 13;

    unsigned int five = max - 5 ;
    unsigned int five_mod = 5 % 13;


    



    std::vector<std::pair<int, int>> one_stats;
    std::vector<std::pair<int, int>> five_stats;
    std::vector<std::pair<int, int>> max_stats;

    unsigned int tmp_one = one;
    unsigned int tmp_five = five;
    unsigned int tmp_max = max;

    unsigned int max_mod = max % 13;

    std::unordered_map<int, std::vector<std::pair<int, int>>> mod_map;
    std::vector<int> mods;
    int cycles = max / 13;
    for (int i = max; i > max - 20; --i) {
        unsigned int tmp_map = i;
        mods.push_back(i % 13);
        for (int j = 0; j < 5; ++j) {
            unsigned int tmp_mod_map = i % 13;
            mod_map[i].push_back(std::make_pair(tmp_map, tmp_mod_map));
            tmp_map /= 13;
        }
    }


    while (counter < 5) {

        one_stats.push_back(std::make_pair(tmp_one, tmp_one % 13));
        five_stats.push_back(std::make_pair(tmp_five, tmp_five % 13));
        max_stats.push_back(std::make_pair(tmp_max, tmp_max % 13));

        tmp_one /= 13;
        tmp_five /= 13;
        tmp_max /= 13;

        ++counter;

        

    }


    int a = 0;
}

void TestModel()
{
    const int max_num = (int)std::pow(13, 4) - 1;
    const int min_num = max_num - std::pow(13,3);
    int current = max_num;
    int loops_count = max_num / 13;
    int counter = 0;
    const  int digits_count = 4;
    std::vector<int> mods(digits_count);
    int first_sum = 0;
    int second_sum = 0;
    std::vector<std::pair<int, int>> p;
    std::vector<int> nums;
    for (int i = max_num; i >= min_num; i--) {
        
        
        first_sum = ((i % 13) + ((i/13) % 13));
        second_sum = (((i/169) % 13 ) + ((i / 2196) % 13));
        
        if ((first_sum - second_sum) == 0) {
            counter++;
            nums.push_back(i);
            p.push_back(std::make_pair(first_sum, second_sum));
        }
        
    }

    int a = 0;

}

void TestModelForTwo()
{
    const  int max_num = (int)std::pow(13, 2) - 1;
    int current = max_num;
    int loops_count = max_num / 13;
    int counter = 0;
    const  int digits_count = 4;
    std::vector<int> mods(digits_count);
    int first_sum = 0;
    int second_sum = 0;
    std::vector<std::pair<int, int>> p;
    std::vector<int> nums;
    for (int i = max_num; i >= 0; i --) {


        first_sum = i % 1;
        second_sum = i % 13;

        if ((first_sum - second_sum) == 0) {
            counter++;
            nums.push_back(i);
            p.push_back(std::make_pair(first_sum, second_sum));
        }

    }

    int a = 0;

}

void ResearchPows()
{
    std::vector<std::vector<long>*> pows;
    std::vector<long>* tmp;

    long p = 0;

    for (int i = 0; i < 13; ++i) {
        tmp = new std::vector<long>;

        for (int j = 0; j < 5; j++) {
            p = (long)std::powl(i, j);
            tmp->push_back(p);
        }
        pows.push_back(tmp);
    }

    int a = 0;
}

void SquaresTest()
{
    std::vector<long> num_modules;
    std::vector<long> sqrt_modules;
    long sqrt = 0;

    for (int i = 0; i < 7; ++i) {
        num_modules.push_back(i % 13);
        sqrt = (long)std::powl(i, 2);
        sqrt_modules.push_back(sqrt % 13);
    }


    int a = 0;
}


void TestChineseRemainderTheorem()
{
    std::vector<int> p = {73,73,73};
    std::vector<int> max_num_ms;
    std::vector<int> one_ms;
    std::vector<int> diff;
    int max_num = (int)std::pow(13, 5) - 1;

    for (int i = 0; i < p.size(); ++i) {
        max_num_ms.push_back(max_num % p[i]);
        one_ms.push_back(1 % p[i]);
    }

    for (int i = 0; i < one_ms.size(); ++i) {
        diff.push_back((max_num_ms[i] - one_ms[i]) % 73);
    }

    int z = 0;



}

int main()
{
    TestChineseRemainderTheorem();
    PollardRhoTest(371292);
    SquaresTest();
    ResearchPows();
    //TestModelForTwo();
    TestModel();
    TestIntegers();
    //TestBoarders();
   // TestModuleMining();
    //TestDifference();
   // CountSquares();
    CombinatoricsCalc();
    TestPows();
    CalcFourNumbersCombinatorics();
    
    TestSymmetry();
    unsigned long factors = (long long)std::powl(13, 5) - 1;
    PollardRhoTest(113);
    TestRemainders();
    TestTredecimalNumbers();
    GearWheelResearch();
    TestRing();
    std::vector<long long> mult_match;
    std::vector<long long> mult_unmatch;
    std::vector<long long> squares_decimal;

   
    int zero_test2 = 0 % 7;
    int zero_test3 = 0 % 666;

    int test_mod1 = 1 + 2 + 4 + 6;
    int test_mod2 = 1 + 2 + 4 + 5;

    int m1 = test_mod1 % 2;
    int m2 = test_mod2 % 2;

    CalculateSquaresDecimal(squares_decimal);
    CalculateMatchMult(mult_match);
    CalculateUnmatchMult(mult_unmatch);
    TestModulo(squares_decimal);

    const long long minimal_number = 4826809;
    long long max_num = (long long)std::powl(13, 13) - 1;

    long long nums_to_check = max_num - minimal_number;



    std::cout << nums_to_check << std::endl;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
