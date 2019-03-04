//
//  BinarySearch.swift
//  projects
//
//  Created by Ali  on 3/4/19.
//  Copyright © 2019 Ali . All rights reserved.
//

import UIKit

class BinarySearch {

    
    //Array of numbers
    let numbers = [1,2,3,4,5,6,7,8,9,17,19,32,56]
    
    
    func binarySearchValue(searchValue: Int, array:[Int]) -> Bool{
        var leftIndex = 0
        var rightIndex = array.count - 1
        
        while leftIndex <= rightIndex {
            let middleIndex = (leftIndex + rightIndex) / 2
            let middleValue = array[middleIndex]
            
            if middleValue == searchValue {
                return true
            }
            else if searchValue < middleValue {
                rightIndex = middleIndex - 1
            }
                
            else if searchValue > middleValue {
                leftIndex = middleIndex + 1
            }
        }
        
        return false
    }

}

