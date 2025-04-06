#include <iostream>
#define ROZMIAR 10
using namespace std;

void change(char arr[10][10]) {


        
        for(int i = 0; i < ROZMIAR; i++) {
                int n = 0; //licznik
                int max_n = 0;
                
                for(int j = 0; j < ROZMIAR; j++) {
                        if(arr[i][j] == '*') {
                                n++;
                        }
                        else {
                                if(n > max_n) {
                                        max_n = n;
                                }
                                n = 0;
                        }
                        if(n > max_n) {
                                max_n = n;
                        }       
                }
                for(int j = 0; j < ROZMIAR; j++) {
                        if(arr[i][j] == '*') {
                                if(max_n == 10) {
                                        arr[i][j] = '0';
                                }
                                else{
                                        arr[i][j] = (char)(max_n+48);
                                }
                                
                        }
                }
        }

        for(int j = 0; j < ROZMIAR; j++) {
                int n = 0;
                int max_n = 0;
                for(int i = 0; i < ROZMIAR; i++) {
                        if(arr[i][j] == '1') {
                                n++;
                        }
                        else {
                                if(n > max_n) {
                                        max_n = n;
                                }
                                n = 0;
                        }
                        if(n > max_n) {
                                max_n = n;
                        }       
                }
                for(int i = 0; i < ROZMIAR; i++) {
                        if(arr[i][j] == '1') {
                                arr[i][j] = (char)(max_n+48);
                        }
                }
        }
        
        
}

void print(const char arr[10][10]) {
        for(int i = 0; i < ROZMIAR; i++) {
                for(int j = 0; j < ROZMIAR; j++) {
                        cout<<arr[i][j];
                }
                cout<<endl;
        }
}


int main() {
        
        char arr[ROZMIAR][ROZMIAR];
                for(int i = 0; i < ROZMIAR; i++) {
                        for(int j = 0; j < ROZMIAR; j++) {
                                cin>>arr[i][j];
                        }
                }
        
        change(arr);
        print(arr);
        
        return 0;
}
