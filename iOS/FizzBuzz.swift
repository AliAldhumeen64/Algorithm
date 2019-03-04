//
//  FizzBuzz.swift
//  projects
//
//  Created by Ali  on 3/4/19.
//  Copyright © 2019 Ali . All rights reserved.
//

import UIKit

class FizzBuzz {
    
//Array of numbers
let numbers = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18]
    
for num in numbers {
    
        if num % 15 == 0
            {
                print("FizzBuzz")
            }
        else if num % 3 == 0
            {
                print("Fizz")
            }
        else if num % 5 == 0
            {
                print("Buzz")
            }
        else
            {
                print(num)
            }
        }
}
