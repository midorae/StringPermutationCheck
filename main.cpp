//
//  main.cpp
//  StringPermutationCheck
//
//  Created by 이창기 on 2016. 11. 19..
//  Copyright © 2016년 이창기. All rights reserved.
//

#include <iostream>
#define MAX 1000
#define HASH_SIZE 256

bool checkPermutation(char *str1, char *str2);

int main(int argc, const char * argv[])
{
    char str1[MAX];
    char str2[MAX];
    
    std::cout << "input First String : ";
    std::cin >> str1;
    
    std::cout << "input Second String : ";
    std::cin >> str2;
    
    std::cout << "result :" << checkPermutation(str1, str2) << std::endl;
    
    return 0;
}

bool checkPermutation(char *str1, char *str2)
{
    int hash[HASH_SIZE] = {0};
    
    for(int i = 0; i < strlen(str1); i++)
        hash[str1[i]]++;
    
    for(int i = 0; i < strlen(str2); i++)
        hash[str2[i]]--;
    
    for(int i = 0; i < HASH_SIZE; i++)
    {
        if(hash[i] != 0)
            return false;
    }
    
    return true;
}
