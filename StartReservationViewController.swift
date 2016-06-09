//
//  StartReservationViewController.swift
//  carpoolApp_v1.0
//
//  Created by Matt Hills on 6/7/16.
//  Copyright © 2016 Matthew Hills. All rights reserved.
//

import UIKit

class StartReservationViewController: UIViewController {
    
    @IBOutlet weak var popoverView: UIView!
    @IBOutlet weak var blackFadedBackground: UIButton!
    @IBOutlet weak var containerView: UIView!
    @IBOutlet weak var bottomWhiteView: UIView!
    @IBOutlet weak var findAvailableCaddiesButton: UIButton!
    
    
    @IBAction func cancelReservationButtonPressed(sender: AnyObject) {
        UIView.animateWithDuration(0.1, delay: 0, options: .CurveEaseOut, animations: {
                self.blackFadedBackground.alpha = 0
            }, completion: {
                (value: Bool) in
                self.dismissViewControllerAnimated(true, completion: {})
        })
    }
    
    @IBAction func blackFadedBackgroundButtonPressed(sender: AnyObject) {
        UIView.animateWithDuration(0.1, delay: 0, options: .CurveEaseOut, animations: {
            self.blackFadedBackground.alpha = 0
            }, completion: {
                (value: Bool) in
                self.dismissViewControllerAnimated(true, completion: {})
        })
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        popoverView.layer.cornerRadius = 8
        popoverView.layer.shadowColor = UIColor.blackColor().CGColor
        popoverView.layer.shadowOpacity = 0.5
        popoverView.layer.shadowOffset = CGSizeZero
        popoverView.layer.shadowRadius = 5
        popoverView.layer.shouldRasterize = true
        
        containerView.layer.cornerRadius = 8
        containerView.layer.masksToBounds = true
        
        bottomWhiteView.layer.cornerRadius = 8
        bottomWhiteView.layer.masksToBounds = true
        
        findAvailableCaddiesButton.layer.cornerRadius = 15
        
    }
    
    override func viewDidAppear(animated: Bool) {
        UIView.animateWithDuration(0.25, delay: 0, options: .CurveEaseOut, animations: {
                self.blackFadedBackground.alpha = 0.1
            }, completion: nil)
    }
    
}
