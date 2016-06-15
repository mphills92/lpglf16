//
//  TutorialCell.swift
//  RWDevCon
//
//  Created by Mic Pringle on 27/02/2015.
//  Copyright (c) 2015 Ray Wenderlich. All rights reserved.
//

import UIKit

class AvailableCaddiesCell: UICollectionViewCell {
  
    
    @IBOutlet private weak var imageView: UIImageView!
    @IBOutlet private weak var imageCoverView: UIView!
    @IBOutlet weak var nameLabel: UILabel!
    @IBOutlet weak var roundsCaddiedLabel: UILabel!
    @IBOutlet weak var reserveCaddyButton: UIButton!
    @IBOutlet weak var caddyHandicapLabel: UILabel!
 
    
    var caddiesAvailable: Caddies? {
        didSet {
            if let caddiesAvailable = caddiesAvailable {
                imageView.image = UIImage(named: "DefaultUserBannerProfileImage")
                nameLabel.text = caddiesAvailable.name
                roundsCaddiedLabel.text = "\(caddiesAvailable.rounds) Rounds Caddied"
                reserveCaddyButton.layer.cornerRadius = reserveCaddyButton.bounds.height / 2
                caddyHandicapLabel.text = "\(caddiesAvailable.handicap) Handicap"
                
                //imageView.image = caddiesAvailable.backgroundImage
            }
        }
    }
    
    override func applyLayoutAttributes(layoutAttributes: UICollectionViewLayoutAttributes!) {
        super.applyLayoutAttributes(layoutAttributes)
        
        let standardHeight = UltravisualLayoutConstants.Cell.standardHeight
        let featuredHeight = UltravisualLayoutConstants.Cell.featuredHeight
        
        let delta = 1 - ((featuredHeight - CGRectGetHeight(frame)) / (featuredHeight - standardHeight))
        
        let minAlpha: CGFloat = 0.25
        let maxAlpha: CGFloat = 0.8
        imageCoverView.alpha = maxAlpha - (delta * (maxAlpha - minAlpha))
        
        let scale = max(delta, 0.65)
        //titleLabel.transform = CGAffineTransformMakeScale(scale, scale)
        nameLabel.transform = CGAffineTransformMakeScale(scale, scale)
        roundsCaddiedLabel.transform = CGAffineTransformMakeScale(scale, scale)
        
        caddyHandicapLabel.transform = CGAffineTransformMakeScale(scale, scale)
        caddyHandicapLabel.alpha = delta
        
        reserveCaddyButton.alpha = delta
    }
  
}
