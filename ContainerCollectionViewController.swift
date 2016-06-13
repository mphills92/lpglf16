//
//  ContainerCaddiesAvailableViewController.swift
//  carpoolApp_v1.0
//
//  Created by Matt Hills on 6/9/16.
//  Copyright © 2016 Matthew Hills. All rights reserved.
//

import UIKit

// raywenderlich.com/99087/swift-expanding-cells-ios-collection-views

class ContainerCollectionViewController: UICollectionViewController {
    
    let reuseIdentifier = "cell"
    var items = [ "Caddy 1",
                  "Caddy 2",
                  "Caddy 3",
                  "Caddy 4",
                  "Caddy 5",
                  "Caddy 6",
                  "Caddy 7",
                  "Caddy 8",
                  "Caddy 9",
                  "Caddy 10",
                  "Caddy 11",
                  "Caddy 12",
                  "Caddy 13",
                  "Caddy 14",
                  "Caddy 15",
                  "Caddy 16",
                  "Caddy 17",
                  "Caddy 18"]
    
    @IBOutlet var viewCollection: UICollectionView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
    }
    
    override func collectionView(collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return self.items.count
    }
    
    override func collectionView(collectionView: UICollectionView, cellForItemAtIndexPath indexPath: NSIndexPath) -> UICollectionViewCell {
        let cell = collectionView.dequeueReusableCellWithReuseIdentifier(reuseIdentifier, forIndexPath: indexPath) as! CaddiesAvailableCollectionTableViewCell
        
        cell.caddyNameLabel.text = self.items[indexPath.item]
        
        return cell
    }
    

    func collectionView(collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, sizeForItemAtIndexPath indexPath: NSIndexPath) -> CGSize {
        
        let viewWidth = viewCollection.frame.width
        //print(viewCollection.frame.width)
        //print(quarterViewWidth)
        
        
        return CGSizeMake(viewWidth / 3, viewWidth / 2)
    }

    
}
