#include "main.h"

    Trajectory AWP::p0Left = {
        {0,0,0,0,0,0},
        {0.0003,0.0003,0.028,0.025,2.6752,2.3874},
        {0.001,0.0009,0.0742,0.0642,4.708,3.9973},
        {0.0022,0.0019,0.1227,0.104,4.9482,4.0567},
        {0.0039,0.0033,0.1716,0.144,4.9114,4.0143},
        {0.0062,0.0052,0.2213,0.1842,4.9544,4.018},
        {0.0088,0.0074,0.2711,0.2243,5.009,4.0309},
        {0.0121,0.0101,0.3206,0.2648,4.9162,4.0216},
        {0.0158,0.0131,0.3709,0.3048,5.0382,4.002},
        {0.02,0.0166,0.4206,0.3449,4.9762,4.0191},
        {0.0247,0.0204,0.4707,0.3849,5.004,3.9953},
        {0.0299,0.0247,0.5208,0.4247,5.0166,3.9857},
        {0.0356,0.0293,0.571,0.4644,5.0302,3.9743},
        {0.0418,0.0343,0.6213,0.5039,5.045,3.9612},
        {0.0485,0.0398,0.6716,0.5434,5.0336,3.9525},
        {0.0557,0.0456,0.7224,0.5827,5.07,3.9219},
        {0.0635,0.0518,0.7735,0.6216,5.1175,3.8977},
        {0.0717,0.0584,0.8244,0.6606,5.0952,3.9025},
        {0.0805,0.0654,0.8757,0.6994,5.1105,3.8741},
        {0.0897,0.0728,0.9276,0.7375,5.2055,3.8159},
        {0.0996,0.0806,0.979,0.7762,5.1219,3.8549},
        {0.1098,0.0887,1.0316,0.8135,5.2809,3.7445},
        {0.1207,0.0972,1.0835,0.8515,5.184,3.8009},
        {0.132,0.1061,1.1365,0.8886,5.2981,3.7048},
        {0.144,0.1154,1.1895,0.9256,5.2929,3.7008},
        {0.1564,0.125,1.2432,0.9619,5.3769,3.6323},
        {0.1693,0.1349,1.2969,0.9982,5.3766,3.6237},
        {0.1829,0.1453,1.3511,1.0339,5.4172,3.5759},
        {0.1969,0.156,1.4062,1.0689,5.512,3.4954},
        {0.2115,0.167,1.4612,1.1038,5.4961,3.4945},
        {0.2267,0.1784,1.5174,1.1377,5.6191,3.3854},
        {0.2424,0.1901,1.574,1.1711,5.6614,3.3459},
        {0.2587,0.2021,1.6307,1.2043,5.6762,3.3168},
        {0.2756,0.2145,1.6887,1.2364,5.7893,3.208},
        {0.2931,0.2272,1.7474,1.2678,5.8664,3.1348},
        {0.3112,0.2402,1.8068,1.2983,5.9488,3.0559},
        {0.3298,0.2534,1.8669,1.3282,6.0097,2.9908},
        {0.3491,0.267,1.9278,1.3572,6.0987,2.8983},
        {0.369,0.2809,1.9899,1.3852,6.1946,2.7997},
        {0.3896,0.295,2.0534,1.4117,6.3541,2.6511},
        {0.4107,0.3094,2.1175,1.4375,6.4167,2.5854},
        {0.4326,0.324,2.1829,1.4622,6.5339,2.4656},
        {0.4551,0.3388,2.2495,1.4856,6.659,2.3384},
        {0.4782,0.3539,2.3177,1.5074,6.8225,2.1789},
        {0.5021,0.3692,2.3871,1.528,6.9378,2.0617},
        {0.5267,0.3847,2.458,1.5471,7.087,1.911},
        {0.552,0.4003,2.5307,1.5644,7.2763,1.7256},
        {0.578,0.4161,2.6048,1.5802,7.4129,1.5874},
        {0.6048,0.4321,2.6807,1.5944,7.5839,1.4151},
        {0.6324,0.4481,2.7586,1.6064,7.7951,1.2075},
        {0.6608,0.4643,2.8377,1.6173,7.9112,1.0855},
        {0.69,0.4805,2.9193,1.6257,8.1614,0.8388},
        {0.72,0.4969,3.0025,1.6325,8.3135,0.6854},
        {0.7509,0.5132,3.0878,1.6373,8.5313,0.4706},
        {0.7826,0.5296,3.1745,1.6405,8.6711,0.3292},
        {0.8153,0.5461,3.2628,1.6422,8.8317,0.167},
        {0.8488,0.5625,3.3529,1.6421,9.0143,-0.0135},
        {0.8832,0.5789,3.4439,1.6411,9.0962,-0.0976},
        {0.9186,0.5953,3.5361,1.6389,9.2224,-0.2225},
        {0.9549,0.6116,3.6288,1.6362,9.2702,-0.2696},
        {0.992,0.628,3.7172,1.6311,8.8417,-0.5048},
        {1.0294,0.6438,3.7379,1.5831,2.0628,-4.7971},
        {1.0667,0.6592,3.7258,1.5359,-1.2031,-4.7229},
        {1.1038,0.6741,3.7125,1.4998,-1.3331,-3.6135},
        {1.1408,0.6889,3.7017,1.4708,-1.0757,-2.9004},
        {1.1778,0.7033,3.6943,1.4481,-0.7452,-2.2669},
        {1.2147,0.7177,3.6901,1.4318,-0.4213,-1.6274},
        {1.2516,0.7319,3.6874,1.4238,-0.271,-0.8059},
        {1.2884,0.7461,3.6887,1.4215,0.1349,-0.2299},
        {1.3254,0.7604,3.6925,1.4268,0.3748,0.531},
        {1.3623,0.7748,3.6987,1.4399,0.6241,1.3066},
        {1.3994,0.7894,3.708,1.4604,0.9308,2.0572},
        {1.4366,0.8043,3.7214,1.4879,1.3391,2.7498},
        {1.474,0.8195,3.7375,1.5242,1.6066,3.6314},
        {1.5116,0.8352,3.757,1.5692,1.9506,4.4957},
        {1.5494,0.8514,3.7823,1.6213,2.5306,5.2079},
        {1.5875,0.8682,3.8083,1.6834,2.599,6.2091},
        {1.6258,0.8857,3.8334,1.7483,2.508,6.4933},
        {1.6644,0.9039,3.8534,1.8183,1.9998,7.0022},
        {1.703,0.9228,3.8683,1.8933,1.4972,7.4994},
        {1.7419,0.9426,3.8804,1.9713,1.2094,7.7911},
        {1.7805,0.9629,3.8695,2.0384,-1.0941,6.7144},
        {1.8183,0.9835,3.7768,2.0545,-9.2609,1.6118},
        {1.855,1.0042,3.6695,2.0718,-10.736,1.733},
        {1.8906,1.0251,3.563,2.0883,-10.654,1.6535},
        {1.9252,1.0461,3.4597,2.1017,-10.331,1.3328},
        {1.9588,1.0672,3.3599,2.1114,-9.9727,0.9729},
        {1.9915,1.0884,3.2633,2.118,-9.6548,0.6567},
        {2.0232,1.1096,3.1706,2.1207,-9.2766,0.2725},
        {2.054,1.1308,3.0804,2.1209,-9.0203,0.0248},
        {2.0839,1.152,2.9942,2.1171,-8.6201,-0.3819},
        {2.113,1.1731,2.9107,2.1106,-8.3503,-0.651},
        {2.1413,1.1941,2.8302,2.1012,-8.0542,-0.9462},
        {2.1689,1.215,2.7522,2.0891,-7.7866,-1.2085},
        {2.1956,1.2357,2.6776,2.0737,-7.4736,-1.5337},
        {2.2217,1.2563,2.6044,2.0569,-7.3078,-1.6851},
        {2.247,1.2767,2.5344,2.0369,-7.0056,-1.9999},
        {2.2717,1.2968,2.4659,2.0155,-6.8534,-2.1415},
        {2.2957,1.3167,2.3997,1.9916,-6.6148,-2.3886},
        {2.319,1.3364,2.3352,1.9662,-6.4584,-2.5438},
        {2.3418,1.3558,2.2722,1.9392,-6.2967,-2.6985},
        {2.3639,1.3749,2.211,1.9103,-6.1202,-2.884},
        {2.3854,1.3937,2.1509,1.8804,-6.0029,-2.9938},
        {2.4063,1.4122,2.0923,1.8489,-5.8579,-3.1423},
        {2.4266,1.4303,2.0349,1.8163,-5.7425,-3.2614},
        {2.4464,1.4482,1.9785,1.7828,-5.6423,-3.3528},
        {2.4657,1.4657,1.9232,1.748,-5.5276,-3.4774},
        {2.4844,1.4828,1.8687,1.7126,-5.4493,-3.5461},
        {2.5025,1.4995,1.8152,1.6761,-5.3534,-3.6522},
        {2.5201,1.5159,1.7623,1.639,-5.2863,-3.7088},
        {2.5372,1.5319,1.7103,1.601,-5.2065,-3.7992},
        {2.5538,1.5476,1.6588,1.5625,-5.1485,-3.8455},
        {2.5699,1.5628,1.608,1.5233,-5.0823,-3.9227},
        {2.5855,1.5776,1.5576,1.4837,-5.0316,-3.9604},
        {2.6005,1.5921,1.5079,1.4434,-4.9789,-4.0332},
        {2.6151,1.6061,1.4585,1.4028,-4.9359,-4.0536},
        {2.6292,1.6197,1.4096,1.3616,-4.888,-4.1131},
        {2.6429,1.6329,1.361,1.3201,-4.854,-4.1505},
        {2.656,1.6457,1.3129,1.2783,-4.8169,-4.1811},
        {2.6686,1.6581,1.265,1.2361,-4.7835,-4.2175},
        {2.6808,1.67,1.2175,1.1937,-4.7552,-4.2491},
        {2.6925,1.6815,1.1703,1.151,-4.7246,-4.2717},
        {2.7037,1.6926,1.1232,1.108,-4.6991,-4.2999},
        {2.7145,1.7032,1.0765,1.0647,-4.6774,-4.3246},
        {2.7248,1.7134,1.03,1.0213,-4.6578,-4.3476},
        {2.7347,1.7233,0.9836,0.9776,-4.6263,-4.3546},
        {2.744,1.7326,0.9374,0.9338,-4.6292,-4.3967},
        {2.7529,1.7415,0.8914,0.8898,-4.594,-4.3918},
        {2.7614,1.7499,0.8456,0.8457,-4.5866,-4.4165},
        {2.7694,1.758,0.7998,0.8013,-4.5655,-4.4234},
        {2.7769,1.7655,0.7542,0.7569,-4.563,-4.4457},
        {2.784,1.7726,0.7088,0.7124,-4.5538,-4.4598},
        {2.7907,1.7793,0.6634,0.6677,-4.5231,-4.4529},
        {2.7968,1.7855,0.6181,0.623,-4.5377,-4.4826},
        {2.8026,1.7913,0.5729,0.5781,-4.5051,-4.4726},
        {2.8078,1.7967,0.5278,0.5332,-4.5261,-4.5039},
        {2.8127,1.8015,0.4828,0.4883,-4.4913,-4.4897},
        {2.817,1.806,0.4379,0.4433,-4.5026,-4.509},
        {2.821,1.81,0.393,0.3981,-4.4797,-4.5013},
        {2.8245,1.8135,0.3481,0.353,-4.4958,-4.5237},
        {2.8275,1.8166,0.3033,0.3077,-4.4704,-4.5114},
        {2.8301,1.8192,0.2582,0.2623,-4.464,-4.5108},
        {2.8322,1.8214,0.2133,0.2168,-4.4916,-4.5426},
        {2.8339,1.8231,0.1685,0.1713,-4.456,-4.5171},
        {2.8352,1.8244,0.1239,0.1261,-4.5104,-4.5711},
        {2.836,1.8252,0.0786,0.0802,-4.3571,-4.4284},
        {2.8363,1.8255,0.0276,0.0284,-4.0941,-4.1584}
    };









