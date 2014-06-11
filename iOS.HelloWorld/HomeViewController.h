//
//  HomeViewController.h
//  iOS.HelloWorld
//
//  Created by Jim Segal on 6/10/14.
//  Copyright (c) 2014 JimLaptop. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HomeViewController : UIViewController

-(void)sampleMethod;
- (IBAction)helloWorldAction:(id)sender;
- (IBAction)goodnightMoonAction:(id)sender;

@property (weak, nonatomic) IBOutlet UILabel *labelObject;

@end
