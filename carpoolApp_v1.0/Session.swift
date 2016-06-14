//
//  Session.swift
//  RWDevCon
//
//  Created by Mic Pringle on 02/03/2015.
//  Copyright (c) 2015 Ray Wenderlich. All rights reserved.
//

import UIKit

class Session {
 
    /*
  var title: String
  var speaker: String
  var room: String
  var time: String
  var backgroundImage: UIImage
 */
    
    var name: String
    var location: String
    var rating: String
    var handicap: Float
    //var backgroundImage: UIImage
  
    /*
  var roomAndTime: String {
    get {
      return "\(time) • \(room)"
    }
  }
 */
  
    init(name: String, location: String, rating: String, handicap: Float) {
        self.name = name
        self.location = location
        self.rating = rating
        self.handicap = handicap
        //self.backgroundImage = backgroundImage
    }
    
    /*
  init(title: String, speaker: String, room: String, time: String, backgroundImage: UIImage) {
    self.title = title
    self.speaker = speaker
    self.room = room
    self.time = time
    self.backgroundImage = backgroundImage
  }
  
  convenience init(dictionary: NSDictionary) {
    let title = dictionary["Title"] as? String
    let speaker = dictionary["Speaker"] as? String
    let room = dictionary["Room"] as? String
    let time = dictionary["Time"] as? String
    let backgroundName = dictionary["Background"] as? String
    //let backgroundImage = UIImage(named: backgroundName!)
    self.init(title: title!, speaker: speaker!, room: room!, time: time!, backgroundImage: backgroundImage!.decompressedImage)
  }*/
    
    convenience init(dictionary: NSDictionary) {
        let name = dictionary["Name"] as? String
        let location = dictionary["Location"] as? String
        let rating = dictionary["Rating"] as? String
        let handicap = dictionary["Handicap"] as? Float
        //let backgroundName = dictionary["Background"] as? String
        //let backgroundImage = UIImage(named: backgroundName!)
        self.init(name: name!, location: location!, rating: rating!, handicap: handicap!)
    }

}
