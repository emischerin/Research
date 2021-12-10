// 13pow13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <numeric>
#include <map>
#include <unordered_map>


#define TREDECIMAL 13
#define MAX_SUM 72 // Максимальная сумма из 6 чисел в тринадцатеричной системе счисления
#define FUCKECIMAL 169
template <typename T>
void PrintVector(std::vector<T> &v) 
{
    std::cout << "VECTOR SIZE:" << v.size() << std::endl;

    for (int i = 0; i < v.size(); ++i) {
        std::cout << v.at(i) << " ";
    }
    std::cout << std::endl;

}

template <typename T>
std::unique_ptr<std::vector<T>> ConvertToTredecimal(unsigned long long a)
{
    std::unique_ptr<std::vector<T>> tredecimal(new std::vector<T>);

    int counter = 0;
    unsigned long long remainder = 0;
    unsigned long long digit = a;

    while (counter < TREDECIMAL)
    {
        remainder = digit % TREDECIMAL;

        tredecimal->push_back(remainder);

        digit /= 13;
        counter++;

    }

    return tredecimal;
}

template <typename T>
std::vector<T>* ConvertTo169Ecimal(unsigned long long a)
{
    std::vector<T>* fuckecimal = new std::vector<T>();

    int counter = 0;
    unsigned long long remainder = 0;
    unsigned long long digit = a;
    unsigned long long fuck = 169;

    while (counter < TREDECIMAL)
    {
        remainder = digit % fuck;

        fuckecimal->push_back(remainder);

        digit /= fuck;
        counter++;

    }

    return fuckecimal;
}

bool IsBeautiful(std::unique_ptr<std::vector<unsigned long long>> &v)
{
    bool result = 0;

    unsigned long long first_sum = std::accumulate(v.get()->begin(),v.get()->begin() + 6 ,0);
    unsigned long long second_sum = std::accumulate(v.get()->end() - 6, v.get()->end(), 0);

    return first_sum == second_sum;

}

unsigned long long CalculateTredecimalSum(std::unique_ptr<std::vector<unsigned long long>> &v)
{    
    unsigned long long result = 0;

    if (v) {
        if (!v.get()->empty()) {
            result = std::accumulate(v.get()->begin(), v.get()->end(), 0);
        }
    }

    return result;
}

unsigned int FindBeautifulNumbers2(unsigned long long min_num,unsigned long long max_num)
{
    std::unique_ptr<std::vector<unsigned long long>> tredecimal;
    std::vector<unsigned long long> sums(MAX_SUM + 1);
    unsigned int beautifulnumberscount = 0;

    unsigned long long sum = 0;

    

    for (unsigned long long i = min_num; i < max_num; ++i) {

        tredecimal = ConvertToTredecimal<unsigned long long>(i);
        sum = CalculateTredecimalSum(tredecimal);

        sums[sum]++;

        std::cout << i << std::endl;
    }

    return beautifulnumberscount;
}

bool IsBeautifulForFive(std::unique_ptr<std::vector<unsigned long long>>& v)
{
    bool result = 0;

   /* unsigned long long first_sum = std::accumulate(v.get()->begin(), v.get()->begin() + 2, 0);
    unsigned long long second_sum = std::accumulate(v.get()->begin() + 3, v.get()->begin() + 4 , 0);*/

    unsigned long long first_sum = v.get()->at(0) + v.get()->at(1);
    unsigned long long second_sum = v.get()->at(3) + v.get()->at(4);

    return first_sum == second_sum;

}

bool IsBeautifulForFiveReverse(std::unique_ptr<std::vector<unsigned long long>>& v)
{
    bool result = 0;

    unsigned long long first_sum = std::accumulate(v.get()->begin(), v.get()->begin() + 2, 0);
    unsigned long long second_sum = std::accumulate(v.get()->end() - 2, v.get()->end(), 0);

    return first_sum == second_sum;



}



void CalculateMinus(const std::vector<unsigned int> &has_pair,std::vector<unsigned int>& minus)
{
    
    unsigned int difference = 0;

    for (unsigned int i = 1; i < has_pair.size(); ++i) {
        difference = has_pair[i] - has_pair[i - 1];
        minus.push_back(difference);

        
    }
}

