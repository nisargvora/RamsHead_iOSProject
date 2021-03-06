//
//  LoginViewController.h
//  RHDemo
//
//  Created by Nisarg Vora on 9/1/15.
//  Copyright (c) 2015 Nisarg Vora. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface LoginViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *nameField;
@property (weak, nonatomic) IBOutlet UIButton *loginButton;
@property (weak, nonatomic) IBOutlet UIButton *signupButton;
@property (weak, nonatomic) IBOutlet UITextField *passField;

@end
