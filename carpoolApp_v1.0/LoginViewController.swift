//
//  LoginViewController.swift
//  carpoolApp_v1.0
//
//  Created by Matt Hills on 6/25/16.
//  Copyright © 2016 Matthew Hills. All rights reserved.
//

import UIKit
import Firebase

class LoginViewController: UIViewController, UITextFieldDelegate {
    
    
    @IBOutlet weak var backgroundView: UIView!
    @IBOutlet weak var emailTextField: UITextField!
    @IBOutlet weak var passwordTextField: UITextField!
    @IBOutlet weak var loginButton: UIButton!
    @IBOutlet weak var loginButtonTopConstraint: NSLayoutConstraint!
    @IBOutlet weak var loginButtonCenterConstraint: NSLayoutConstraint!
    var screenSize = UIScreen.mainScreen().bounds
    
    var emailToValidate = String()
    var passwordToValidate = String()
    
    let userEmail = UserEmail()
    let userPassword = UserPassword()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        emailTextField.delegate = self
        passwordTextField.delegate = self
        emailTextField.autocorrectionType = .No
        passwordTextField.autocorrectionType = .No
        passwordTextField.secureTextEntry = true
        
        backgroundView.layer.cornerRadius = 8
        loginButton.layer.cornerRadius = loginButton.bounds.height / 2
        
        let imageViewBackground = UIImageView(frame: CGRectMake(0, 0, screenSize.width, screenSize.height))
        imageViewBackground.image = UIImage(named: "LandingPageBackground")
        imageViewBackground.contentMode = UIViewContentMode.ScaleAspectFill
        self.view.addSubview(imageViewBackground)
        self.view.sendSubviewToBack(imageViewBackground)
        
        emailTextField.attributedPlaceholder = NSAttributedString(string:"Email", attributes: [NSForegroundColorAttributeName: UIColor.darkGrayColor()])
        passwordTextField.attributedPlaceholder = NSAttributedString(string:"Password", attributes: [NSForegroundColorAttributeName: UIColor.darkGrayColor()])
        self.loginButtonCenterConstraint.constant = screenSize.width
        
        emailTextField.tag = 1
        passwordTextField.tag = 2
    }
}

extension LoginViewController {
    
    func textFieldDidBeginEditing(textField: UITextField) {
        loginButtonOutOfView()
        
        switch (textField.tag) {
        case 1:
            passwordTextField.userInteractionEnabled = false
        case 2:
            emailTextField.userInteractionEnabled = true
        default:
            break
        }

    }
    
    func textFieldShouldReturn(textField: UITextField) -> Bool {
        switch (textField.tag) {
        case 1:
            passwordTextField.userInteractionEnabled = true
            passwordTextField.becomeFirstResponder()
        case 2:
            FIRAuth.auth()?.signInWithEmail(emailTextField.text!, password: passwordTextField.text!, completion: { (user, error) in
                
                if error != nil {
                    
                }
                else {
                    self.loginButtonInView()
                }
            })
        default:
            break
        }
        textField.resignFirstResponder()
        return true
    }
    
    func loginButtonInView() {
        self.loginButtonCenterConstraint.constant = self.screenSize.width
        UIView.animateWithDuration(0.5, delay: 0.0, usingSpringWithDamping: 0.75, initialSpringVelocity: 5, options: UIViewAnimationOptions.CurveEaseIn, animations: {
            self.loginButtonCenterConstraint.constant -= self.screenSize.width
            self.view.layoutIfNeeded()
            }, completion: nil)
    }
    
    func loginButtonOutOfView() {
        UIView.animateWithDuration(0.5, delay: 0.0, options: UIViewAnimationOptions.CurveEaseIn, animations: {
            self.loginButtonCenterConstraint.constant = self.screenSize.width
            self.view.layoutIfNeeded()
            }, completion: nil)
    }
}
