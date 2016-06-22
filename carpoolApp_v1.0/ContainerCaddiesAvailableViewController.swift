//
//  ContainerCaddiesAvailableViewController.swift
//  carpoolApp_v1.0
//
//  Created by Matt Hills on 6/8/16.
//  Copyright © 2016 Matthew Hills. All rights reserved.
//

import UIKit

class ContainerCaddiesAvailableViewController: UICollectionViewController {
    
    let caddiesAvailable = Caddies.caddiesAvailable()
  
    override func viewDidLoad() {
        super.viewDidLoad()

        collectionView!.backgroundColor = UIColor.clearColor()
        collectionView!.layoutIfNeeded()
        collectionView!.decelerationRate = UIScrollViewDecelerationRateFast //UIScrollViewDecelerationRateNormal //UIScrollViewDecelerationRateFast
    }
}


extension ContainerCaddiesAvailableViewController {
  
    
    override func numberOfSectionsInCollectionView(collectionView: UICollectionView) -> Int {
        return 1
    }
  
    override func collectionView(collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return caddiesAvailable.count
    }
  
    override func collectionView(collectionView: UICollectionView, cellForItemAtIndexPath indexPath: NSIndexPath) -> UICollectionViewCell {
    
        let cell = collectionView.dequeueReusableCellWithReuseIdentifier("cell", forIndexPath: indexPath) as! AvailableCaddiesCell
    
        cell.caddiesAvailable = caddiesAvailable[indexPath.item]
        //cell.inspiration = inspirations[indexPath.item]
        //cell.contentView.backgroundColor = UIColor.groupTableViewBackgroundColor() //colors[indexPath.item]
        cell.layoutIfNeeded()
        return cell
    }

}