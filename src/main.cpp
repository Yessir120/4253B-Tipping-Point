#include "main.h"

Trajectory path = {
        {0,0,0,0,0,0},
        {0.0003,0.0002,0.0332,0.022,3.2472,2.1528},
        {0.0012,0.0008,0.0859,0.0523,5.1444,2.9557},
        {0.0026,0.0015,0.1462,0.081,6.3178,3.0078},
        {0.0047,0.0027,0.2039,0.1119,5.6838,3.0482},
        {0.0073,0.0041,0.2663,0.14,6.2637,2.8153},
        {0.0106,0.0057,0.3264,0.1693,6.0805,2.9598},
        {0.0144,0.0077,0.3859,0.1992,5.9539,3.002},
        {0.0189,0.01,0.4466,0.2287,6.0428,2.9301},
        {0.024,0.0126,0.5079,0.2574,6.1526,2.8821},
        {0.0297,0.0155,0.5676,0.2876,5.9574,3.0202},
        {0.036,0.0187,0.6283,0.3172,6.0386,2.9455},
        {0.0429,0.0221,0.6896,0.3461,6.1371,2.8906},
        {0.0503,0.0259,0.7497,0.3757,6.0479,2.9738},
        {0.0584,0.0299,0.8085,0.4069,5.8457,3.1048},
        {0.0671,0.0343,0.8704,0.4351,6.198,2.8252},
        {0.0764,0.0389,0.9305,0.4649,6.0273,2.9919},
        {0.0863,0.0439,0.9896,0.4956,5.9229,3.0656},
        {0.0968,0.0491,1.0496,0.5255,5.9963,2.9944},
        {0.1079,0.0547,1.1096,0.5556,5.9873,3.0053},
        {0.1196,0.0605,1.1702,0.5851,6.0686,2.9488},
        {0.1319,0.0667,1.229,0.6161,5.8839,3.1089},
        {0.1448,0.0732,1.2886,0.6466,5.9515,3.0425},
        {0.1582,0.0799,1.3487,0.6764,6.0268,2.9886},
        {0.1723,0.087,1.4065,0.7087,5.7538,3.2209},
        {0.187,0.0944,1.4672,0.7382,6.0713,2.9439},
        {0.2022,0.1021,1.5259,0.7693,5.8937,3.1199},
        {0.2181,0.1101,1.5831,0.8021,5.7,3.2776},
        {0.2345,0.1184,1.6431,0.8322,6.0075,3.0059},
        {0.2515,0.1271,1.7005,0.8647,5.7413,3.2547},
        {0.2691,0.1361,1.7585,0.8968,5.7941,3.2023},
        {0.2872,0.1453,1.8168,0.9283,5.8508,3.161},
        {0.306,0.155,1.8728,0.9624,5.5782,3.4034},
        {0.3253,0.1649,1.9314,0.9939,5.8656,3.1458},
        {0.3452,0.1752,1.9874,1.0279,5.5978,3.3987},
        {0.3656,0.1858,2.0445,1.0607,5.7201,3.2899},
        {0.3866,0.1967,2.0997,1.0954,5.5268,3.4693},
        {0.4082,0.208,2.1547,1.1304,5.4846,3.499},
        {0.4303,0.2197,2.2121,1.163,5.7547,3.2668},
        {0.4529,0.2317,2.2647,1.2004,5.2555,3.7283},
        {0.4761,0.244,2.3206,1.2346,5.5857,3.4223},
        {0.4999,0.2567,2.3738,1.2714,5.3171,3.6787},
        {0.5241,0.2698,2.4279,1.3073,5.4167,3.5901},
        {0.549,0.2833,2.4801,1.345,5.2203,3.7748},
        {0.5743,0.2971,2.5332,1.3819,5.3137,3.692},
        {0.6001,0.3113,2.5844,1.4207,5.1173,3.8773},
        {0.6265,0.3259,2.6358,1.4593,5.1327,3.8618},
        {0.6534,0.3409,2.6873,1.4979,5.1478,3.8565},
        {0.6807,0.3562,2.7375,1.5377,5.0226,3.981},
        {0.7086,0.372,2.787,1.578,4.9645,4.0385},
        {0.7369,0.3882,2.8354,1.6196,4.8375,4.1554},
        {0.7658,0.4048,2.8845,1.6605,4.9109,4.0912},
        {0.7951,0.4218,2.9324,1.7027,4.7856,4.2158},
        {0.8249,0.4393,2.979,1.746,4.6601,4.3319},
        {0.8552,0.4572,3.0269,1.7882,4.7903,4.219},
        {0.8859,0.4755,3.0723,1.8327,4.5414,4.4583},
        {0.9171,0.4943,3.1171,1.8779,4.4803,4.5105},
        {0.9487,0.5135,3.1631,1.922,4.6014,4.4059},
        {0.9808,0.5332,3.2068,1.9683,4.3623,4.636},
        {1.0132,0.5533,3.2509,2.0141,4.4197,4.5861},
        {1.0462,0.5739,3.2928,2.0622,4.1882,4.8011},
        {1.0796,0.595,3.3364,2.1087,4.3554,4.6494},
        {1.1133,0.6166,3.3782,2.1568,4.1871,4.817},
        {1.1475,0.6386,3.419,2.206,4.0767,4.9192},
        {1.1822,0.6612,3.4598,2.2553,4.0751,4.9206},
        {1.2171,0.6842,3.501,2.3041,4.1248,4.8853},
        {1.2525,0.7078,3.5397,2.3553,3.8684,5.1264},
        {1.2883,0.7319,3.5789,2.4061,3.9178,5.0769},
        {1.3245,0.7564,3.6185,2.4565,3.9645,5.0441},
        {1.3611,0.7815,3.6558,2.5092,3.7263,5.2676},
        {1.398,0.8071,3.694,2.5611,3.8191,5.1816},
        {1.4353,0.8333,3.7313,2.6138,3.7283,5.2721},
        {1.473,0.8599,3.7685,2.6665,3.7282,5.2786},
        {1.511,0.8871,3.8041,2.7209,3.5579,5.4352},
        {1.5495,0.9149,3.8406,2.7745,3.6431,5.3566},
        {1.5882,0.9432,3.8762,2.8289,3.5627,5.4369},
        {1.6273,0.972,3.9118,2.8833,3.5636,5.4422},
        {1.6668,1.0014,3.946,2.9391,3.4129,5.5799},
        {1.7066,1.0313,3.9812,2.9939,3.526,5.4796},
        {1.7468,1.0618,4.015,3.05,3.3831,5.6161},
        {1.7872,1.0929,4.0489,3.1062,3.3854,5.6138},
        {1.8281,1.1245,4.0824,3.1626,3.3531,5.6462},
        {1.8692,1.1567,4.1156,3.2194,3.3215,5.6779},
        {1.9107,1.1895,4.1486,3.2765,3.2905,5.709},
        {1.9525,1.2228,4.1814,3.3336,3.2896,5.7161},
        {1.9947,1.2567,4.2132,3.3919,3.1729,5.8211},
        {2.0371,1.2912,4.2455,3.4496,3.2276,5.7727},
        {2.0799,1.3263,4.2774,3.5077,3.1961,5.8101},
        {2.1229,1.362,4.3083,3.5667,3.0896,5.9055},
        {2.1663,1.3982,4.3396,3.6254,3.1336,5.8676},
        {2.2101,1.4351,4.3702,3.6848,3.0557,5.9404},
        {2.254,1.4725,4.4011,3.744,3.0898,5.9178},
        {2.2984,1.5106,4.4306,3.8044,2.9518,6.0399},
        {2.343,1.5492,4.4608,3.8643,3.0186,5.9846},
        {2.3879,1.5884,4.4902,3.9249,2.9432,6.0606},
        {2.4331,1.6283,4.5191,3.9859,2.8887,6.1105},
        {2.4786,1.6688,4.5476,4.0474,2.8508,6.1439},
        {2.5243,1.7099,4.5762,4.1089,2.8543,6.1517},
        {2.5704,1.7516,4.6037,4.1714,2.7516,6.2448},
        {2.6167,1.7939,4.6311,4.2339,2.7442,6.2583},
        {2.6632,1.8369,4.6578,4.2972,2.6682,6.3303},
        {2.7098,1.8803,4.6612,4.3388,0.3402,4.158},
        {2.7563,1.9239,4.6408,4.3592,-2.0343,2.0343},
        {2.8024,1.9677,4.6203,4.3797,-2.0563,2.0564},
        {2.8484,2.0117,4.5994,4.4006,-2.089,2.089},
        {2.8942,2.0559,4.5785,4.4215,-2.0864,2.0865},
        {2.9398,2.1003,4.5575,4.4425,-2.1035,2.1035},
        {2.9852,2.1449,4.5362,4.4638,-2.1251,2.1252},
        {3.0303,2.1898,4.5147,4.4853,-2.1549,2.1549},
        {3.0753,2.2349,4.4929,4.5071,-2.1821,2.1821},
        {3.1199,2.2802,4.4706,4.5294,-2.2238,2.2238},
        {3.1643,2.3256,4.4372,4.541,-3.3474,1.163},
        {3.2081,2.3708,4.3717,4.5206,-6.5445,-2.0389},
        {3.2511,2.4158,4.3043,4.4979,-6.732,-2.2686},
        {3.2934,2.4605,4.2371,4.4752,-6.7303,-2.276},
        {3.3352,2.5051,4.1702,4.4521,-6.6844,-2.3076},
        {3.3762,2.5494,4.1029,4.4293,-6.7263,-2.2763},
        {3.4166,2.5934,4.0358,4.4064,-6.7143,-2.289},
        {3.4562,2.6372,3.9688,4.3835,-6.7036,-2.2952},
        {3.4952,2.6808,3.9016,4.3607,-6.7216,-2.2777},
        {3.5336,2.7242,3.8343,4.338,-6.7332,-2.2666},
        {3.5712,2.7674,3.7668,4.3155,-6.7478,-2.2525},
        {3.6083,2.8103,3.6993,4.293,-6.7436,-2.2519},
        {3.6446,2.853,3.6311,4.2712,-6.8248,-2.1816},
        {3.6802,2.8955,3.5634,4.2489,-6.7658,-2.2305},
        {3.7152,2.9378,3.4949,4.2274,-6.8521,-2.1497},
        {3.7494,2.9798,3.4263,4.2059,-6.8602,-2.142},
        {3.783,3.0217,3.3577,4.1846,-6.8599,-2.1372},
        {3.8159,3.0633,3.2883,4.164,-6.9435,-2.059},
        {3.8481,3.1048,3.2191,4.1432,-6.9195,-2.0778},
        {3.8796,3.146,3.1492,4.123,-6.9778,-2.0196},
        {3.9103,3.187,3.0785,4.1038,-7.0843,-1.9241},
        {3.9404,3.2279,3.0089,4.0833,-6.9486,-2.0434},
        {3.9698,3.2685,2.9374,4.0648,-7.1524,-1.8504},
        {3.9985,3.309,2.8662,4.046,-7.1234,-1.8794},
        {4.0264,3.3493,2.795,4.0272,-7.1133,-1.8837},
        {4.0537,3.3893,2.7228,4.0094,-7.2259,-1.7764},
        {4.0802,3.4293,2.6511,3.9912,-7.1712,-1.8251},
        {4.1059,3.469,2.5778,3.9745,-7.3367,-1.6706},
        {4.131,3.5085,2.506,3.9563,-7.1753,-1.8201},
        {4.1553,3.5479,2.4327,3.9396,-7.3343,-1.6662},
        {4.1789,3.5872,2.3601,3.9221,-7.248,-1.7461},
        {4.2018,3.6262,2.2854,3.9068,-7.4784,-1.5323},
        {4.2239,3.6651,2.2139,3.8884,-7.1515,-1.8409},
        {4.2453,3.7038,2.1396,3.8726,-7.4241,-1.579},
        {4.266,3.7424,2.0672,3.855,-7.2374,-1.7588},
        {4.2859,3.7808,1.9932,3.839,-7.4032,-1.6038},
        {4.3051,3.819,1.9221,3.8202,-7.1115,-1.8821},
        {4.3236,3.857,1.8489,3.8034,-7.3285,-1.6759},
        {4.3414,3.8949,1.7782,3.7841,-7.0678,-1.9289},
        {4.3585,3.9325,1.7068,3.7655,-7.135,-1.8663},
        {4.3749,3.97,1.6378,3.7445,-6.8986,-2.0947},
        {4.3905,4.0072,1.5667,3.7255,-7.1104,-1.9},
        {4.4055,4.0443,1.5015,3.7008,-6.5196,-2.4699},
        {4.4199,4.081,1.4329,3.6795,-6.8648,-2.1334},
        {4.4336,4.1176,1.3704,3.6544,-6.2403,-2.5072},
        {4.4467,4.1539,1.3084,3.6337,-6.2045,-2.0697},
        {4.4592,4.19,1.2501,3.6141,-5.8369,-1.96},
        {4.4711,4.226,1.1964,3.5945,-5.3611,-1.9619},
        {4.4826,4.2618,1.1439,3.5783,-5.2523,-1.6208},
        {4.4935,4.2974,1.0932,3.5646,-5.0719,-1.3678},
        {4.504,4.3329,1.0472,3.5505,-4.5987,-1.4085},
        {4.514,4.3683,1.0041,3.5377,-4.3082,-1.2767},
        {4.5236,4.4036,0.9618,3.5282,-4.2293,-0.9505},
        {4.5329,4.4388,0.9244,3.5179,-3.7431,-1.0315},
        {4.5418,4.4739,0.8899,3.5087,-3.4521,-0.9249},
        {4.5503,4.5089,0.856,3.5026,-3.3814,-0.6113},
        {4.5586,4.5438,0.8261,3.4964,-2.9938,-0.6172},
        {4.5712,4.5747,1.2608,3.0843,43.4628,-41.2101},
        {4.5894,4.6009,1.8189,2.616,55.7737,-46.7933},
        {4.6079,4.6276,1.8508,2.6742,3.1817,5.8193},
        {4.6267,4.6549,1.8807,2.7342,3.0008,6.0084},
        {4.6458,4.6829,1.9115,2.7934,3.0768,5.9127},
        {4.6652,4.7114,1.9401,2.8548,2.8583,6.1466},
        {4.6849,4.7406,1.9691,2.9158,2.902,6.0975},
        {4.7049,4.7703,1.9972,2.9777,2.808,6.1929},
        {4.7251,4.8007,2.025,3.0399,2.7788,6.2173},
        {4.7456,4.8318,2.0514,3.1035,2.6442,6.3596},
        {4.7664,4.8635,2.0782,3.1667,2.6796,6.3135},
        {4.7875,4.8958,2.1029,3.2321,2.4656,6.541},
        {4.8087,4.9287,2.1278,3.2971,2.4984,6.5035},
        {4.8303,4.9624,2.1524,3.3625,2.4543,6.5377},
        {4.852,4.9967,2.1746,3.4303,2.2235,6.7813},
        {4.874,5.0316,2.1971,3.4978,2.2501,6.7506},
        {4.8962,5.0673,2.2187,3.5662,2.1593,6.8375},
        {4.9185,5.1036,2.2386,3.6363,1.9877,7.0158},
        {4.9411,5.1407,2.2587,3.7062,2.0078,6.9869},
        {4.9639,5.1785,2.2766,3.7784,1.7863,7.2149},
        {4.9868,5.217,2.2938,3.8512,1.7216,7.281},
        {5.0099,5.2563,2.3103,3.9246,1.6541,7.3449},
        {5.0332,5.2963,2.3253,3.9996,1.5002,7.5001},
        {5.0566,5.337,2.3394,4.0749,1.4082,7.5341},
        {5.0797,5.378,2.3113,4.0995,-2.8118,2.4545},
        {5.1023,5.4188,2.2625,4.0779,-4.8797,-2.155},
        {5.1245,5.4593,2.2168,4.0551,-4.565,-2.2803},
        {5.1462,5.4996,2.1751,4.0305,-4.1724,-2.4619},
        {5.1676,5.5397,2.1321,4.0091,-4.3016,-2.1379},
        {5.1885,5.5796,2.0916,3.9872,-4.0463,-2.1879},
        {5.209,5.6193,2.0518,3.9667,-3.9809,-2.0506},
        {5.2291,5.6587,2.0132,3.9471,-3.8665,-1.9618},
        {5.2489,5.698,1.9757,3.9284,-3.7504,-1.8741},
        {5.2683,5.7371,1.9398,3.91,-3.579,-1.8384},
        {5.2873,5.7761,1.9037,3.894,-3.6179,-1.6002},
        {5.306,5.8148,1.8708,3.8768,-3.2852,-1.7223},
        {5.3244,5.8534,1.8382,3.8614,-3.2652,-1.5368},
        {5.3425,5.8919,1.8062,3.8474,-3.1963,-1.4022},
        {5.3602,5.9303,1.7766,3.8331,-2.9605,-1.4293},
        {5.3777,5.9685,1.7477,3.8201,-2.8856,-1.2974},
        {5.3949,6.0065,1.7196,3.8085,-2.8133,-1.1649},
        {5.4119,6.0445,1.6945,3.7959,-2.5109,-1.2559},
        {5.4286,6.0824,1.669,3.7857,-2.5466,-1.0145},
        {5.445,6.1201,1.6455,3.7758,-2.3559,-0.9973},
        {5.4612,6.1578,1.6233,3.7665,-2.2194,-0.9256},
        {5.4773,6.1954,1.6031,3.7574,-2.0217,-0.9133},
        {5.4931,6.2328,1.5831,3.7501,-2,-0.728},
        {5.5088,6.2703,1.5657,3.7423,-1.7406,-0.7772},
        {5.5242,6.3076,1.5491,3.7358,-1.657,-0.6518},
        {5.5396,6.3449,1.534,3.73,-1.5136,-0.586},
        {5.5548,6.3822,1.5203,3.7247,-1.3689,-0.5211},
        {5.5699,6.4194,1.508,3.7202,-1.2232,-0.4572},
        {5.5848,6.4565,1.4973,3.7162,-1.0764,-0.3942},
        {5.5997,6.4937,1.4886,3.7123,-0.8667,-0.3931},
        {5.6145,6.5308,1.4802,3.7102,-0.8411,-0.2092},
        {5.6293,6.5679,1.4745,3.7075,-0.5685,-0.2708},
        {5.644,6.6049,1.4691,3.7066,-0.5423,-0.0869},
        {5.6586,6.642,1.467,3.7045,-0.2056,-0.2123},
        {5.6733,6.679,1.464,3.7055,-0.3029,0.0956},
        {5.6879,6.7161,1.465,3.7045,0.0967,-0.0928},
        {5.7026,6.7531,1.465,3.7067,-0.0005,0.2159},
        {5.7173,6.7902,1.4696,3.7063,0.4616,-0.0354},
        {5.732,6.8273,1.472,3.7103,0.2406,0.3983},
        {5.7468,6.8644,1.479,3.7118,0.7025,0.1474},
        {5.7616,6.9015,1.4863,3.7151,0.7291,0.3329},
        {5.7766,6.9387,1.4951,3.7191,0.8799,0.3944},
        {5.7917,6.976,1.5054,3.7236,1.0303,0.4565},
        {5.8068,7.0133,1.5166,3.7294,1.1192,0.5813},
        {5.8221,7.0506,1.5311,3.734,1.4515,0.4599},
        {5.8376,7.088,1.5453,3.7411,1.4163,0.7093},
        {5.8532,7.1255,1.5621,3.7477,1.6852,0.6526},
        {5.869,7.1631,1.5793,3.7561,1.7114,0.8413},
        {5.885,7.2007,1.5984,3.7645,1.9182,0.8485},
        {5.9012,7.2384,1.6202,3.7725,2.1799,0.7977},
        {5.9176,7.2763,1.6411,3.7836,2.087,1.1084},
        {5.9342,7.3142,1.6652,3.7936,2.407,1.0012},
        {5.9511,7.3523,1.6901,3.805,2.4887,1.1344},
        {5.9683,7.3904,1.7163,3.8171,2.6287,1.2094},
        {5.9857,7.4287,1.744,3.8299,2.7675,1.2861},
        {6.0035,7.4672,1.7736,3.843,2.9601,1.3068},
        {6.0215,7.5057,1.8035,3.858,2.9838,1.5014},
        {6.0399,7.5445,1.8358,3.8727,3.2298,1.4691},
        {6.0586,7.5834,1.8683,3.8893,3.2531,1.665},
        {6.0776,7.6224,1.9009,3.9027,3.2658,1.338},
        {6.0965,7.661,1.8929,3.8586,-0.8088,-4.4169},
        {6.1153,7.6988,1.8779,3.7836,-1.4991,-7.4989},
        {6.1339,7.7359,1.8648,3.7066,-1.307,-7.6922},
        {6.1524,7.7722,1.8509,3.6305,-1.3905,-7.6101},
        {6.1708,7.8077,1.8361,3.5553,-1.4757,-7.5264},
        {6.189,7.8425,1.8211,3.4804,-1.5086,-7.4895},
        {6.207,7.8766,1.8046,3.4069,-1.6472,-7.3524},
        {6.2249,7.9099,1.7873,3.3342,-1.7334,-7.2679},
        {6.2426,7.9426,1.7696,3.2619,-1.767,-7.23},
        {6.2601,7.9745,1.7505,3.1909,-1.9017,-7.0968},
        {6.2774,8.0057,1.7302,3.1212,-2.0356,-6.971},
        {6.2945,8.0362,1.7105,3.0509,-1.9663,-7.0295},
        {6.3114,8.066,1.6891,2.9823,-2.143,-6.8542},
        {6.3281,8.0952,1.6664,2.915,-2.2699,-6.736},
        {6.3445,8.1236,1.6439,2.8475,-2.2475,-6.7536},
        {6.3607,8.1514,1.6208,2.7807,-2.3183,-6.6774},
        {6.3767,8.1786,1.5964,2.715,-2.4352,-6.5621},
        {6.3924,8.2051,1.5709,2.6505,-2.5513,-6.4555},
        {6.4079,8.231,1.5461,2.5853,-2.4746,-6.5187},
        {6.4231,8.2562,1.5194,2.522,-2.6759,-6.3269},
        {6.438,8.2808,1.4925,2.4589,-2.6915,-6.3135},
        {6.4527,8.3048,1.4659,2.3955,-2.6552,-6.3349},
        {6.467,8.3281,1.437,2.3344,-2.8931,-6.1159},
        {6.4811,8.3508,1.4093,2.2721,-2.7655,-6.2278},
        {6.4949,8.3729,1.3798,2.2115,-2.9499,-6.0541},
        {6.5084,8.3944,1.3507,2.1506,-2.9096,-6.087},
        {6.5216,8.4153,1.3203,2.0911,-3.0455,-5.9628},
        {6.5345,8.4357,1.2907,2.0307,-2.9558,-6.0343},
        {6.5471,8.4554,1.259,1.9724,-3.1747,-5.8379},
        {6.5594,8.4745,1.229,1.9124,-2.9949,-5.9875},
        {6.5714,8.493,1.1961,1.8553,-3.2949,-5.722},
        {6.583,8.511,1.1649,1.7965,-3.1177,-5.8791},
        {6.5944,8.5284,1.133,1.7384,-3.1892,-5.7968},
        {6.6054,8.5452,1.0994,1.6818,-3.3543,-5.6576},
        {6.616,8.5615,1.0668,1.6245,-3.2609,-5.7409},
        {6.6263,8.5771,1.0336,1.5678,-3.3317,-5.6721},
        {6.6363,8.5922,1.0004,1.511,-3.3152,-5.6766},
        {6.646,8.6068,0.9665,1.4548,-3.382,-5.6106},
        {6.6554,8.6208,0.932,1.3993,-3.4541,-5.555},
        {6.6643,8.6343,0.898,1.3432,-3.3944,-5.6014},
        {6.673,8.6471,0.863,1.2882,-3.5034,-5.5107},
        {6.6813,8.6595,0.829,1.2322,-3.3947,-5.5875},
        {6.6892,8.6712,0.7933,1.178,-3.5858,-5.433},
        {6.6968,8.6824,0.7589,1.1225,-3.4359,-5.5483},
        {6.704,8.6931,0.7231,1.0682,-3.5775,-5.4266},
        {6.7109,8.7033,0.6875,1.0137,-3.558,-5.4486},
        {6.7174,8.7129,0.6522,0.959,-3.5268,-5.4596},
        {6.7236,8.7219,0.6159,0.9052,-3.6283,-5.382},
        {6.7293,8.7304,0.58,0.8513,-3.6068,-5.4073},
        {6.7348,8.7384,0.5446,0.7966,-3.521,-5.4417},
        {6.7399,8.7459,0.5074,0.7435,-3.7069,-5.3095},
        {6.7446,8.7527,0.4711,0.6899,-3.6475,-5.3749},
        {6.7489,8.7591,0.4351,0.6362,-3.6068,-5.3874},
        {6.753,8.7649,0.3989,0.5822,-3.5982,-5.3573},
        {6.7565,8.7702,0.3611,0.53,-3.8126,-5.2612},
        {6.7598,8.775,0.3256,0.4758,-3.5402,-5.4149},
        {6.7627,8.7792,0.2884,0.4228,-3.7131,-5.2809},
        {6.7652,8.7829,0.2514,0.3695,-3.6825,-5.3107},
        {6.7674,8.7861,0.2143,0.3161,-3.687,-5.3043},
        {6.7691,8.7887,0.177,0.2636,-3.7741,-5.3079},
        {6.7705,8.7908,0.1408,0.2099,-3.5844,-5.329},
        {6.7716,8.7924,0.1031,0.1568,-3.7274,-5.2502},
        {6.7723,8.7935,0.0653,0.1027,-3.6715,-5.2603},
        {6.7726,8.794,0.0221,0.0387,-3.1949,-4.7278}
    };