void CalculateSDThirteen(const std::vector<unsigned long long>& sd, std::vector<unsigned long long>& result)
{

    unsigned int division = 0;

    for (unsigned int i = 0; i < sd.size(); ++i) {
        division = sd[i] / 13;
        result[i] = division;


    }
}

unsigned long long Sum(std::unique_ptr<std::vector<unsigned long long>>& v)
{
    return v.get()->at(0) + v.get()->at(1);
}



void FindModsForSums(std::unordered_map<int, std::vector<unsigned long long>>& m,
    std::vector<unsigned long long>& out,unsigned int i_map,unsigned int i_vec)
{

    int result = 0;
    int val = m[i_map].at(i_vec);

    for (int i = 1; i < 25; ++i) {
        
        result = val % i;
        out.push_back(result);
    }
}

void MaxNumBySums(std::vector<unsigned long long>& out,unsigned long long& max_num)
{
    for (int i = 1; i < 26; ++i) {
        out.push_back(max_num / i);
    }
}

void TestTheory()
{
    std::vector<unsigned int> nums(25);
    unsigned long long numbers_count = (unsigned long long)(std::powl(TREDECIMAL, 5));
    unsigned int mod_25 = 0;
    unsigned int mod_13 = 0;
   

    for (int i = 1; i < numbers_count + 1; ++i) {

        mod_13 = i % 13;
        mod_25 = mod_13 % (numbers_count /2);

        nums[mod_25]++;
    }

    int b = std::accumulate(nums.begin(), nums.end(), 0);
    int a = 0;


}

void TestModule()
{
    unsigned long long max_num = (unsigned long long)(std::powl(TREDECIMAL, 5)) - 1;
    const unsigned long long mod = 4;
    std::vector<unsigned long long> nums;

    for (unsigned long long i = 1; i < max_num + 1; i++) {
        
        if(i % mod == 0) nums.push_back(i);
        
    }

    int a = 0;

}

void CalculateFullSumsDistribution(std::unique_ptr<std::vector<unsigned long long>>& v,
    std::vector<unsigned long long>& fs)
{
    unsigned long long full_sum = 0;
    full_sum = std::accumulate(v.get()->begin(), v.get()->end(), 0);
    
    fs[full_sum]++;
        
}

void CalculateSumDistribution(std::unique_ptr<std::vector<unsigned long long>>& v,
    std::vector<unsigned long long>& sd)
{
    unsigned long long first_sum = v.get()->at(0) + v.get()->at(1);
    unsigned long long second_sum = v.get()->at(3) + v.get()->at(4);

    if (second_sum == first_sum)
        sd[first_sum]++;

}

void CalculateModuleDistribution(std::unique_ptr<std::vector<unsigned long long>>& v,
    std::vector<unsigned long long>& sd)
{
    unsigned long long first_sum = v.get()->at(0) + v.get()->at(1);
    unsigned long long second_sum = v.get()->at(3) + v.get()->at(4);

    if (second_sum == first_sum)
        sd[first_sum]++;

}

