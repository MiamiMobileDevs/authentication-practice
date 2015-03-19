//
//  AppDelegate.h
//  MakeMoreStuff
//
//  Created by Graham Sutton on 3/19/15.
//  Copyright (c) 2015 Graham Sutton. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic, retain) IBOutlet UITextField *username;
@property (nonatomic, retain) IBOutlet UITextField *password;

- (IBAction) insertUser:(id)sender;

@end