void initialize(){
	pros::lcd::initialize();
    pros::lcd::set_text(1, "init");

    //TODO bruh
    // Initializes Controller
    // liftController->tarePosition();
    // liftController->reset();
    pros::lcd::set_text(2, "mogo & lift sensor reset");

    imu.calibrate();
    pros::delay(2000);
    pros::lcd::set_text(2, "imu calibrated");
}

void disabled(){}

void competition_initialize(){}

void autonomous(){
    // std::shared_ptr<AsyncPositionController<double, double>> liftController = AsyncPosControllerBuilder()
    //     .withMotor(lift)
    //     .withGains({0.035, 0.0, 0.0005}) // TODO - Slightly tune constant
    //     .withSensor(std::make_shared<okapi::RotationSensor>(liftSensor))
    //     .build();
    // INITIALIZATION
    // leftDrive.setBrakeMode(AbstractMotor::brakeMode::hold);
    // rightDrive.setBrakeMode(AbstractMotor::brakeMode::hold);
    // liftController->tarePosition();
    // liftController->reset();
    // mogoController->tarePosition();
    // mogoController->reset();
    
    // -----------------------------------------------------------------------
    // RIGHT AUTON
    // wings.set_value(true);
    // mogoController->setTarget(45);
    // followPath(RightNew::pathRLeft, RightNew::pathRRight);
    // wings.set_value(false);
    // followPath(RightNew::pathBackLeft, RightNew::pathBackRight);
    // wings.set_value(true); pros::delay(500); wings.set_value(false);
    //--------------------
    // followPath(RightNew::shortTurnLeft, RightNew::shortTurnRight);
    // mogoController->setTarget(0);
    // mogoController->waitUntilSettled();
    // followPath(RightNew::backLeft, RightNew::backRight);
    // mogoController->setTarget(45);
    // followPath(RightNew::forwardLeft, RightNew::forwardRight);
    // -----------------------------------------------------------------------
    // LEFT AUTON
    // wings.set_value(true); pros::delay(100); wings.set_value(false);
    // mogoController->setTarget(0);
    // followPath(LeftPaths::path1Left, LeftPaths::path1Right);
    // mogoController->setTarget(45);
    // pros::delay(250);
    // followPath(LeftPaths::path2Left, LeftPaths::path2Right);
    // claw.set_value(true);
    // -----------------------------------------------------------------------
    // AWP AUTON
    // liftController->setTarget(100);
    // mogoController->setTarget(45);
    // liftController->waitUntilSettled();
    // followPath(AWP::path1NewLeft, AWP::path1NewRight, false);
    // setVelocity(300, 300); pros::delay(500); setVelocity(0,0);
    // mogoController->setTarget(0);
    // followPath(AWP::testLeft, AWP::testRight, true);
    // liftController->setTarget(0);
    // mogoController->setTarget(45);
    // pros::delay(500);
    // setVelocity(300, 300); pros::delay(1000); setVelocity(0, 0);
    // mogoController->setTarget(0);
    // mogoController->waitUntilSettled();
    // pros::delay(1000);
    // setVelocity(300, 300); pros::delay(1000); setVelocity(0, 0);
    // --------------------------------
    // mogoController->setTarget(0);
    // wings.set_value(true); pros::delay(100); wings.set_value(false);
    // mogoController->waitUntilSettled();
    // followPath(AWP::fwdRLeft, AWP::fwdRRight);
    // mogoController->setTarget(45);
    // followPath(AWP::loopbackLeft, AWP::loopbackRight);
    // claw.set_value(true);
    // rightDrive.moveRelative(-300, 600);
    // leftDrive.moveRelative(600, 600);
    // -----------------------------------------------------------------------
    // SKILLS AUTON
    // // mogoController->setTarget(0);
    // // wings.set_value(true); pros::delay(100); wings.set_value(false);
    // // mogoController->waitUntilSettled();
    // followPath(Skills::path0Left, Skills::path0Right);
    // // mogoController->setTarget(45);
    // followPath(Skills::path1Left, Skills::path1Right);
    // // pros::delay(250);
    // // claw.set_value(true);
    // liftController->setTarget(110);
    // followPath(Skills::path2Left, Skills::path2Right);
    // // claw.set_value(false);
    // // liftController->setTarget(100);
    // // leftDrive.moveVelocity(600); rightDrive.moveVelocity(600); pros::delay(500); leftDrive.moveVelocity(0); rightDrive.moveVelocity(0);
    // // followPath(Skills::backLeft, Skills::backRight);
    // followPath(Skills::path3Left, Skills::path3Right);
    // liftController->setTarget(0);
    // followPath(Skills::path4Left, Skills::path4Right);
    // followPath(Skills::path5Left, Skills::path5Right);
    // followPath(Skills::path6Left, Skills::path6Right);

    //left();
    //right();
    //awp();
    //skills();

}