void TestFour()
{
    TestModule();
    TestTheory();
    unsigned long long numbers_count = (unsigned long long)(std::powl(TREDECIMAL, 4));
    unsigned long long max_number = (unsigned long long)(std::powl(TREDECIMAL, 4) - 1);
    unsigned long long thirteen = (unsigned long long)(std::powl(TREDECIMAL, 3));
    unsigned long long two = (unsigned long long)(std::powl(TREDECIMAL, 2));
    unsigned long long mult = 13 * two;
    unsigned long long min_number = max_number - 2197;
    unsigned long long sum = 0;

    std::unique_ptr<std::vector<unsigned long long>> tredecimal;
    std::vector<unsigned long long> sums_distribution(27);
    std::vector<unsigned long long> sums_distrib_13(27);
    std::vector<unsigned int> has_pair;
    std::vector<unsigned int> minus;
    std::unordered_map<int, std::vector<unsigned long long>> numbers_for_sum;
    std::vector<unsigned long long> full_sums_distribution_v(61);
    std::vector<unsigned long long> modules_distribution(13);
    std::vector<unsigned int> mods_of_two;
    std::vector<unsigned long long> sum_mods;
    std::vector<unsigned long long> maxnum_by_sums;
    std::vector<unsigned long long> all_numbers_mods(13);


    unsigned int beautifulnumberscount = 0;
    unsigned int mod = 0;

    for (unsigned long long i = 0; i < numbers_count; ++i) {
        tredecimal = ConvertToTredecimal<unsigned long long>(i);

        

        CalculateSumDistribution(tredecimal, sums_distribution);
        CalculateFullSumsDistribution(tredecimal, full_sums_distribution_v);

        if (IsBeautifulForFive(tredecimal)) {
            sum = Sum(tredecimal);
            mod = i % 13;
            modules_distribution[mod]++;
            mods_of_two.push_back(mod);
            beautifulnumberscount++;
            has_pair.push_back(i);
            numbers_for_sum[sum].push_back(i);
        }




    }

    MaxNumBySums(maxnum_by_sums, max_number); 
    FindModsForSums(numbers_for_sum, sum_mods, 1, 4);
    unsigned long long full_sum_count = std::accumulate(full_sums_distribution_v.begin(), full_sums_distribution_v.end(), (unsigned long long)0);
    CalculateMinus(has_pair, minus);
    CalculateSDThirteen(sums_distribution, sums_distrib_13);
    unsigned long long total_distib_sum = std::accumulate(sums_distribution.begin(), sums_distribution.end() - 1, (unsigned long long)0);

    unsigned long long a = (unsigned long long)(std::powl(TREDECIMAL, 2));







}


unsigned int SumInNotation(unsigned long long n, unsigned long long notation, unsigned int size)
{
    std::vector<unsigned long long> number;

    unsigned long long number_in_notation = n;
    unsigned long long remainder = 0;
    unsigned int result = 0;

    for (int i = 0; i < size + 1; ++i) {

        remainder = number_in_notation % notation;
        number.push_back(remainder);
        number_in_notation /= notation;


    }

    result = std::accumulate(number.begin(), number.end(), 0);

    return result;





}


void CalculateGearwheelPosition(unsigned long long num, std::vector<unsigned long long>& gearwheel_positions)
{
    const unsigned long long gearwheel_max_pos = 269568LL;
    unsigned long long result = 0;

    if (num != 0) result = gearwheel_max_pos% num;

    gearwheel_positions.push_back(result);
}


void CalculateGearwheelRounds(unsigned long long num, std::vector<unsigned long long>& gearwheel_positions)
{
    const unsigned long long gearwheel_max_round = 20736LL;
    unsigned long long result = 0;

    if (num != 0) result = num % gearwheel_max_round;

    gearwheel_positions.push_back(result);
}

unsigned long long ConvertToDecimal(unsigned long long tredecimal)
{
    if (tredecimal > 40) return 0;

    unsigned long long result = 0;

    unsigned long long first_digit = tredecimal % 10;
    unsigned long long second_digit = (tredecimal / 10) % 10;
    unsigned long long third_digit = (tredecimal / 100) % 10;

    result = (long long)std::powl(13, 0)* first_digit + (long long)std::powl(13, 1)* second_digit
        + (long long)std::powl(13, 2) * third_digit;

    return result;
    

}

unsigned long long ConvertSquareToDecimal(unsigned long long tredecimal)
{
    if (tredecimal > 40) return 0;

    unsigned long long square = tredecimal * tredecimal;

    unsigned long long result = 0;

    unsigned long long first_digit = square % 10;
    unsigned long long second_digit = (square/ 10) % 10;
    unsigned long long third_digit = (square / 100) % 10;

    result = (long long)std::powl(13, 0) * first_digit + (long long)std::powl(13, 1) * second_digit
        + (long long)std::powl(13, 2) * third_digit;

    return result;


}

void CalculateDifference(std::vector<unsigned int>& nums)
{
    const unsigned int max_sum_nums = nums[nums.size() - 1];
    const unsigned int max_num = (unsigned int)std::pow(13, 5) - 1;
    std::vector<int> result;
    std::unordered_map<unsigned int, unsigned int> sums;
    unsigned int counter = 0;
    unsigned int current_i = nums.size() / 2;
    const int max_sum = 24;
    unsigned int upper = nums.size() - 1;
    

    for (int i = 0; i < nums.size(); ++i) {
        result.push_back((max_num - nums[i]) % 13);
        if(nums[i] != 0 )sums[(max_num - nums[i]) % 13]++;
        --upper;
        
    }

    int a = 0;
   

}

