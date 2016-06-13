//
//  CaddiesAvailableContainerTableViewController.swift
//  carpoolApp_v1.0
//
//  Created by Matt Hills on 6/13/16.
//  Copyright © 2016 Matthew Hills. All rights reserved.
//

import UIKit

class CaddiesAvailableContainerTableViewController: UITableViewController {
    
    var caddiesList = Caddies().caddiesAvailableList //["1", "2", "3", "4", "5"]
    var cellTapped: Bool = false
    var currentRow = -1
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        tableView.contentInset = UIEdgeInsetsMake(-35, 0, -35, 0)
        //tableView.registerClass(AvailableCaddiesCell.self, forCellReuseIdentifier: "cell")
        
    }

    override func numberOfSectionsInTableView(tableView: UITableView) -> Int {
        return 1
    }
    
    override func tableView(tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return caddiesList.count //caddiesList.count
    }
    
    override func tableView(tableView: UITableView, cellForRowAtIndexPath indexPath: NSIndexPath) -> AvailableCaddiesCell {
        let cell = tableView.dequeueReusableCellWithIdentifier("cell", forIndexPath: indexPath) as! AvailableCaddiesCell
        
        //cell.textLabel?.text = caddiesList[indexPath.row]
        cell.profileImageBackgroundView.layer.cornerRadius = 8
        
        return cell
    }
    
    override func tableView(tableView: UITableView, didSelectRowAtIndexPath indexPath: NSIndexPath) {
        
        let cell = self.tableView.cellForRowAtIndexPath(indexPath) as! AvailableCaddiesCell
        currentRow = indexPath.row
        
        if (cellTapped == false) {
            cell.disclosureIndicator.transform = CGAffineTransformMakeScale(1, -1)
        } else {
            cell.disclosureIndicator.transform = CGAffineTransformMakeScale(-1, 1)
        }
        
        tableView.beginUpdates()
        tableView.endUpdates()
        
    }
    
    override func tableView(tableView: UITableView, heightForRowAtIndexPath indexPath: NSIndexPath) -> CGFloat {
        
        if (currentRow == indexPath.row) {
            if (cellTapped == false) {
                cellTapped = true
                return 240
            } else {
                cellTapped = false
                return 44
            }
        }
        return 44
    }
    
}
