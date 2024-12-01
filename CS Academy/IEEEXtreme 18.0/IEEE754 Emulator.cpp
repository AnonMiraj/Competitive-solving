#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <cstdint>
#include <cmath>

using namespace std;

union FloatConverter {
    float f;
    uint32_t u;
};

float hexToFloat(const string& hex) {
    FloatConverter converter;
    converter.u = stoul(hex, nullptr, 16);
    return converter.f;
}

float nandOperation(float a, float b) {
    FloatConverter convA, convB, result;
    convA.f = a;
    convB.f = b;
    result.u = ~(convA.u & convB.u);
    return result.f;
}

string floatToHex(float value) {
    FloatConverter converter;
    converter.f = value;
    stringstream ss;
    ss << hex << setw(8) << setfill('0') << converter.u;
    return ss.str();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    vector<string> results; 

    for (int t = 0; t < T; ++t) {
        string C0_hex;
        cin >> C0_hex;

        vector<float> C; 
        C.push_back(hexToFloat(C0_hex)); 

        int L;
        cin >> L;
        vector<vector<float>> LUTs(L); 

        for (int i = 0; i < L; ++i) {
            int lut_size;
            cin >> lut_size;
            int entries = 1 << lut_size; 
            LUTs[i].resize(entries); 

            for (int j = 0; j < entries; ++j) {
                string hex_val;
                cin >> hex_val;
                LUTs[i][j] = hexToFloat(hex_val); 
            }
        }

        int Q; 
        cin >> Q;
        float last_result = 0.0f; 

        for (int q = 0; q < Q; ++q) {
            char command;
            cin >> command;

            if (command == 'C') {
                string hex_val;
                cin >> hex_val;
                C.push_back(hexToFloat(hex_val)); 
            } 
            else if (command == 'F') {
                int i, j, k;
                cin >> i >> j >> k;
                if (i < C.size() && j < C.size() && k < C.size()) {
                    C.push_back(fma(C[i], C[j], C[k])); 
                }
            } 
            else if (command == 'L') {
                int i, j, b;
                cin >> i >> j >> b;
                if (i < LUTs.size() && j >= 0 && j + b <= 32) {
                    FloatConverter converter;
                    converter.f = C[0];
                    uint32_t mask = (converter.u >> j) & ((1 << b) - 1);
                    C.push_back(LUTs[i][mask]); 
                }
            } 
            else if (command == 'N') {
                int i, j;
                cin >> i >> j;
                if (i < C.size() && j < C.size()) {
                    C.push_back(nandOperation(C[i], C[j])); 
                }
            }
            last_result = C.back(); 
        }

        results.push_back(floatToHex(last_result)); 
    }

    for (const auto& res : results) {
        cout << res << '\n';
    }

    return 0;
}