void Divide(std::unordered_map<unsigned int, std::vector<unsigned int>>& out, std::vector<unsigned int>& nums,
    unsigned int times_divide,unsigned int num_to_divide)
{
    unsigned int tmp = 0;

    for (auto num : nums) {
        tmp = num;
        for (int i = 0; i < times_divide; ++i) {
            out[num].push_back(tmp / num_to_divide);
            tmp /= num_to_divide;
        }
    }
}

void DivideModules(std::unordered_map<unsigned int, std::vector<unsigned int>>& out, std::vector<unsigned int>& nums,
    unsigned int times_divide, unsigned int num_to_divide)
{
    unsigned int tmp = 0;

    for (auto num : nums) {
        tmp = num;
        for (int i = 0; i < times_divide; ++i) {
            out[num].push_back((tmp % num_to_divide));
            tmp /= num_to_divide;
        }
    }
}

void TestFive()
{
    TestModule();
    TestTheory();
    const unsigned long long min_num = 28561;
    const unsigned long long three = 85683;
    unsigned long long max_number = 57122;
    unsigned long long two_tredecimal = 57122;
    const unsigned long long twelve = 314171;
    const unsigned long long eight = 228488LL;
    const unsigned long long nine = 257049LL;
    const unsigned long long a_tredecimal = 285610;
    const unsigned long long b_tredecimal = 314171LL;
    unsigned long long numbers_count = (unsigned long long)(std::powl(TREDECIMAL, 5)); //three + 1;//max_number + 1;//(unsigned long long)(std::powl(TREDECIMAL, 5));

     //(unsigned long long)(std::powl(TREDECIMAL, 5) - 1);
    unsigned long long thirteen = (unsigned long long)(std::powl(TREDECIMAL, 3));
    unsigned long long two = (unsigned long long)(std::powl(TREDECIMAL, 2));
    unsigned long long mult = 13 * two;
    unsigned long long min_number = max_number - 2197;
    unsigned long long sum = 0;

    std::unique_ptr<std::vector<unsigned long long>> tredecimal;
    std::vector<unsigned long long>* fuckecimal = 0;
    std::vector<std::vector<unsigned long long>*> fuckecimal_container;
    std::vector<unsigned long long> sums_distribution(27);
    std::vector<unsigned long long> sums_distrib_13(27);
    std::vector<unsigned int> has_pair;
    std::vector<unsigned int> minus;
    std::unordered_map<int, std::vector<unsigned long long>> numbers_for_sum;
    std::vector<unsigned long long> full_sums_distribution_v(61);
    std::vector<unsigned long long> modules_distribution(13);
    std::vector<unsigned int> mods_of_two;
    std::vector<unsigned long long> sum_mods;
    std::vector<unsigned long long> maxnum_by_sums;
    std::vector<unsigned long long> all_numbers_mods(13);
    std::vector<unsigned long long> sums_in_notation;
    std::vector<unsigned long long>gearwheel_positions;
    std::vector<unsigned long long>gearwheel_rounds;
    std::unordered_map<unsigned int, std::vector<unsigned int>> divide_results;
    std::unordered_map<unsigned int, std::vector<unsigned int>> divide_module_results;
    std::vector<double> div;

    unsigned int beautifulnumberscount = 0;
    unsigned int mod = 0;
    unsigned int sum_in_notation;
    unsigned long long sum_decimal = 0;
    unsigned long long square_decimal = 0;

    for (long long i = 371292LL; i > 0 ;i-=169) {
        tredecimal = ConvertToTredecimal<unsigned long long>(i);
        

        sum = Sum(tredecimal);
        sum_decimal = ConvertToDecimal(sum);

        

        if (IsBeautifulForFive(tredecimal)) {
            /*CalculateGearwheelPosition(i, gearwheel_positions);
            CalculateGearwheelRounds(i, gearwheel_rounds);*/
            
            //CalculateSumDistribution(tredecimal, sums_distribution);
            //CalculateFullSumsDistribution(tredecimal, full_sums_distribution_v);
            fuckecimal = ConvertTo169Ecimal<unsigned long long>(i);
            fuckecimal_container.push_back(fuckecimal);
            square_decimal = ConvertSquareToDecimal(sum);
            sum_in_notation = SumInNotation(i,128, 32);
            sums_in_notation.push_back(sum_in_notation);
            mod = i % 13;
            if (i != 0) div.push_back(371293 / i);
            mods_of_two.push_back(mod);
            beautifulnumberscount++;
            has_pair.push_back(i);
            numbers_for_sum[sum].push_back(i); 
            
        }
             

        

    }
    //CalculateDifference(has_pair);
    Divide(divide_results, has_pair, 5, 13);
    DivideModules(divide_module_results, has_pair, 5, 13);
    MaxNumBySums(maxnum_by_sums, max_number);
     FindModsForSums(numbers_for_sum, sum_mods, 1, 4);
    unsigned long long full_sum_count = std::accumulate(full_sums_distribution_v.begin(), full_sums_distribution_v.end(), (unsigned long long)0);
    CalculateMinus(has_pair,minus);
    CalculateSDThirteen(sums_distribution, sums_distrib_13);
    unsigned long long total_distib_sum = std::accumulate(sums_distribution .begin(), sums_distribution.end() - 1, (unsigned long long)0);

    unsigned long long a = (unsigned long long)(std::powl(TREDECIMAL, 2));




    


}



