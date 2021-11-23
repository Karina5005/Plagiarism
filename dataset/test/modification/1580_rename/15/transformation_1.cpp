#include<bits/stdc++.h>
using namespace std;

int nv_v[500][500];
int gg[200001];
int vet[200001];

int main() {
    cin.tie(nullptr) -> sync_with_stdio(false);
    int hj, z_mlk;
    cin >> hj >> z_mlk;
    vector<int> v_hdd(hj), b(hj);
    vector<int> gs(hj, -1);
    int qoq = sqrt(z_mlk);
    for (int ha_u = 0; ha_u < hj; ha_u++) cin >> v_hdd[ha_u] >> b[ha_u];
    for (int izl_kg = 0; izl_kg < z_mlk; izl_kg++) {
        int m, yq_gbb;
        cin >> m >> yq_gbb;
        yq_gbb--;
        if (v_hdd[yq_gbb] + b[yq_gbb] <= qoq) {
            if (gs[yq_gbb] == -1) {
                for (int j = izl_kg + v_hdd[yq_gbb]; j < izl_kg + v_hdd[yq_gbb] + b[yq_gbb]; j++) {
                    nv_v[v_hdd[yq_gbb] + b[yq_gbb]][j % (v_hdd[yq_gbb] + b[yq_gbb])]++;
                }
                gs[yq_gbb] = izl_kg;
            }
            else {
                for (int yg = gs[yq_gbb] + v_hdd[yq_gbb]; yg < gs[yq_gbb] + v_hdd[yq_gbb] + b[yq_gbb]; yg++) {
                    nv_v[v_hdd[yq_gbb] + b[yq_gbb]][yg % (v_hdd[yq_gbb] + b[yq_gbb])]--;
                }
                gs[yq_gbb] = -1;
            }
        }
        else {
            if (gs[yq_gbb] == -1) {
                gs[yq_gbb] = izl_kg;
            }
            else {
            for (int hx_ubt = gs[yq_gbb] + v_hdd[yq_gbb]; hx_ubt < izl_kg; hx_ubt += v_hdd[yq_gbb] + b[yq_gbb]) {
                gg[hx_ubt]++;
                gg[min(izl_kg, hx_ubt + b[yq_gbb])]--;
            }
            gs[yq_gbb] = -1;
            }
        }
        for (int g = 1; g <= qoq; g++) {
            vet[izl_kg] += nv_v[g][izl_kg % g];
        }
    }
    for (int g_b = 0; g_b < hj; g_b++) {
        if (gs[g_b] != -1 && v_hdd[g_b] + b[g_b] > qoq) {

            for (int cy_uem = gs[g_b] + v_hdd[g_b]; cy_uem < z_mlk; cy_uem += v_hdd[g_b] + b[g_b]) {
                gg[cy_uem]++;
                gg[min(z_mlk, cy_uem + b[g_b])]--;
            }
        }
    }
    for (int b_vwz = 0; b_vwz < z_mlk; b_vwz++) {
        if(b_vwz > 0) gg[b_vwz] += gg[b_vwz - 1];
        vet[b_vwz] += gg[b_vwz];
    }
    for (int xi_l = 0; xi_l < z_mlk; xi_l++) {
        cout << vet[xi_l] << '\n';
    }
    return 0;
}