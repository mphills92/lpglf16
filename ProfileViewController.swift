//
//  ProfileViewController.swift
//  carpoolApp_v1.0
//
//  Created by Matt Hills on 6/9/16.
//  Copyright © 2016 Matthew Hills. All rights reserved.
//

import UIKit

class ProfileViewController: UIViewController, UIScrollViewDelegate {
    
    // Reservations, notifications, past caddies
    let screenSize: CGRect = UIScreen.mainScreen().bounds
    
    @IBOutlet weak var scrollView: UIScrollView!
    @IBOutlet weak var stickySegmentedTab: UIView!
    @IBOutlet weak var constrainedStickyTabToNavBar: NSLayoutConstraint!
    
    @IBAction func closeViewButtonPressed(sender: AnyObject) {
        self.dismissViewControllerAnimated(true, completion: {})
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        scrollView.delegate = self
        
        navigationController?.navigationBar.barTintColor = UIColor(red: 0/255, green: 51/255, blue: 0/255, alpha: 1.0)
        navigationController?.navigationBar.barStyle = UIBarStyle.BlackTranslucent
        navigationController?.navigationBar.titleTextAttributes = [NSForegroundColorAttributeName: UIColor.whiteColor()]
        navigationController?.navigationBar.titleTextAttributes = [NSFontAttributeName: UIFont(name:"HelveticaNeue-Light", size: 20)!]
        
        self.stickySegmentedTab.layer.shadowOpacity = 0.25
        self.stickySegmentedTab.layer.shadowOffset = CGSizeMake(0.0, 0.0)
        
        let distBetweenScrollSectionAndNavBar : CGFloat = 230 - 64
        let screenSizeAdjustment = 1 + (distBetweenScrollSectionAndNavBar / screenSize.height)
        self.scrollView.contentSize.height = screenSize.height * screenSizeAdjustment
        self.scrollView.contentInset = UIEdgeInsetsMake(-64, 0, 0, 0)
    }
}

extension ProfileViewController {
    
    
    func scrollViewDidScroll(scrollView: UIScrollView) {
        let scrollOffset = scrollView.contentOffset.y
        
        if (scrollOffset >= 230) {
            constrainedStickyTabToNavBar.constant = 230 + (scrollOffset - 230)
        } else {
            constrainedStickyTabToNavBar.constant = 230
        }
    }
}