void opcontrol(){
    // liftController->reset();
    // Configures brake type for drive & lift
    leftDrive.setBrakeMode(AbstractMotor::brakeMode::coast);
    rightDrive.setBrakeMode(AbstractMotor::brakeMode::coast);
    lift.setBrakeMode(AbstractMotor::brakeMode::brake);
    
    imu.reset();
    //turnToAngle(180_deg);

    // Initializes driver control variable
    double liftPosition = 0.0;
    bool mogoState = false, prevBtnState = false, currentBtnState = false;
    bool _mogoState = false, _prevBtnState = false, _currentBtnState = false;
    
    // Initializes logo on the brain screen
    // Gif gif("/usd/logo.gif", lv_scr_act()); // TODO - Make Gif Run in opcontrol
    double value = 0;;
    leftDrive.tarePosition();
    rightDrive.tarePosition();
    
    while(true){
        wings.set_value(false);
        /** 
         * @brief Chassis Control
         * Left Analog Y Stick -> Linear velocity the chassis drives in
         * Right Analog X Stick -> Curvature the chassis drives in
         */
	    double power = master.getAnalog(ControllerAnalog::leftY) * (abs(master.getAnalog(ControllerAnalog::leftY)) >= DEADBAND);
        double curvature = master.getAnalog(ControllerAnalog::rightX) * (abs(master.getAnalog(ControllerAnalog::rightX)) >= DEADBAND);
        auto speed = curvatureDrive(power, curvature, power == 0);
		(chassis->getModel())->tank(speed.first, speed.second);

        /**
         * @brief Lift Control
         * L1 (Left Top) Pressed -> Lift goes up
         * L2 (Left Bottom) Pressed -> Lift goes down
         * Both are pressed -> Conveyor goes up
         * Both are unpressed -> No movement
         */
        if(master.getDigital(ControllerDigital::L1) && master.getDigital(ControllerDigital::L2)){
            roller.moveVoltage(12000); 
        }
        else if(master.getDigital(ControllerDigital::L1)){
            lift.moveVoltage(12000);
        }
        else if(master.getDigital(ControllerDigital::L2)){
            lift.moveVoltage(-12000);
        }
        else if(master.getDigital(ControllerDigital::A)){
            roller.moveVoltage(-12000);
        }
        else {
            lift.moveVoltage(0);
            roller.moveVoltage(0);
        }

        /**
         * @brief Solenod Control (Direct)
         * R1 (Right Top) Pressed -> claw closes
         * R1 (Right Top) not pressed -> claw opens
         * Y Pressed -> wing opens
         * Y not pressed -> claw closes
         */
        claw.set_value(master.getDigital(ControllerDigital::R1));
        wings.set_value(master.getDigital(ControllerDigital::Y));

        /**
         * @brief Mogo Holder Control
         * The solenoid toggles between the two states every time R2 (Right Bottom) is pressed
         */
        currentBtnState = master.getDigital(ControllerDigital::R2);
        if(currentBtnState && !prevBtnState){
            mogoState = !mogoState;
            mogoClamp.set_value(mogoState);
        }
        prevBtnState = currentBtnState;

        _currentBtnState = master.getDigital(ControllerDigital::X);
        if(_currentBtnState && !_prevBtnState){
            _mogoState = !_mogoState;
            mogo.set_value(_mogoState);
        }
        _prevBtnState = _currentBtnState;

        pros::delay(10);
        
    }
}