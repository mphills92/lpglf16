//
//  StartReservationContainerViewController.swift
//  carpoolApp_v1.0
//
//  Created by Matt Hills on 6/7/16.
//  Copyright © 2016 Matthew Hills. All rights reserved.
//

import UIKit

class StartReservationContainerViewController: UITableViewController {
    
    var cellTapped: Bool = true
    var viewJustLaunched = true
    var currentRow = Int()
    var selectedDate = NSDate()
    var dateFormatter = NSDateFormatter()
    var locationButtonForFormatting = UIButton()
    var selectedLocation = String()
    var morningButtonSelected = Bool()
    var afternoonButtonSelected = Bool()

//Choose location tableViewCell and dropdown outlet properties.
    @IBOutlet weak var chooseLocationLabel: UILabel!
    @IBOutlet weak var chooseLocationDisclosureIndicator: UIImageView!
    @IBOutlet weak var location1Button: UIButton!
    @IBOutlet weak var location2Button: UIButton!
    @IBOutlet weak var location3Button: UIButton!

//Choose date tableViewCell and dropdown outlet properties.
    @IBOutlet weak var chooseDateScrollView: UIScrollView!
    @IBOutlet weak var chooseDateDisclosureIndicator: UIImageView!

//Choose time tableViewCell and dropdown outlet properties.
    @IBOutlet weak var chooseTimePicker: UIDatePicker!
    @IBOutlet weak var chooseTimeDisclosureIndicator: UIImageView!
    @IBOutlet weak var timeSeparatorLeadingConstraint: NSLayoutConstraint!
    @IBOutlet weak var morningAMButton: UIButton!
    @IBOutlet weak var afternoonPMButton: UIButton!
    

    
    @IBAction func location1ButtonPressed(sender: AnyObject) {
        selectedLocation = (location1Button.titleLabel?.text)!
        updateChooseLocationLabel()
    }
    
    @IBAction func location2ButtonPressed(sender: AnyObject) {
        selectedLocation = (location2Button.titleLabel?.text)!
        updateChooseLocationLabel()
    }
    
    @IBAction func location3ButtonPressed(sender: AnyObject) {
        selectedLocation = (location3Button.titleLabel?.text)!
        updateChooseLocationLabel()
    }
    
    @IBAction func morningAMButtonPressed(sender: AnyObject) {
        morningButtonSelected = true
        afternoonButtonSelected = false
        setAMButtonProperties()
        setPMButtonProperties()
    }
    
    @IBAction func afternoonPMButtonPressed(sender: AnyObject) {
        morningButtonSelected = false
        afternoonButtonSelected = true
        setAMButtonProperties()
        setPMButtonProperties()
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        tableView.contentInset = UIEdgeInsetsMake(-35, 0, -35, 0)
        chooseDateScrollView.contentSize.height = 690
        
        morningButtonSelected = true
        afternoonButtonSelected = false
        setAMButtonProperties()
        setPMButtonProperties()
        
        timeSeparatorLeadingConstraint.constant = ((((view.frame.width / 2) - 80) / 2) + 60)
        
        
        
        setLocationButtonProperties(location1Button)
        setLocationButtonProperties(location2Button)
        setLocationButtonProperties(location3Button)
        
        //chooseTimePicker.addTarget(self, action: "dateChangedValue:", forControlEvents: UIControlEvents.ValueChanged)
    }
    
    override func tableView(tableView: UITableView, didSelectRowAtIndexPath indexPath: NSIndexPath) {
        var selectedRowIndex = indexPath
        currentRow = selectedRowIndex.row
        print(currentRow)
        
        tableView.beginUpdates()
        tableView.endUpdates()
    }
    
    override func tableView(tableView: UITableView, heightForRowAtIndexPath indexPath: NSIndexPath) -> CGFloat {
        
        
        if (indexPath.row == currentRow) {
            if cellTapped == false {
                if (currentRow == 0) {
                    cellTapped = true
                    chooseLocationDisclosureIndicator.transform = CGAffineTransformMakeScale(1, -1)
                    return (view.frame.height - 44)
                } else if (currentRow == 1) {
                    cellTapped = true
                    chooseDateDisclosureIndicator.transform = CGAffineTransformMakeScale(1, -1)
                    return (view.frame.height - 88)
                } else if (currentRow == 2) {
                    cellTapped = true
                    chooseTimeDisclosureIndicator.transform = CGAffineTransformMakeScale(1, -1)
                    return (view.frame.height - 88)
                }
            } else {
                cellTapped = false
                chooseLocationDisclosureIndicator.transform = CGAffineTransformMakeScale(1, 1)
                chooseDateDisclosureIndicator.transform = CGAffineTransformMakeScale(1, 1)
                chooseTimeDisclosureIndicator.transform = CGAffineTransformMakeScale(1, 1)
                return 44
            }
        }
    return 44
        
        
    }

    func setLocationButtonProperties(locationButtonForFormatting: UIButton) {
        locationButtonForFormatting.layer.borderColor = UIColor.whiteColor().CGColor
        locationButtonForFormatting.layer.borderWidth = 1
        locationButtonForFormatting.layer.cornerRadius = 8
    }
    
    func updateChooseLocationLabel() {
        chooseLocationLabel.text = selectedLocation
        chooseLocationLabel.textColor = UIColor(red: 0/255, green: 51/255, blue: 0/255, alpha: 1.0)
    }
    
    func setAMButtonProperties() {
        if (morningButtonSelected == true) {
            morningAMButton.layer.borderColor = UIColor.whiteColor().CGColor
            morningAMButton.layer.borderWidth = 1
            morningAMButton.layer.cornerRadius = 16
        } else {
            morningAMButton.layer.borderColor = UIColor.clearColor().CGColor
        }
    }
    
    func setPMButtonProperties() {
        if (afternoonButtonSelected == true) {
            afternoonPMButton.layer.borderColor = UIColor.whiteColor().CGColor
            afternoonPMButton.layer.borderWidth = 1
            afternoonPMButton.layer.cornerRadius = 16
        } else {
            afternoonPMButton.layer.borderColor = UIColor.clearColor().CGColor
        }
    }
    
    func dateChangedValue(date: NSDate) {
        selectedDate = chooseTimePicker.date
        print(selectedDate)
    }
}

extension NSLayoutConstraint {
    
    override public var description: String {
        let id = identifier ?? ""
        return "id: \(id), constant: \(constant)"
    }
}
