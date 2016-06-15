//
//  ConfirmReservationViewController.swift
//  carpoolApp_v1.0
//
//  Created by Matt Hills on 6/14/16.
//  Copyright © 2016 Matthew Hills. All rights reserved.
//

import UIKit

class ConfirmReservationViewController: UIViewController {
    
    @IBOutlet weak var popoverView: UIView!
    @IBOutlet weak var navigationBar: UINavigationBar!
    @IBOutlet weak var confirmReservationButton: UIButton!
    
    @IBAction func cancelViewButtonPressed(sender: AnyObject) {
        self.dismissViewControllerAnimated(true, completion: {})
    }

    override func viewDidLoad() {
        super.viewDidLoad()
        
        popoverView.layer.cornerRadius = 8
        popoverView.layer.shadowColor = UIColor.blackColor().CGColor
        popoverView.layer.shadowOpacity = 0.5
        popoverView.layer.shadowOffset = CGSizeZero
        popoverView.layer.shadowRadius = 5
        popoverView.layer.shouldRasterize = true
        
        navigationBar.setBackgroundImage(UIImage(), forBarMetrics: .Default)
        navigationBar.shadowImage = UIImage()
        
        confirmReservationButton.layer.cornerRadius = confirmReservationButton.bounds.height / 2
    }
    
    @IBAction func infoButtonPressed(sender: AnyObject) {
        let alertController = UIAlertController(title: "Why am I charged 10% of my reservation total?", message:  "\n Our caddies need assurance in return for blocking off a 5 hour time window within their schedules. \n \n Between now and your reservation date, the 10% reservation cost that you are charged remains securely held by Loop. If you choose to cancel your reservation prior to 48 hours before your reservation, the amount will be fully refunded to your payment method. If you choose to cancel your reservation within 48 hours of the reservation or if you decide not show up to your reservation, you forfeit the amount and it is paid to the caddy you had reserved.", preferredStyle: .Alert)
        alertController.view.tintColor = UIColor(red: 0/255, green: 51/255, blue: 0/255, alpha: 1.0)
        let doneAction = UIAlertAction(title: "OK", style: .Cancel) { (action) in }
        alertController.addAction(doneAction)
        
        self.presentViewController(alertController, animated: true) {
            alertController.view.tintColor = UIColor(red: 0/255, green: 51/255, blue: 0/255, alpha: 1.0)
        }
        
    }
    
}
