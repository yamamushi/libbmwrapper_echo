//
//  main.cpp
//  bmecho
//
//  Created by Jonathan Rumion on 6/30/14.
//
//

#include "Network.h"

#include <iostream>
#include <BitMessage.h>
#include <memory>

int main(){
    

    std::shared_ptr<NetworkModule> netModule = std::shared_ptr<NetworkModule>(new bmwrapper::BitMessage(commstring));
    std::cout << "Testing" << std::endl;
    
    return 0;
}