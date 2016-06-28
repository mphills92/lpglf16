//
//  LoginViewController.swift
//  carpoolApp_v1.0
//
//  Created by Matt Hills on 6/25/16.
//  Copyright © 2016 Matthew Hills. All rights reserved.
//

import UIKit

class LoginViewController: UIViewController, UITextFieldDelegate {
    
    
    @IBOutlet weak var backgroundView: UIView!
    @IBOutlet weak var emailTextField: UITextField!
    @IBOutlet weak var passwordTextField: UITextField!
    @IBOutlet weak var loginButton: UIButton!
    @IBOutlet weak var loginButtonTopConstraint: NSLayoutConstraint!
    @IBOutlet weak var loginButtonCenterConstraint: NSLayoutConstraint!
    
    var screenSize = UIScreen.mainScreen().bounds
    
    var emailToValidate = String()
    var emailExistsInDatabase = Bool()
    var passwordToValidate = String()
    var passwordExistsInDatabase = Bool()
    var passwordMatchesEmailAccount = Bool()
    var passwordVerified = Bool()
    
    let userEmail = UserEmail()
    let userPassword = UserPassword()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        emailTextField.delegate = self
        passwordTextField.delegate = self
        
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
            emailToValidate = emailTextField.text!
            validateEmail(emailToValidate)
            
            if (emailExistsInDatabase == true) {
                passwordTextField.userInteractionEnabled = true
                passwordTextField.becomeFirstResponder()
            } else {
                let alertController = UIAlertController(title: "We don't recognize that email.", message:  "\n We can't find an account with that email. Please try again.", preferredStyle: .Alert)
                alertController.view.tintColor = UIColor(red: 0/255, green: 51/255, blue: 0/255, alpha: 1.0)
                let doneAction = UIAlertAction(title: "OK", style: .Cancel) { (action) in }
                alertController.addAction(doneAction)
                
                self.presentViewController(alertController, animated: true) {
                    alertController.view.tintColor = UIColor(red: 0/255, green: 51/255, blue: 0/255, alpha: 1.0)
                }
            }
        case 2:
            passwordToValidate = passwordTextField.text!
            validatePassword(passwordToValidate)
            if (passwordVerified == true) {
                passwordTextField.resignFirstResponder()
                loginButtonInView()
            } else {
                self.passwordTextField.resignFirstResponder()
                let alertController = UIAlertController(title: "Trouble logging you in.", message:  "\n We can't find an account with the email and password combination that you entered. Please try again.", preferredStyle: .Alert)
                alertController.view.tintColor = UIColor(red: 0/255, green: 51/255, blue: 0/255, alpha: 1.0)
                let forgotPasswordAction = UIAlertAction(title: "Forgot your password?", style: .Default) { (action) in
                    self.performSegueWithIdentifier("toForgotPasswordSegue", sender: self)
                }
                alertController.addAction(forgotPasswordAction)
                let doneAction = UIAlertAction(title: "OK", style: .Cancel) { (action) in
                    self.passwordTextField.becomeFirstResponder()
                }
                alertController.addAction(doneAction)
                
                self.presentViewController(alertController, animated: true) {
                    alertController.view.tintColor = UIColor(red: 0/255, green: 51/255, blue: 0/255, alpha: 1.0)
                }
            }
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
    
    func validateEmail(emailToValidate: String) -> Bool {
        // TO DO: Search DB for input email.
        print("TO DO: Search DB for input email.")
        emailExistsInDatabase = true
        return emailExistsInDatabase
    }
    
    func validatePassword(passwordToValidate: String) -> Bool {
        // TO DO: Search DB for input password. Ensure password matches email.
        print("TO DO: Search DB for input password. Ensure password matches email.")
        passwordExistsInDatabase = true
        passwordMatchesEmailAccount = true
        
        if (passwordExistsInDatabase == true && passwordMatchesEmailAccount == true) {
            passwordVerified = true
            return passwordVerified
        } else {
            passwordVerified = false
            return passwordVerified
        }
    }
}
