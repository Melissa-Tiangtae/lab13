#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
   do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void showImage(const bool image[][M]){

  for(int i=-1;i<N+1;i++){
    for(int j=-1; j<M+1; j++){

        if(i== -1 || i==N) cout << "-";
        else if(j==-1 || j== M) cout << "|";
        else if(image [i][j]) cout << "*";
        else cout << " ";

    }


    cout << endl;
  }
}

void updateImage(bool image[][M],int s,int x,int y){

  

    for(int i=0;i<N;i++){
        for(int j=0; j<M; j++){
              bool condition = sqrt(pow((i-x),2) + pow((j-y),2)) <= (s-1);
            if(condition){
                image[i][j] = true;
            }

        }


    }
     

}

