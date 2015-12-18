
/*
First date in file = 625296.50
Number of records = 16731.0
Days per record = 131.0
      Julian Years      Lon    Lat    Rad
 -3000.0 to  -2499.7:   0.64   0.09   0.40 
 -2499.7 to  -1999.7:   0.70   0.09   0.45 
 -1999.7 to  -1499.7:   0.44   0.08   0.32 
 -1499.7 to   -999.8:   0.42   0.07   0.32 
  -999.8 to   -499.8:   0.55   0.06   0.34 
  -499.8 to      0.2:   0.43   0.06   0.31 
     0.2 to    500.2:   0.56   0.07   0.32 
   500.2 to   1000.1:   0.49   0.06   0.41 
  1000.1 to   1500.1:   0.48   0.06   0.38 
  1500.1 to   2000.1:   0.56   0.06   0.38 
  2000.1 to   2500.0:   0.63   0.08   0.33 
  2500.0 to   3000.0:   0.70   0.09   0.36 
  3000.0 to   3000.4:  0.526  0.023  0.190 
*/
#include "plantbl.h"
static double FAR tabl[] = {
      153429.13855,      130818.16897,       18120.42948,       -8463.12663,
       -5058.91447,  1092566021.02148,      123671.25097,

          -5.43364,          12.06012,

       30428.31077,      -74667.61443,       46848.16236,      -66373.44474,
       24312.54264,      -26045.64766,       18353.92564,       -4022.13679,
        4037.97936,       10059.82468,       -4622.55896,        1383.21617,
        -187.25468,       -1171.66028,

          -0.00062,          -0.21713,

       -1198.83945,        1178.62445,       -1492.07393,         153.07155,
        -245.57966,        -391.94010,          82.26400,         -40.92104,
           3.72520,          10.57242,

          -0.04720,          -0.04448,          -0.04329,          -0.06043,

          -0.03905,           0.15712,

          -0.05644,          -0.00129,

          -0.00342,           0.02473,

           0.00434,          -0.01862,

           0.00431,          -0.03993,

          -0.03159,          -0.15982,

          -0.09928,           0.04430,          -0.00357,           0.31312,

          -0.01346,          -0.00180,

          -0.09107,           0.01215,

           0.02485,           0.01024,

          27.29869,           2.70896,          12.91956,          19.21726,
          -6.91384,           5.12954,          -1.07533,          -1.71691,

          -0.01423,           0.03121,

         -32.48652,         -26.13483,          46.78162,         -62.02701,
          94.96809,          81.73791,         -20.13673,         131.05065,

          -0.00798,           0.01786,

          13.99591,          16.87756,          -8.51726,          21.59490,
         -14.28833,          -9.45530,           7.73954,          -6.53078,

           0.03175,          -0.04295,

           3.06742,          -0.11838,           1.03630,           0.94004,
          -0.14085,           0.14434,

          -0.03363,           0.00993,

          -0.00007,          -0.02748,

          26.01507,          -7.37178,          16.96955,           6.24203,
          -0.40481,           3.72456,          -0.53597,          -0.14938,

          37.82081,          26.15887,          -2.82115,          78.26478,
         -63.39155,          -5.52419,          13.11482,         -43.54977,
          15.64940,           6.67505,

         -10.25616,          -7.39672,         -12.37441,          12.24417,
           8.54922,           9.68451,

          -0.03658,          -0.00963,

           1.65523,           0.43093,           0.32023,           0.71365,
          -0.12226,           0.03759,

           0.10388,           0.47212,          -0.02791,           0.09929,

          -0.04116,          -0.03125,

          -0.10240,          -0.23199,          -0.03524,          -0.13625,

           7.52726,           6.86314,           0.01239,          13.46530,
          -5.22256,           1.56116,          -0.15925,          -1.19571,

           3.26302,           0.06097,          -0.14444,          -0.20301,
           1.93822,         -80.12566,

           0.98665,          -7.52986,           3.86703,          -2.43028,
           0.64180,           0.78351,

           0.00190,          -0.00633,

          -0.00321,          -0.04403,

           0.19018,           0.14335,           0.10315,           0.53154,

          -0.00062,          -0.00464,

          -0.00109,           0.02150,

           1.19993,          47.21638,         -24.56067,          25.06332,
          -7.50751,          -6.36250,           1.39443,          -1.23806,

           0.04951,           0.02176,

           0.02802,          -0.01665,

          -0.10698,          -0.13635,

          73.54797,         -52.34968,          74.98754,          86.56283,
         -69.01463,          44.56866,

           0.04387,          -0.05925,

          -0.03732,          -0.03264,

           0.00967,           0.02143,

          10.59429,          26.48226,          34.03470,           3.96160,
           4.15919,         -20.22616,          -5.25903,          -3.40177,

           0.05111,          -0.06788,

           0.06497,           1.21024,          -0.29607,           0.49991,
          -0.06055,          -0.03464,

           0.02950,           0.16429,

           0.00722,          -0.90806,

          -0.02161,           0.00902,

          -0.00261,           0.00077,

           0.00434,          -0.29231,

           0.00456,           0.04781,

           1.33214,          -2.62015,           0.79761,          -0.81850,
           0.06371,           0.00119,

           0.03049,          -0.03553,           0.02373,          -0.01411,

        -189.06132,        -169.17940,           5.27464,        -227.72664,
          83.72511,         -12.04794,           0.23965,          23.75496,
          -3.43532,          -0.34276,

          -1.35880,           0.45053,          -0.34298,          -0.11441,

          -0.16328,           0.07423,

         481.48150,          79.82461,         453.82764,         941.94205,
        -635.83924,         397.29087,         -81.54066,        -417.22420,
         149.91822,          10.53490,

          -0.13210,           0.36740,

           0.33777,           0.15893,

       -2562.04968,        2442.77844,       -2602.66709,        2838.87348,
         723.50715,       -1284.58208,       -4557.23362,       -4514.61100,
       -8960.81693,        4663.55087,       -4947.61530,       19377.42027,

          -0.16786,          -0.19514,

           0.32100,           0.91502,

           4.96600,          -1.11836,

         307.38057,         175.14618,          16.02093,         444.42376,
        -219.80047,          62.39286,         -18.14266,         -52.23698,

           0.02111,           0.00469,

         -20.97409,         -34.48296,          -2.03906,         -27.07560,
           3.73818,          -3.00599,           0.24112,           0.41430,

          -0.03552,           0.00394,

          -0.00217,           0.02307,

           0.03686,           0.00510,

          34.46537,          10.23293,           9.99520,          28.88781,
         -11.31210,           3.52646,          -0.48062,          -2.93641,

          -0.00987,          -0.05310,

         -38.39539,           0.04568,         -31.73684,          -1.83151,
         -24.97332,          -1.71244,           0.33498,           7.03899,
          -4.15247,         200.43434,

          -0.00800,           0.04462,

          37.83113,         -13.40661,           9.49434,         -35.41588,
         -14.72767,          -3.84674,          -0.31412,           3.97734,

           0.02908,          -0.00353,

           1.89935,         -14.31774,           7.77051,          -7.08945,
           1.90915,           1.78908,          -0.41445,           0.30506,

         -14.43121,           7.30707,         -11.97842,         -17.64121,
          13.38962,          -7.20982,

          -5.23362,           2.11364,          -0.45605,           4.08835,
           1.42683,           0.24838,

          -0.00605,           0.03199,

          -0.17609,          -1.43091,           0.32444,          -0.51371,
           0.06182,           0.03733,

           0.00696,          -0.13438,

           4.67581,           4.42379,          -1.52602,           4.20659,
          -1.31757,          -0.72910,

           1.29012,           0.97780,           2.25895,          -0.85306,
           1.74120,          -5.09507,

           0.28107,          -0.05040,           0.05508,          -0.06349,

          -0.00061,           0.48249,

          -2.37749,           1.78180,          -1.67423,          -0.35618,
           0.05789,          -0.35287,

           0.56252,          -0.66584,           0.61979,           4.84016,
          -4.64462,          17.48002,

           0.40982,          -4.19214,          -1.55252,          -1.87505,
          -0.31070,           0.15554,

          -0.00034,           0.11102,

           0.01116,          -0.04166,

           9.27689,          -4.32090,           6.84888,           1.78741,
          -0.09306,           1.68391,          -0.27482,          -0.04197,

          -7.83068,          37.71086,         -37.53346,           7.18559,
           0.74427,         -24.29751,          10.87837,           1.35503,

           0.00998,          -0.03395,

        -133.52206,        -150.11329,           4.27494,        -173.79469,
         150.87961,        -356.29181,        -330.17873,        -426.29809,
        -607.98186,         126.35464,        -299.69623,         556.41055,

          -0.00342,           0.04411,

          44.65946,          42.07312,          85.71397,           5.95130,
          24.98064,         -41.20026,         -14.05970,         -10.46101,
          -2.24038,           2.89211,

           0.06175,           0.08128,           0.00705,           0.01939,

          -1.08361,          -0.08213,          -0.20868,          -0.36268,

          -4.96489,          -2.05966,          -6.16586,           3.65514,
          -3.12555,          12.20821,

          -1.11236,          -1.73772,          -1.34045,          -0.22774,
          -0.08639,           0.27355,

          -0.07700,           1.06260,          -0.46013,           0.31916,
          -0.04969,          -0.09488,

          -1.54000,           0.04949,          -0.07616,          -0.95933,
           0.93303,           3.43183,

          -0.82917,          -0.82042,          -0.68158,           0.17083,
           0.06942,           0.17491,

          -0.02699,          -0.01051,

           0.00657,           0.03063,

          -0.52595,           0.84035,          -0.88323,          -0.70188,
           0.60928,          -0.48179,

           0.38290,           0.04482,           0.26456,          -0.32369,

          -0.00615,           0.03218,

          -0.32943,           0.14675,          -0.10782,          -0.09036,

          -0.58003,           0.72888,          -0.46654,           1.17977,

           0.00222,           0.01541,

          -0.19226,          -0.07770,          -0.01829,          -0.05070,

          -1.75385,          -1.32969,           0.52361,          -1.36036,
           0.67222,           1.34612,

           6.96841,         -29.24025,         -23.76900,         -39.91647,
         -41.01215,          -2.23638,         -18.81024,          20.77095,

          -0.68592,          -2.26212,          -1.14065,          -0.76493,
          -0.18044,           0.15193,

          -0.20669,          -0.44387,           0.25697,          -0.17880,

          -0.53097,           0.43181,          -0.35187,           0.71934,

          -0.14962,           0.09220,          -0.05031,          -0.03924,

           0.06571,           0.29487,

           0.05170,           0.36847,

           0.02754,          -0.00411,

          -0.08313,          -0.16907,           0.10273,          -0.07315,

          -0.02312,           0.04912,

          -0.01062,          -0.02713,

           0.03806,           0.13401,

          -1.79865,          -2.04540,          -2.69965,          -0.65706,
          -1.17916,           0.79292,

           0.02415,           0.14001,

          -0.01767,           0.04209,

           0.05212,          -0.01795,

           0.01285,           0.04028,

           0.01075,           0.05533,

           0.02323,          -0.00864,

          -0.04691,           0.03128,

           0.00548,           0.02254,

           0.00011,           0.12033,

};
static double FAR tabb[] = {
         548.59659,         594.29629,         219.97664,          59.71822,
          23.62157,          40.77732,         227.07380,

           0.00293,          -0.00745,

        -307.33226,        -347.92807,        -309.49383,        -428.18929,
         -96.59506,        -191.36254,           2.11014,         -34.44145,
           2.23085,           6.77110,          -5.43468,          -0.28391,
           0.28355,          -1.81690,

           0.00036,           0.00078,

          -1.83259,           1.17464,          -2.66976,          -0.92339,
          -0.23645,          -1.20623,           0.25248,          -0.04958,
           0.00064,           0.03599,

          -0.00079,           0.00004,          -0.00005,          -0.00010,

          -0.00024,           0.00051,

           0.00001,           0.00005,

           0.00015,           0.00010,

           0.00017,          -0.00004,

           0.00113,          -0.00011,

           0.00021,           0.00087,

           0.00120,          -0.00114,          -0.00881,          -0.00020,

          -0.00005,           0.00009,

           0.00005,           0.00007,

           0.00002,          -0.00033,

          -0.00554,          -0.32274,           0.23695,          -0.11184,
           0.04050,           0.09929,          -0.02189,           0.00305,

          -0.00142,          -0.00055,

           0.66623,           0.34590,           0.74913,          -0.23202,
          -1.08316,          -1.40407,           1.72287,          -0.07604,

           0.00024,           0.00004,

           0.03592,           0.91143,          -1.11848,          -0.17473,
           0.91500,          -1.34912,           0.85229,           0.69029,

          -0.00019,           0.00075,

           0.03615,           0.30768,          -0.08733,           0.12016,
          -0.01716,          -0.01138,

           0.00021,           0.00004,

           0.00531,           0.00098,

          -0.14354,          -0.02364,          -0.05559,          -0.07561,
           0.01419,          -0.01141,           0.00014,           0.00218,

          -0.36564,           0.13498,          -0.13283,          -0.11462,
           0.23741,           0.14960,          -0.23173,           0.25148,
           0.00763,          -0.05987,

          -0.00857,           0.20312,          -0.29399,           0.34831,
          -1.33166,          -0.46808,

          -0.00027,           0.00046,

           0.15729,           0.01367,           0.04093,           0.07447,
          -0.01598,           0.00785,

           0.00583,           0.00324,           0.00053,           0.00160,

          -0.00030,           0.00043,

          -0.00208,           0.00334,          -0.00316,           0.00136,

           0.23086,           0.05711,           0.19558,           0.05897,
           0.01070,           0.05021,          -0.00818,          -0.02242,

           0.06301,          -0.26483,           0.66177,           0.02125,
           0.13477,           0.19376,

          -0.36520,           0.83588,          -0.69848,          -0.00877,
           0.01626,          -0.23878,

          -0.00373,           0.00044,

           0.00008,          -0.00004,

          -0.00374,          -0.00283,           0.01104,          -0.00619,

           0.00004,           0.00015,

           0.00026,           0.00013,

           0.04630,          -0.11815,           0.00773,           0.03796,
          -0.05172,           0.00149,           0.00444,          -0.01493,

          -0.00064,          -0.00044,

          -0.00033,           0.00002,

          -0.00012,           0.00284,

          -0.15622,          -0.92158,          -0.82690,          -1.52101,
          -0.55934,           0.69375,

          -0.00171,           0.00031,

           0.00129,          -0.00013,

          -0.00024,          -0.00083,

           0.66101,          -0.21764,          -0.43967,           0.30157,
           0.53389,           1.59141,           1.94286,           0.14146,

          -0.00064,          -0.00006,

           0.21850,          -0.02912,           0.08594,           0.08734,
          -0.01678,           0.01629,

           0.00133,           0.00562,

           0.00128,          -0.00025,

          -0.00005,           0.00027,

           0.00032,           0.00001,

           0.00037,           0.00042,

           0.00070,           0.00003,

           0.00275,          -0.13096,           0.02329,          -0.05582,
           0.00405,          -0.00251,

           0.01316,          -0.01165,           0.00279,          -0.00374,

         -39.62783,          20.91467,         -28.97236,           3.77560,
          -3.30029,           0.11472,          -0.48216,           1.05814,
          -0.21607,          -0.03055,

          -0.64162,          -0.57355,          -0.05861,          -0.18592,

          -0.12207,          -0.06279,

         -38.55325,        -125.74207,         -47.22357,          41.75842,
        -119.38841,          18.88515,         -11.04830,         -50.98851,
          16.64895,           1.76553,

           0.09474,           0.03714,

           0.02593,           0.07967,

       -1187.61854,       -1094.91786,       -1011.21939,       -1102.25998,
        -575.88672,        -107.84860,        -890.58889,        -807.06589,
         971.78461,       -1287.24560,       -4601.44669,        -849.54329,

          -0.00904,           0.06233,

          -0.19456,          -0.05521,

          -0.36915,           1.15363,

          32.64763,         -85.19705,         114.34437,         -13.37747,
          15.92865,          55.84857,         -13.10538,           3.07629,

          -0.00327,           0.00104,

          -7.81035,           6.19960,          -6.36096,           1.00493,
          -0.66971,          -0.84572,           0.09943,          -0.04583,

           0.00200,          -0.00032,

          -0.00265,           0.00047,

          -0.00053,           0.00046,

          -0.24396,           0.20664,          -0.30820,          -0.04917,
           0.06184,          -0.12642,           0.03053,           0.05054,

           0.00035,           0.00012,

           0.42063,          -0.58254,           0.90517,          -0.66276,
           0.64765,           0.39338,          -1.40645,           0.33017,
          -1.43377,          -0.67089,

          -0.00045,          -0.00036,

           0.23690,           0.07185,           0.28386,          -0.04397,
           0.02836,          -0.13082,          -0.00978,           0.00108,

           0.00046,           0.00083,

          -0.01665,           0.32499,          -0.09980,           0.18611,
          -0.02561,           0.00239,          -0.00084,          -0.00110,

           0.46854,          -0.35113,           0.69908,           0.53244,
           0.12875,           0.01115,

           0.13930,           0.02747,          -0.10587,          -0.17759,
          -0.26850,           0.04400,

           0.00010,          -0.00015,

           0.00164,          -0.01308,           0.00488,          -0.01046,
           0.00170,           0.00024,

           0.00084,           0.00014,

          -0.08481,          -0.02547,          -0.02290,          -0.02281,
          -0.03946,          -0.02810,

           0.01298,           0.08658,           0.05575,          -0.01081,
           1.09695,           0.35441,

          -0.03127,           0.07946,           0.01245,           0.02578,

          -0.00524,          -0.00027,

           0.08217,          -0.31742,           0.15273,          -0.07804,
           0.01197,           0.03053,

           0.81596,           0.38640,          -0.89777,           0.59499,
          -0.39581,          -0.87375,

           0.02096,           0.49772,           0.29986,           0.24210,
           0.14038,          -0.03016,

          -0.00208,           0.00045,

           0.01024,           0.00114,

           1.23010,           1.75663,          -0.12741,           1.44996,
          -0.31607,           0.03151,           0.00259,          -0.04741,

         -11.57091,           8.00331,          -9.24028,          -6.36906,
           4.71248,          -2.43695,           0.38630,           1.90625,

           0.01401,           0.00114,

          33.56690,         -55.17784,          33.21425,         -52.57002,
          27.04138,          13.78610,          69.60307,         -81.16312,
          27.53960,        -158.28336,        -205.94418,         -95.08051,

          -0.01407,          -0.00364,

         -18.56128,           6.02270,         -10.11059,          24.69471,
          12.31878,           9.94393,           3.81994,          -4.84109,
          -1.08440,          -0.72136,

           0.03731,          -0.02094,           0.00789,          -0.00176,

           0.09673,          -0.11181,           0.03112,          -0.00065,

          -0.29167,          -0.82083,           0.40866,          -0.77487,
          -2.23349,          -0.46973,

           0.41024,          -0.14274,           0.07755,          -0.24895,
          -0.04965,          -0.01197,

          -0.02264,           0.05917,          -0.02817,           0.01242,
          -0.00250,          -0.00247,

          -0.14414,          -0.03739,           0.14708,          -0.07908,
           0.05843,           0.15173,

          -0.01601,          -0.07844,          -0.05957,          -0.03143,
          -0.01830,           0.01257,

          -0.00109,          -0.00000,

           0.00174,           0.00050,

          -0.02119,           0.06918,          -0.02470,           0.00185,
           0.02372,          -0.02417,

           0.01081,           0.05222,           0.09820,           0.05931,

          -0.00588,          -0.00086,

           0.01688,          -0.00133,          -0.00073,           0.00041,

          -0.02280,          -0.05706,          -0.17694,          -0.12027,

           0.00196,          -0.00060,

           0.00051,          -0.02426,           0.00314,          -0.00302,

           0.17923,          -0.78343,           0.52073,          -0.02398,
          -0.03978,           0.20841,

           6.51325,           3.37139,          12.88844,          -6.72098,
           3.40949,         -14.34313,          -9.68278,          -7.85143,

           1.06886,          -0.21727,           0.36675,          -0.49815,
          -0.07289,          -0.07537,

           0.01107,          -0.00644,           0.01013,          -0.00306,

          -0.00708,          -0.13488,          -0.23041,          -0.10698,

          -0.00049,          -0.00692,          -0.00142,          -0.00211,

          -0.04021,           0.01805,

           0.00479,           0.00620,

           0.00739,           0.00566,

          -0.00101,          -0.00022,           0.00261,          -0.00188,

          -0.01812,          -0.01205,

          -0.00061,          -0.00061,

          -0.02479,           0.01157,

           0.91642,          -0.65781,           0.39969,          -1.13699,
          -0.43337,          -0.57828,

           0.00145,           0.00281,

          -0.01675,          -0.00975,

           0.00119,          -0.00074,

          -0.00343,           0.00139,

           0.00061,           0.00086,

           0.00054,          -0.00046,

          -0.01996,          -0.02689,

           0.00034,           0.00037,

          -0.00006,           0.00001,

};
static double FAR tabr[] = {
        -734.58857,       -1081.04460,        -551.65750,        -148.79782,
         -25.23171,         164.64781,         248.64813,

          -0.05163,          -0.02413,

       -1306.61004,         560.02437,       -1622.58047,         589.92513,
        -812.39674,         166.85340,        -157.92826,        -107.14755,
          68.98900,         -18.95875,          -0.16183,          36.24345,
          -9.19972,          -2.29315,

          -0.00316,           0.00222,

          10.95234,          21.37177,          -6.29550,          21.83656,
          -7.70755,           1.38228,          -0.21770,          -1.49525,
           0.17951,           0.01043,

           0.00062,           0.00208,          -0.00066,           0.00050,

           0.00313,           0.00187,

           0.00010,           0.00131,

           0.00102,           0.00047,

           0.00102,           0.00012,

           0.00012,          -0.00037,

           0.00808,           0.00027,

          -0.01219,          -0.00961,          -0.04166,          -0.00327,

          -0.00001,          -0.00146,

          -0.00092,          -0.00989,

          -0.00135,           0.00196,

           0.19216,           2.48442,          -1.43599,           1.39651,
          -0.48549,          -0.53272,           0.14066,          -0.10352,

           0.00141,           0.00066,

           2.96838,          -3.09575,           6.27741,           5.24306,
          -8.77080,           9.03247,         -10.98350,          -3.58579,

          -0.00168,          -0.00100,

           0.20234,          -0.75737,           0.36838,          -0.58241,
           0.41430,          -0.35784,           0.47038,          -0.10586,

           0.00539,           0.00490,

          -0.01375,          -0.01950,           0.00145,           0.00723,
          -0.00391,           0.00391,

          -0.00131,          -0.00568,

           0.01317,           0.00319,

           1.31006,           5.89394,          -1.61753,           3.68814,
          -0.80644,          -0.14747,           0.04481,          -0.11361,

          -4.36130,           7.92488,         -16.29047,          -1.52163,
           2.14492,         -14.38028,           9.65573,           3.56881,
          -1.87208,           3.36213,

           1.84499,          -2.41575,          -2.77076,          -3.23915,
          -3.34573,           1.40979,

           0.00217,          -0.00841,

           0.29313,          -0.36246,           0.22043,           0.02328,
          -0.01182,           0.04074,

          -0.15728,           0.02468,          -0.03185,          -0.01099,

           0.01059,          -0.01274,

           0.07362,          -0.02642,           0.04035,          -0.00968,

          -2.14457,           2.53297,          -4.34196,          -0.11421,
          -0.38757,          -1.73872,           0.39784,          -0.01397,

          -0.03311,           0.97723,           0.16060,          -0.07486,
          25.96413,           0.75088,

          -3.04736,           0.30340,          -1.43451,          -1.35136,
           0.26526,          -0.40247,

          -0.00460,          -0.00056,

           0.01633,          -0.00128,

          -0.05197,           0.07002,          -0.19450,           0.03737,

           0.00188,          -0.00037,

          -0.00903,          -0.00059,

         -19.73809,           0.58424,         -10.42034,         -10.14579,
           2.65990,          -3.07889,           0.50884,           0.58508,

          -0.00970,           0.02099,

           0.00716,           0.01161,

           0.05751,          -0.04515,

          22.08042,          30.82415,         -36.27430,          31.40265,
         -18.30150,         -29.16403,

           0.02454,           0.01834,

          -0.01312,           0.01576,

          -0.00928,           0.00330,

         -11.78094,           4.06738,          -2.51590,          15.05277,
           9.12747,           2.88088,           2.32916,          -2.08271,

           0.02872,           0.02194,

           0.60494,          -0.04597,           0.24749,           0.15971,
          -0.02185,           0.03384,

          -0.07075,           0.01287,

           0.40201,           0.00347,

          -0.00410,          -0.00998,

          -0.00005,          -0.00121,

           0.13770,           0.00186,

          -0.02268,           0.00210,

           1.26291,           0.65546,           0.38885,           0.38880,
          -0.00184,           0.03067,

           0.01273,           0.01136,           0.00557,           0.01117,

          94.13171,         -88.37882,         120.53292,           8.32903,
           7.77313,          43.46523,         -11.66698,           0.44639,
           0.15092,          -1.68367,

          -0.30833,          -0.49030,           0.01971,          -0.14144,

          -0.04019,          -0.05110,

         -39.70024,         272.91667,        -468.46263,         256.77696,
        -200.63130,        -307.98554,         206.56301,         -41.76039,
          -4.74242,          74.19909,

           0.18474,           0.05547,

          -0.06732,           0.16515,

       -1156.31285,       -1102.97666,       -1346.99288,       -1121.01090,
         666.84550,         421.92305,        2259.49740,       -2268.69758,
       -2325.87639,       -4476.46256,       -9683.77583,       -2472.92565,

          -0.10400,           0.08075,

          -0.45225,           0.16621,

           0.57789,           2.43804,

          85.21675,        -154.17208,         219.91042,          -9.71116,
          31.13240,         108.60117,         -25.85622,           8.98402,

          -0.00233,           0.01030,

         -17.01324,          10.41588,         -13.34449,           1.08782,
          -1.48199,          -1.81734,           0.20334,          -0.11734,

          -0.00230,          -0.01869,

          -0.01182,          -0.00129,

          -0.00281,           0.02021,

          -5.75973,          19.13309,         -16.13690,           5.53382,
          -1.96585,          -6.29211,           1.63105,          -0.26089,

           0.02935,          -0.00555,

           0.30700,         -19.96182,           0.99825,         -16.32664,
           0.83052,         -13.76201,          -3.15609,           0.17360,
        -111.81423,          -2.05419,

          -0.02455,          -0.00478,

           7.45114,          21.53296,          19.90263,           5.69420,
           2.31253,          -8.15116,          -2.17440,          -0.23014,

           0.00168,           0.01590,

           8.78005,           0.71418,           4.48561,           4.50680,
          -1.05713,           1.17880,          -0.19327,          -0.24877,

          -5.00870,          -8.66354,          10.51902,          -7.71011,
           4.65486,           8.05673,

          -1.39635,          -3.07669,          -2.40347,          -0.11167,
          -0.04064,           0.83512,

          -0.02041,          -0.00351,

           0.97375,          -0.15795,           0.36361,           0.19913,
          -0.02142,           0.04193,

           0.08801,           0.00475,

          -2.81010,           3.11341,          -2.79191,          -0.93313,
           0.44570,          -0.88287,

          -0.51815,           0.54776,           0.29736,           0.99779,
           2.28957,           0.82183,

           0.03386,           0.12855,           0.03124,           0.02454,

          -0.31958,           0.00070,

          -1.48184,          -1.28195,           0.03965,          -1.12026,
           0.23910,           0.01293,

           0.36146,          -0.64483,          -1.88470,           0.21469,
         -11.79819,          -1.87287,

           2.65699,          -0.36287,           0.88148,          -1.26883,
          -0.19657,          -0.14279,

          -0.07536,          -0.00004,

           0.01496,           0.00537,

           2.48352,           3.75581,          -0.34909,           3.26696,
          -0.82105,           0.11287,          -0.00755,          -0.13764,

         -15.34429,          -2.79957,          -3.22976,         -15.46084,
          10.66793,          -0.26054,          -0.12188,           5.06211,

           0.01313,           0.00424,

          84.34332,         -57.05646,          92.68150,          -0.02024,
         149.62698,          59.14407,         174.04569,        -129.26785,
         -55.99789,        -238.01484,        -212.51618,        -115.94914,

          -0.01720,          -0.00158,

         -13.65602,          17.47396,           0.16714,          32.66367,
          16.30095,           9.18345,           3.98555,          -5.39985,
          -1.09958,          -0.86072,

           0.02752,          -0.02474,           0.00671,          -0.00278,

          -0.21030,          -0.73658,           0.20708,          -0.21378,

           0.78462,          -2.14051,          -1.60070,          -2.60915,
          -5.02441,          -1.19246,

           0.67622,          -0.41889,           0.07430,          -0.53204,
          -0.11214,          -0.03417,

          -0.72636,          -0.15535,          -0.16815,          -0.35603,
           0.07530,          -0.02521,

          -0.01261,          -0.94883,           0.39930,          -0.05370,
          -2.77309,           0.38431,

           0.72127,          -0.52030,          -0.01804,          -0.51188,
          -0.11993,           0.02189,

           0.00928,          -0.02129,

          -0.02760,           0.00441,

          -0.56832,          -0.48114,           0.64192,          -0.65656,
           0.37483,           0.51883,

          -0.08474,           0.20324,           0.12783,           0.13041,

          -0.01545,          -0.00282,

          -0.16196,          -0.26980,           0.06584,          -0.09987,

          -0.36305,          -0.27610,          -0.57074,          -0.13607,

          -0.00824,           0.00369,

           0.06094,          -0.12214,           0.03581,          -0.00876,

           0.49346,          -0.74596,           0.47814,           0.18201,
          -1.00640,           0.24465,

          10.09808,           2.30496,          13.63359,          -7.94007,
           0.29792,         -13.55724,          -6.48556,          -5.99581,

           0.69686,          -0.22434,           0.23198,          -0.35579,
          -0.04736,          -0.05683,

           0.36710,          -0.16571,           0.14876,           0.21824,

          -0.18940,          -0.15063,          -0.23692,          -0.09990,

          -0.08923,          -0.12222,           0.02998,          -0.04560,

          -0.16229,           0.04552,

          -0.33051,           0.02585,

          -0.00622,           0.01583,

           0.15436,          -0.07109,           0.06429,           0.09218,

          -0.01277,          -0.00019,

           0.02345,          -0.01057,

          -0.07294,           0.02506,

           0.62063,          -0.52533,           0.16814,          -0.77168,
          -0.20614,          -0.31828,

          -0.12856,           0.01316,

          -0.01522,          -0.00126,

           0.01558,           0.04765,

          -0.02776,           0.01166,

          -0.05185,           0.00674,

           0.00754,           0.02183,

          -0.00645,          -0.01050,

          -0.02155,           0.00375,

           0.12040,          -0.00004,

};

