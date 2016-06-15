//
//  ContainerConfirmReservationViewController.swift
//  carpoolApp_v1.0
//
//  Created by Matt Hills on 6/15/16.
//  Copyright © 2016 Matthew Hills. All rights reserved.
//

import UIKit

class ContainerConfirmReservationViewController: UITableViewController {
    
    override func viewDidLoad() {
        super.viewDidLoad()
        

    }
    
}

extension ContainerConfirmReservationViewController {
    
    override func tableView(tableView: UITableView, heightForHeaderInSection section: Int) -> CGFloat {
        if (section == 0) {
            return 30
        } else {
            return 12
        }
    }
}
