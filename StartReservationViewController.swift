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
    @IBOutlet weak var containerView: UIView!
    @IBOutlet weak var bottomWhiteView: UIView!
    @IBOutlet weak var findAvailableCaddiesButton: UIButton!
    
    
    @IBAction func cancelReservationButtonPressed(sender: AnyObject) {
        self.dismissViewControllerAnimated(true, completion: {})
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        popoverView.layer.cornerRadius = 8
        containerView.layer.cornerRadius = 8
        containerView.layer.masksToBounds = true
        bottomWhiteView.layer.cornerRadius = 8
        bottomWhiteView.layer.masksToBounds = true
        
        findAvailableCaddiesButton.layer.cornerRadius = 15
        
    }
}