static char FAR args[] = {
  0,  6,
  3,  2,  5, -6,  6,  3,  7,  0,
  2,  2,  5, -5,  6,  6,
  3,  1,  5, -2,  6, -3,  8,  0,
  2,  4,  5,-10,  6,  4,
  3,  2,  5, -4,  6, -3,  7,  1,
  3,  3,  5,-10,  6,  7,  7,  0,
  2,  6,  5,-15,  6,  0,
  3,  1,  5, -4,  6,  4,  7,  0,
  3,  3,  5, -8,  6,  2,  7,  0,
  3,  1,  5, -3,  6,  1,  7,  0,
  3,  1,  5, -3,  6,  2,  7,  0,
  1,  1,  7,  1,
  2,  5,  5,-12,  6,  0,
  3,  2,  5, -7,  6,  7,  7,  0,
  3,  1,  5, -1,  6, -3,  7,  0,
  2,  3,  5, -7,  6,  3,
  3,  1,  5, -4,  6,  3,  7,  0,
  2,  1,  5, -2,  6,  3,
  3,  3,  5, -8,  6,  3,  7,  0,
  2,  1,  5, -3,  6,  3,
  3,  1,  5, -3,  6,  3,  7,  0,
  2,  3,  5, -8,  6,  2,
  3,  2,  5, -5,  6,  2,  7,  0,
  1,  2,  7,  0,
  2,  4,  5, -9,  6,  3,
  2,  2,  5, -4,  6,  4,
  1,  1,  6,  2,
  3,  2,  5, -5,  6,  3,  7,  0,
  2,  2,  5, -6,  6,  2,
  2,  5,  5,-11,  6,  1,
  3,  1,  5, -2,  7, -2,  8,  0,
  2,  1,  5, -3,  7,  1,
  2,  3,  5, -6,  6,  3,
  2,  1,  5, -1,  6,  2,
  2,  1,  5, -4,  6,  2,
  2,  3,  5, -9,  6,  0,
  3,  2,  5, -4,  6,  2,  7,  0,
  2,  1,  5, -2,  7,  1,
  2,  6,  5,-13,  6,  0,
  3,  2,  5, -2,  6, -3,  7,  0,
  2,  4,  5, -8,  6,  3,
  2,  3,  6, -3,  7,  0,
  3,  6,  5,-14,  6,  3,  7,  0,
  3,  1,  5, -2,  7,  1,  8,  0,
  2,  2,  5, -3,  6,  2,
  3,  1,  5, -4,  7,  5,  8,  0,
  3,  2,  5, -8,  6,  3,  7,  0,
  3,  4,  5, -9,  6,  3,  7,  0,
  1,  2,  6,  3,
  3,  2,  5, -4,  6,  3,  7,  0,
  2,  2,  5, -7,  6,  2,
  2,  1,  5, -2,  8,  0,
  2,  1,  5, -1,  7,  0,
  3,  3,  5, -6,  6,  2,  7,  0,
  3,  4,  5, -8,  6,  2,  8,  0,
  2,  1,  5, -1,  8,  0,
  3,  2,  5, -3,  6,  1,  7,  0,
  2,  7,  5,-15,  6,  2,
  3,  3,  5, -4,  6, -3,  7,  1,
  2,  5,  5,-10,  6,  4,
  3,  1,  5,  1,  6, -3,  7,  1,
  3,  7,  5,-16,  6,  3,  7,  0,
  2,  3,  5, -5,  6,  4,
  3,  1,  5, -6,  6,  3,  7,  0,
  3,  5,  5,-11,  6,  3,  7,  0,
  1,  1,  5,  5,
  3,  3,  5,-11,  6,  3,  7,  0,
  3,  3,  5, -6,  6,  3,  7,  0,
  2,  2,  5, -7,  7,  0,
  2,  1,  5, -5,  6,  3,
  3,  1,  5, -1,  6,  3,  7,  0,
  2,  3,  5,-10,  6,  3,
  3,  2,  5, -3,  6,  2,  7,  0,
  2,  1,  5,  1,  7,  0,
  3,  2,  5, -1,  6, -3,  7,  0,
  2,  4,  5, -7,  6,  3,
  2,  4,  6, -3,  7,  0,
  2,  2,  5, -2,  6,  4,
  3,  4,  5, -8,  6,  3,  7,  0,
  1,  3,  6,  3,
  3,  2,  5, -3,  6,  3,  7,  0,
  2,  5,  5, -9,  6,  3,
  2,  3,  5, -4,  6,  2,
  2,  1,  5,  1,  6,  2,
  2,  2,  5, -4,  7,  0,
  2,  6,  5,-11,  6,  2,
  2,  2,  5, -3,  7,  0,
  2,  4,  5, -6,  6,  2,
  2,  2,  5, -1,  6,  2,
  1,  4,  6,  1,
  2,  2,  5, -2,  7,  0,
  2,  5,  5, -8,  6,  2,
  2,  3,  5, -3,  6,  2,
  2,  1,  5,  2,  6,  2,
  2,  2,  5, -2,  8,  0,
  2,  2,  5, -1,  7,  0,
  2,  6,  5,-10,  6,  3,
  2,  4,  5, -5,  6,  3,
  2,  6,  6, -3,  7,  0,
  1,  2,  5,  5,
  3,  4,  5, -6,  6,  3,  7,  0,
  1,  5,  6,  4,
  2,  2,  5,-10,  6,  1,
  2,  5,  5, -7,  6,  1,
  2,  3,  5, -2,  6,  2,
  2,  1,  5,  3,  6,  2,
  2,  6,  5, -9,  6,  2,
  2,  4,  5, -4,  6,  2,
  2,  2,  5,  1,  6,  2,
  2,  7,  5,-11,  6,  0,
  2,  3,  5, -3,  7,  0,
  2,  5,  5, -6,  6,  2,
  2,  3,  5, -1,  6,  1,
  2,  3,  5, -2,  7,  0,
  2,  6,  5, -8,  6,  1,
  2,  4,  5, -3,  6,  1,
  2,  2,  5,  2,  6,  0,
  2,  7,  5,-10,  6,  1,
  2,  5,  5, -5,  6,  2,
  1,  3,  5,  3,
  2,  1,  5,  5,  6,  2,
  2,  6,  5, -7,  6,  1,
  2,  4,  5, -2,  6,  1,
  2,  7,  5, -9,  6,  1,
  2,  5,  5, -4,  6,  0,
  2,  6,  5, -6,  6,  0,
  2,  4,  5, -1,  6,  0,
  2,  7,  5, -8,  6,  1,
  2,  5,  5, -3,  6,  0,
  2,  8,  5,-10,  6,  0,
  2,  6,  5, -5,  6,  0,
  1,  4,  5,  2,
  2,  7,  5, -7,  6,  0,
  2,  5,  5, -2,  6,  0,
  2,  8,  5, -9,  6,  0,
  2,  7,  5, -6,  6,  0,
  2,  8,  5, -8,  6,  0,
  2,  9,  5,-10,  6,  0,
  1,  5,  5,  0,
  2,  9,  5, -9,  6,  0,
  2,  1,  3, -1,  5,  0,
 -1
};
/* Total terms = 142, small = 140 */
struct plantbl jup404 = {
  {  0,  0,  1,  0,  9, 16,  7,  5,  0,},
 6,
 args,
 tabl,
 tabb,
 tabr,
 5.2026032092000003e+00,
};
