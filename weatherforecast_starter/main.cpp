/* 
Assignment 4: Weather Forecast

This assignment works with template functions and lambdas to become the best weather forecaster
at the Stanford Daily. Be sure to read the assignment details in the PDF.

Submit to Paperless by 11:59pm on 2/16/2024.
*/

// TODO: import anything from the STL that might be useful!
#include <iostream>
#include <vector>
#include <concepts>
#include <algorithm>
#include <numeric>
// TODO: write convert_f_to_c function here. Remember it must be a template function that always returns
// a double.
// [function definition here]
template<class type>
concept Numeric = std::integral<type> || std::floating_point<type>;

template<Numeric type> 
double convert_f_to_c(type input_f){
    double input = input_f;
    return static_cast<double>((input - 32 )*5/9);
};

template<typename Function>
std::vector<double> get_forecast(std::vector<std::vector<double>> readings, Function fn) {
    // TODO: write get_forecast here!
    std::vector<double> result;
    for(auto i = readings.begin(); i != readings.end(); i++){
        // std::cout<<fn(*i)<<std::endl;
        result.push_back(fn(*i));
    }
    return result;
}

int main() {
    std::vector<std::vector<int>> readings = {
        {70, 75, 80, 85, 90},
        {60, 65, 70, 75, 80},
        {50, 55, 60, 65, 70},
        {40, 45, 50, 55, 60},
        {30, 35, 40, 45, 50},
        {50, 55, 61, 65, 70},
        {40, 45, 50, 55, 60}
    };
    std::vector<std::vector<double>> output(readings.size(),std::vector<double>(5,0));
    auto begin = output.begin();
    for (auto i = readings.begin();i != readings.end() ;i++){
        auto type_temp = (*i)[0];
        std::transform((*i).begin(),(*i).end(),(*begin).begin(),convert_f_to_c<decltype(type_temp)>);
        begin++;
    }
    std::for_each(output.begin(),output.end(),[](std::vector<double> params){
        std::copy(params.begin(),params.end(),std::ostream_iterator<double>(std::cout," "));
        std::cout<<"\n";
    });
    std::vector<double> max = get_forecast(output,[](std::vector<double> input){ auto [min,max] = std::minmax_element(input.begin(),input.end()); return *max;});
    std::vector<double> min = get_forecast(output,[](std::vector<double> input){ auto [min,max] = std::minmax_element(input.begin(),input.end()); return *min;});
    std::vector<double> ave = get_forecast(output,[](std::vector<double> input){ return  std::accumulate(input.begin(),input.end(),0.0);});

    return 0;
}