unsigned int FindBeautifulNumbers(unsigned long long max_number)
{
    std::unique_ptr<std::vector<unsigned long long>> tredecimal;
    unsigned int beautifulnumberscount = 0;
    std::vector<unsigned long long> nums;
    unsigned long long low_border = (unsigned long long)std::powl(13, 12);

    for (unsigned long long i = max_number; i > max_number - low_border; i-=169) {
        tredecimal = ConvertToTredecimal<unsigned long long>(i);

        

        if (IsBeautiful(tredecimal)) {
            beautifulnumberscount++;
            nums.push_back(i);
        }
            

        

    }

    return beautifulnumberscount;
}

void ToTredecimal(unsigned long long a)
{
    std::vector<unsigned long long> tredecimal;

    int counter = 0;
    unsigned long long remainder = 0;
    unsigned long long digit = a;

    while (counter < 13)
    {
        remainder = digit % 13;

        tredecimal.push_back(remainder);

        digit /= 13;
        counter++;

    }

    PrintVector(tredecimal);

}

void CalculateSymmetricalSumDistribution(std::unique_ptr<std::vector<unsigned long long>>& v,
    std::vector<unsigned long long>& sd)
{
    unsigned long long first_sum = v.get()->at(0) + v.get()->at(1);
    unsigned long long second_sum = v.get()->at(3) + v.get()->at(4);
    unsigned long long full_sum = first_sum + second_sum;
    sd[full_sum]++;

}

unsigned long long SymmetricalSum(std::unique_ptr<std::vector<unsigned long long>>& v)
{
    return v.get()->at(0) + v.get()->at(1) + v.get()->at(4) + v.get()->at(3);
}




