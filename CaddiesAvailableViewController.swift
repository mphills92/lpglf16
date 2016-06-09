//
//  CaddiesAvailableViewController.swift
//  carpoolApp_v1.0
//
//  Created by Matt Hills on 6/8/16.
//  Copyright © 2016 Matthew Hills. All rights reserved.
//

import UIKit

class CaddiesAvailableViewController: UIViewController {
    
    @IBOutlet weak var popoverView: UIView!
    
    @IBAction func cancelViewButtonPressed(sender: AnyObject) {
        self.dismissViewControllerAnimated(true, completion: {})
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        popoverView.layer.cornerRadius = 8
        
    }
}
