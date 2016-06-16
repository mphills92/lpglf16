//
//  SettingsViewController.swift
//  carpoolApp_v1.0
//
//  Created by Matt Hills on 6/9/16.
//  Copyright © 2016 Matthew Hills. All rights reserved.
//

import UIKit

class SettingsViewController: UITableViewController {
    
    @IBAction func closeViewButtonPressed(sender: AnyObject) {
        self.dismissViewControllerAnimated(true, completion: {})
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        //tableView.contentInset = UIEdgeInsetsMake(-35, 0, -35, 0)
        
        navigationController?.navigationBar.barTintColor = UIColor(red: 0/255, green: 51/255, blue: 0/255, alpha: 1.0)
        navigationController?.navigationBar.barStyle = UIBarStyle.BlackTranslucent
        navigationController?.navigationBar.titleTextAttributes = [NSForegroundColorAttributeName: UIColor.whiteColor()]
        navigationController?.navigationBar.titleTextAttributes = [NSFontAttributeName: UIFont(name:"HelveticaNeue-Light", size: 20)!]
    }
}

extension SettingsViewController {
    
    override func tableView(tableView: UITableView, heightForHeaderInSection section: Int) -> CGFloat {
        if (section == 0) {
            return 30
        } else {
            return 12
        }
    }
}
