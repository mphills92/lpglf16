//
//  SignUpProfilePictureViewController.swift
//  carpoolApp_v1.0
//
//  Created by Matt Hills on 6/26/16.
//  Copyright © 2016 Matthew Hills. All rights reserved.
//

import UIKit

class SignUpProfilePictureViewController: UITableViewController {
   
    @IBOutlet weak var userProfileImageView: UIImageView!
    @IBOutlet weak var continueButton: UIButton!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        navigationItem.title = "Upload Picture"
        self.navigationController?.navigationBar.titleTextAttributes = [NSForegroundColorAttributeName: UIColor.whiteColor()]
        navigationController?.navigationBar.titleTextAttributes = [NSFontAttributeName: UIFont(name:"HelveticaNeue-Light", size: 20)!]
        self.navigationController?.navigationBar.tintColor = UIColor.whiteColor()
        
        userProfileImageView.layer.cornerRadius = 8
    }
    
    override func viewWillAppear(animated: Bool) {
        super.viewWillAppear(animated)
        
        navigationItem.backBarButtonItem = UIBarButtonItem(title: "", style: .Plain, target: nil, action: nil)
    }
}