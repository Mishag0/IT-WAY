#include <stdio.h>
#include <ctype.h>

int main(){
    int n;
    char sim;
    scanf("%d", &n);
    int buk[n];
    int count = 0;
    while (count < n){
    scanf("%c",&sim);
    if (sim == 10||sim == ' ') continue;
        buk[count] = sim;
        count++;
    }
    int arr[26];
    int c = 65;
    for(int i = 0;i < 26;i++){
        arr[i] = c;
        c++;
    }
    int go[26] = {0};

        for (int i = 0;i < 26;i++){
            for (int j = 0;j < n;j++){
            if (tolower(buk[j]) == arr[i] + 32)
            go[i]++;
            }
        }
    for(int i = 0;i < 26;i++){
        printf("%d ", go[i]);
    }
return 0; 
}
