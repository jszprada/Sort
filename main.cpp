#include<iostream>

using namespace std;

void sort1(char tablica[],const int rozmiar){
    for(int i=0;i<rozmiar;i++){
        int maxIndex = i;
        for(int j=i+1;j<rozmiar;j++){
            if((int) tablica[j]<tablica[maxIndex]){
                maxIndex =j;
            }
        }
        double tmp = tablica[i];
        tablica[i] = tablica[maxIndex];
        tablica[maxIndex] = tmp;
    }       
}

void sort2( int tablica2[][5],const int w,const int k){
    for(int p = 0;p<w;p++){
        for(int c = 0;c<k;c++){
            for(int i=0;i<w;i++){
                for(int d=0;d<k;d++){
                    if(tablica2[i][d]>tablica2[p][c]){
                        swap(tablica2[i][d],tablica2[p][c]);
                    }
                }
            }
        }
    }
}

void wyswietlanie(int tablica3[],const int rozmiar){
    for(int i=0;i<rozmiar;i++){
                cout<<tablica3[i]<<" ";
            }
}
void sort3(int tablica3[],const int rozmiar){
    int dolny = 0;
    int gorny = rozmiar-1;
    bool zamiana = true;
   do{
        zamiana = false;
        for(int i = dolny;i<gorny;i++){
            if(tablica3[i]<tablica3[i+1])
            {
                swap(tablica3[i],tablica3[i+1]);
                zamiana = true;
            }
        }
        gorny--;
        for(int i = gorny;i>dolny;i--){
            if(tablica3[i]>tablica3[i-1])
            {
                swap(tablica3[i],tablica3[i-1]);
                zamiana = true;
            }
        }
        dolny++;
        if(dolny>gorny) zamiana = false;
        wyswietlanie(tablica3,rozmiar);
    }while(zamiana == true);
    
}

int main(){
    short int nZadania;
    cin>>nZadania;
    switch(nZadania){
        case 1:{
            const int rozmiar = 30;
            char tablica[rozmiar];
            for(int i=0;i<rozmiar;i++){
                cin>>tablica[i];
            }
            sort1(tablica,rozmiar);
            for(int i = 0;i<rozmiar;i++)
            cout<<tablica[i]<<" ";
            
        }
        break;
        case 2:{
            const int w = 4;
            const int k = 5;
            int tablica2[w][k];
            
            for(int i = 0;i<w;i++){
            for(int j = 0;j<k;j++){
                  cin>>tablica2[i][j];
              }  
            }
            sort2(tablica2,w,k);
            for(int i = 0;i<w;i++){
            for(int j = 0;j<k;j++){
                  cout<<tablica2[i][j]<<" ";
              }  
            }
        }
        break;
        case 3:{
            const int rozmiar = 10;
             int tablica3[rozmiar];
            for(int i=0;i<rozmiar;i++){
                cin>>tablica3[i];
            }
            sort3(tablica3,rozmiar);
        }
        break;
    }
}