void TestFiveForFullSymmetricalSum()
{
    
    unsigned long long numbers_count = (unsigned long long)(std::powl(TREDECIMAL, 5));
    unsigned long long max_number = (unsigned long long)(std::powl(TREDECIMAL, 5) - 1);
    unsigned long long thirteen = (unsigned long long)(std::powl(TREDECIMAL, 3));
    unsigned long long two = (unsigned long long)(std::powl(TREDECIMAL, 2));
    unsigned long long mult = 13 * two;
    unsigned long long min_number = max_number - 2197;
    unsigned long long sum = 0;

    std::unique_ptr<std::vector<unsigned long long>> tredecimal;
    std::vector<unsigned long long> sums_distribution(49);
    std::vector<unsigned long long> sums_distrib_13(49);
    std::vector<unsigned int> has_pair;
    std::vector<unsigned int> minus;
    std::unordered_map<int, std::vector<unsigned long long>> numbers_for_sum;
    std::vector<unsigned long long> full_sums_distribution_v(61);
    std::vector<unsigned long long> modules_distribution(13);
    std::vector<unsigned int> mods_of_two;
    std::vector<unsigned long long> sum_mods;
    std::vector<unsigned long long> maxnum_by_sums;
    std::vector<unsigned long long> all_numbers_mods(13);


    unsigned int beautifulnumberscount = 0;
    unsigned int mod = 0;

    for (unsigned long long i = 0; i < numbers_count; ++i) {
        tredecimal = ConvertToTredecimal<unsigned long long>(i);

        

        CalculateSymmetricalSumDistribution(tredecimal, sums_distribution);
        CalculateFullSumsDistribution(tredecimal, full_sums_distribution_v);

        if (IsBeautifulForFive(tredecimal)) {
            sum = SymmetricalSum(tredecimal);
            mod = i % 13;
                       
            beautifulnumberscount++;
            has_pair.push_back(i);
            numbers_for_sum[sum].push_back(i);
        }




    }

    MaxNumBySums(maxnum_by_sums, max_number);
   // FindModsForSums(numbers_for_sum, sum_mods, 1, 4);
    unsigned long long full_sum_count = std::accumulate(full_sums_distribution_v.begin(), full_sums_distribution_v.end(), (unsigned long long)0);
     CalculateMinus(has_pair, minus);
    CalculateSDThirteen(sums_distribution, sums_distrib_13);
    unsigned long long total_distib_sum = std::accumulate(sums_distribution.begin(), sums_distribution.end() - 1, (unsigned long long)0);

    unsigned long long a = (unsigned long long)(std::powl(TREDECIMAL, 2));







}

//unsigned int CalculateBeautifulNumbers(unsigned long long max_number)
//{
//
//}


void TestConvertToNotation(unsigned long long n, unsigned long long notation,unsigned int size)
{
    std::vector<unsigned long long> number;

    unsigned long long number_in_notation = n;
    unsigned long long remainder = 0;


    for (int i = 0; i < size + 1; ++i) {

        remainder = number_in_notation % notation;
        number.push_back(remainder);
        number_in_notation /= notation;
        

    }

    unsigned int sum = std::accumulate(number.begin(), number.end(), 0);

    int a = 0;
    




}

void TestPows()
{
    unsigned long long a = (unsigned long long)std::powl(13, 13) - 1;
    unsigned long long b = 301082946198215LL;//(unsigned long long)std::powl(13, 12);
    std::unique_ptr<std::vector<unsigned long long>> a_tredecimal;
    std::unique_ptr<std::vector<unsigned long long>> b_tredecimal;
    a_tredecimal = ConvertToTredecimal<unsigned long long>(a);
    b_tredecimal = ConvertToTredecimal<unsigned long long>(b);

    unsigned long long c = a - b;

    int g = 0;
}

void TestModules()
{
    unsigned long max_num = (unsigned long)std::powl(13, 5) - 1;
    unsigned long current = max_num;
    unsigned long nums = 0;
    unsigned long remainder = 0;

    while (current > 0) {
        remainder = current % 36;

        if (remainder == 0) {
            nums++;
            current--; 
        }
        else {
            current -=  current % 36;
        }
    }

    int a = 0;
}

int main()
{
    //TestModules();
    /*long double a = 13;
    long double b = std::powl(a, 12);
    long double c = std::powl(a, 13);
    unsigned long long max_number = (unsigned long long)c - 1;
    long double d = c - b;
    std::cout << d << std::endl;

    std::cout << sizeof(max_number) << std::endl;
    std::cout << sizeof(int) << std::endl;

  /*  ToTredecimal(max_number);*/
    //TestConvertToNotation(284049, 26, 12);
    
    TestFive();
    unsigned long long max_number = (unsigned long long)(std::powl(TREDECIMAL,TREDECIMAL) - 1);
    unsigned long long min_number = (max_number - (unsigned long long)(std::powl(TREDECIMAL, 6)));
    unsigned long long min_number2 = (unsigned long long)(std::powl(TREDECIMAL, 6));
    unsigned long long numbers_count = max_number - min_number;
    unsigned long long a = max_number - min_number2;
   

    unsigned int beautiful_numbers = FindBeautifulNumbers(max_number);

    std::cout << beautiful_numbers << std::endl;


    FindBeautifulNumbers2(0, min_number2);

    return 0;
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
