/**
 * @file main.cpp
 * @author Jason Zhou (24JasonZ@students.tas.tw)
 * @brief This is a custom C++ script used to convert our path matrices to 
 *        plain values in "leftOriginal.txt" and "rightOriginal.txt". 
 *        Through this custom script, we are able to plot it with matplotlib. 
 * @version 0.1
 * @date 2021-11-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

ofstream file;

std::vector<std::vector<double>> pathLeft = {
        {0,0},
        {0.0339,3.2998},
        {0.0911,5.8399},
        {0.1503,5.9394},
        {0.2105,5.9737},
        {0.2705,6.0422},
        {0.3302,5.982},
        {0.3902,6.0006},
        {0.4502,5.9881},
        {0.5102,6.0176},
        {0.5702,5.9841},
        {0.6302,6.0088},
        {0.6902,5.9965},
        {0.7502,6.0015},
        {0.8102,6.0054},
        {0.8701,5.9961},
        {0.93,6.001},
        {0.99,5.9936},
        {1.0501,5.9989},
        {1.1102,6.0038},
        {1.1701,6.0084},
        {1.23,5.9923},
        {1.2901,5.9983},
        {1.3501,6.0039},
        {1.41,5.9998},
        {1.47,5.9963},
        {1.53,6.0025},
        {1.59,5.9995},
        {1.6501,5.9968},
        {1.7101,6.0033},
        {1.7701,6.001},
        {1.8301,5.9989},
        {1.8901,5.9972},
        {1.9501,6.0039},
        {2.0101,6.0023},
        {2.0701,5.9927},
        {2.1301,6.0078},
        {2.1901,5.9905},
        {2.2501,6.0055},
        {2.3101,6.0044},
        {2.3701,5.9957},
        {2.43,6.0027},
        {2.49,5.9943},
        {2.5501,6.0013},
        {2.6101,6.0007},
        {2.6701,6.0002},
        {2.7301,6.0071},
        {2.79,5.9918},
        {2.8501,5.9989},
        {2.9101,6.0058},
        {2.9701,5.9982},
        {3.0301,5.9979},
        {3.09,6.0048},
        {3.1501,5.9904},
        {3.2101,6.0114},
        {3.2701,5.9901},
        {3.3301,6.004},
        {3.3901,6.0038},
        {3.4501,5.9968},
        {3.51,6.0035},
        {3.57,5.9966},
        {3.63,5.9967},
        {3.6901,6.0033},
        {3.75,6.0033},
        {3.81,5.9966},
        {3.87,5.9967},
        {3.9301,6.0033},
        {3.9901,6.0033},
        {4.05,5.9968},
        {4.1101,5.9969},
        {4.1701,6.0034},
        {4.23,6.0035},
        {4.2901,5.9909},
        {4.3501,6.01},
        {4.4101,5.9912},
        {4.4701,6.0101},
        {4.53,5.9915},
        {4.59,6.0041},
        {4.65,5.9981},
        {4.7101,5.9982},
        {4.7701,6.0045},
        {4.83,5.9986},
        {4.89,5.9988},
        {4.9501,5.999},
        {4.9967,4.6656},
        {5,0.3307},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {4.9697,-3.0239},
        {4.9097,-6.0027},
        {4.8497,-6.003},
        {4.7898,-5.9973},
        {4.7297,-5.9975},
        {4.6697,-6.0037},
        {4.6097,-5.9979},
        {4.5498,-6.0042},
        {4.4898,-5.9923},
        {4.4297,-6.0046},
        {4.3698,-5.9987},
        {4.3097,-5.9989},
        {4.2498,-6.0053},
        {4.1898,-5.9931},
        {4.1298,-6.0057},
        {4.0698,-5.9933},
        {4.0098,-6.006},
        {3.9498,-5.9936},
        {3.8898,-6.0064},
        {3.8298,-5.9939},
        {3.7698,-6.0068},
        {3.7098,-5.9941},
        {3.6498,-6.0006},
        {3.5898,-6.0008},
        {3.5298,-6.0009},
        {3.4698,-6.0011},
        {3.4098,-5.9946},
        {3.3497,-6.0013},
        {3.2897,-6.0014},
        {3.2298,-6.0015},
        {3.1698,-6.0016},
        {3.1098,-5.995},
        {3.0498,-6.0018},
        {2.9898,-5.9951},
        {2.9297,-6.0019},
        {2.8697,-6.002},
        {2.8098,-6.0021},
        {2.7498,-5.9953},
        {2.6898,-6.0021},
        {2.6298,-6.0022},
        {2.5698,-5.9953},
        {2.5098,-6.0022},
        {2.4498,-5.9952},
        {2.3898,-6.0092},
        {2.3298,-5.9881},
        {2.2698,-6.0091},
        {2.2098,-5.9949},
        {2.1498,-6.0019},
        {2.0898,-5.9946},
        {2.0298,-6.0088},
        {1.9699,-5.9942},
        {1.9099,-6.0012},
        {1.8499,-5.9937},
        {1.7898,-6.0079},
        {1.7299,-5.9929},
        {1.6699,-6.0071},
        {1.6099,-5.9919},
        {1.5499,-6.006},
        {1.4899,-5.9904},
        {1.4298,-6.0044},
        {1.3698,-6.0035},
        {1.3099,-5.9947},
        {1.2499,-6.0008},
        {1.1899,-5.999},
        {1.1299,-6.0048},
        {1.07,-5.9944},
        {1.01,-5.9991},
        {0.9499,-5.9952},
        {0.8899,-6.0067},
        {0.8299,-5.9927},
        {0.7699,-6.0018},
        {0.7099,-6.001},
        {0.65,-5.9976},
        {0.59,-5.9998},
        {0.53,-5.9978},
        {0.47,-5.9996},
        {0.41,-5.994},
        {0.35,-6.0003},
        {0.29,-5.9964},
        {0.23,-6.0097},
        {0.17,-5.9817},
        {0.11,-6.013},
        {0.0498,-5.9624}
    }
;
std::vector<std::vector<double>> pathRight = {
        {0,0},
        {0.0339,3.2998},
        {0.0911,5.8399},
        {0.1503,5.9394},
        {0.2105,5.9737},
        {0.2705,6.0422},
        {0.3302,5.982},
        {0.3902,6.0006},
        {0.4502,5.9881},
        {0.5102,6.0176},
        {0.5702,5.9841},
        {0.6302,6.0088},
        {0.6902,5.9965},
        {0.7502,6.0015},
        {0.8102,6.0054},
        {0.8701,5.9961},
        {0.93,6.001},
        {0.99,5.9936},
        {1.0501,5.9989},
        {1.1102,6.0038},
        {1.1701,6.0084},
        {1.23,5.9923},
        {1.2901,5.9983},
        {1.3501,6.0039},
        {1.41,5.9998},
        {1.47,5.9963},
        {1.53,6.0025},
        {1.59,5.9995},
        {1.6501,5.9968},
        {1.7101,6.0033},
        {1.7701,6.001},
        {1.8301,5.9989},
        {1.8901,5.9972},
        {1.9501,6.0039},
        {2.0101,6.0023},
        {2.0701,5.9927},
        {2.1301,6.0078},
        {2.1901,5.9905},
        {2.2501,6.0055},
        {2.3101,6.0044},
        {2.3701,5.9957},
        {2.43,6.0027},
        {2.49,5.9943},
        {2.5501,6.0013},
        {2.6101,6.0007},
        {2.6701,6.0002},
        {2.7301,6.0071},
        {2.79,5.9918},
        {2.8501,5.9989},
        {2.9101,6.0058},
        {2.9701,5.9982},
        {3.0301,5.9979},
        {3.09,6.0048},
        {3.1501,5.9904},
        {3.2101,6.0114},
        {3.2701,5.9901},
        {3.3301,6.004},
        {3.3901,6.0038},
        {3.4501,5.9968},
        {3.51,6.0035},
        {3.57,5.9966},
        {3.63,5.9967},
        {3.6901,6.0033},
        {3.75,6.0033},
        {3.81,5.9966},
        {3.87,5.9967},
        {3.9301,6.0033},
        {3.9901,6.0033},
        {4.05,5.9968},
        {4.1101,5.9969},
        {4.1701,6.0034},
        {4.23,6.0035},
        {4.2901,5.9909},
        {4.3501,6.01},
        {4.4101,5.9912},
        {4.4701,6.0101},
        {4.53,5.9915},
        {4.59,6.0041},
        {4.65,5.9981},
        {4.7101,5.9982},
        {4.7701,6.0045},
        {4.83,5.9986},
        {4.89,5.9988},
        {4.9501,5.999},
        {4.9967,4.6656},
        {5,0.3307},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {5,0},
        {4.9697,-3.0239},
        {4.9097,-6.0027},
        {4.8497,-6.003},
        {4.7898,-5.9973},
        {4.7297,-5.9975},
        {4.6697,-6.0037},
        {4.6097,-5.9979},
        {4.5498,-6.0042},
        {4.4898,-5.9923},
        {4.4297,-6.0046},
        {4.3698,-5.9987},
        {4.3097,-5.9989},
        {4.2498,-6.0053},
        {4.1898,-5.9931},
        {4.1298,-6.0057},
        {4.0698,-5.9933},
        {4.0098,-6.006},
        {3.9498,-5.9936},
        {3.8898,-6.0064},
        {3.8298,-5.9939},
        {3.7698,-6.0068},
        {3.7098,-5.9941},
        {3.6498,-6.0006},
        {3.5898,-6.0008},
        {3.5298,-6.0009},
        {3.4698,-6.0011},
        {3.4098,-5.9946},
        {3.3497,-6.0013},
        {3.2897,-6.0014},
        {3.2298,-6.0015},
        {3.1698,-6.0016},
        {3.1098,-5.995},
        {3.0498,-6.0018},
        {2.9898,-5.9951},
        {2.9297,-6.0019},
        {2.8697,-6.002},
        {2.8098,-6.0021},
        {2.7498,-5.9953},
        {2.6898,-6.0021},
        {2.6298,-6.0022},
        {2.5698,-5.9953},
        {2.5098,-6.0022},
        {2.4498,-5.9952},
        {2.3898,-6.0092},
        {2.3298,-5.9881},
        {2.2698,-6.0091},
        {2.2098,-5.9949},
        {2.1498,-6.0019},
        {2.0898,-5.9946},
        {2.0298,-6.0088},
        {1.9699,-5.9942},
        {1.9099,-6.0012},
        {1.8499,-5.9937},
        {1.7898,-6.0079},
        {1.7299,-5.9929},
        {1.6699,-6.0071},
        {1.6099,-5.9919},
        {1.5499,-6.006},
        {1.4899,-5.9904},
        {1.4298,-6.0044},
        {1.3698,-6.0035},
        {1.3099,-5.9947},
        {1.2499,-6.0008},
        {1.1899,-5.999},
        {1.1299,-6.0048},
        {1.07,-5.9944},
        {1.01,-5.9991},
        {0.9499,-5.9952},
        {0.8899,-6.0067},
        {0.8299,-5.9927},
        {0.7699,-6.0018},
        {0.7099,-6.001},
        {0.65,-5.9976},
        {0.59,-5.9998},
        {0.53,-5.9978},
        {0.47,-5.9996},
        {0.41,-5.994},
        {0.35,-6.0003},
        {0.29,-5.9964},
        {0.23,-6.0097},
        {0.17,-5.9817},
        {0.11,-6.013},
        {0.0498,-5.9624}
    }
;
    
int main()
{
    file.open("leftOriginal.txt", ios::trunc);
    for(int i = 0; i < pathLeft.size(); i++) {
        file << pathLeft[i][0] << endl;
    }
    file.close();

    file.open("rightOriginal.txt", ios::trunc);
    for(int i = 0; i < pathRight.size(); i++) {
        file << pathRight[i][0] << endl;
    }
    file.close();

    return 0;
}