//
//  InviteViewController.swift
//  carpoolApp_v1.0
//
//  Created by Matt Hills on 6/9/16.
//  Copyright © 2016 Matthew Hills. All rights reserved.
//

import UIKit

class InviteViewController: UIViewController {
    
    @IBOutlet weak var viaTextButton: UIButton!
    @IBOutlet weak var viaEmailButton: UIButton!
    @IBOutlet weak var viaFacebookButton: UIButton!
    @IBOutlet weak var viaTwitterButton: UIButton!
    
    @IBAction func closeViewButtonPressed(sender: AnyObject) {
        self.dismissViewControllerAnimated(true, completion: {})
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        navigationController?.navigationBar.barTintColor = UIColor(red: 0/255, green: 51/255, blue: 0/255, alpha: 1.0)
        navigationController?.navigationBar.barStyle = UIBarStyle.BlackTranslucent
        navigationController?.navigationBar.titleTextAttributes = [NSForegroundColorAttributeName: UIColor.whiteColor()]
        navigationController?.navigationBar.titleTextAttributes = [NSFontAttributeName: UIFont(name:"HelveticaNeue-Light", size: 20)!]
        
        viaTextButton.layer.cornerRadius = viaTextButton.bounds.height / 2
        viaEmailButton.layer.cornerRadius = viaEmailButton.bounds.height / 2
        viaFacebookButton.layer.cornerRadius = viaFacebookButton.bounds.height / 2
        viaTwitterButton.layer.cornerRadius = viaTwitterButton.bounds.height / 2
    }
}
