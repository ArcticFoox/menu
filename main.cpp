#include<iostream>
using namespace std;

int main(){
    string menu_name[10] = {"a", "b", "c", "d", "e", "f", "g", "h", "i"};
    int menu[10] = {8000, 5000, 3000, 15000, 8000, 6000, 20000, 9000, 10000};
    int menu_count[10] = {0, };
    int menu_index[10] = {0 ,};
    int sum = 0;
    bool it = true;
    while(it){
        int num, count;
        int button;
        cout << "Korean 1, Japanese 2, Western 3, cart 4 \n";
        cin >> button;
        switch(button){
            case 1:
                while(true){
                    cout << "1. a    2. b    3. c  4.return\n";
                    cin >> num;
                    if(num == 4){
                        break;
                    }
                    cout << " num : ";
                    cin >> count;
                    sum += menu[num - 1] * count;
                    menu_count[num - 1] += count;
                }
                break;
            case 2:
                while(true){
                    cout << "1. d    2. e    3. f  4.return\n";
                    cin >> num;
                    if(num == 4){
                        break;
                    }
                    cin >> count;
                    sum += menu[num + 2] * count;
                    menu_count[num + 2] += count;
                }
                break;
            case 3:
                while(true){
                    cout << "1. g    2. h    3. i  4.return\n";
                    cin >> num;
                    if(num == 4){
                        break;
                    }
                    cin >> count;
                    sum += menu[num + 5] * count;
                    menu_count[num + 5] += count;
                }
                break;
            case 4:
                while(true){
                    int j = 0;
                    for(int i = 0; i < 10; i++){
                        if(menu_count[i] != 0){
                            menu_index[j] = i;
                            j++;
                            cout << menu_name[i] << " : " << menu_count[i] << "\n";
                        }
                    }

                    cout << "sum : " << sum << "\n";

                    cout << "1. payment    2. cancel    3. return\n";
                    cin >> num;
                    if(num == 1){
                        cout << "complete\n";
                        return 0;
                    }

                    else if(num == 2){
                        cin >> num >> count;
                        menu_count[menu_index[num - 1]] -= count;
                        sum -= menu[menu_index[num - 1]] * count;
                    }

                    else{
                        break;
                    }
                }
                break;
            default:
                cout << "wrong button try again" << "\n";
                break; 
        }
    }
}