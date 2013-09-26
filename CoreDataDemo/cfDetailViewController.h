//
//  cfDetailViewController.h
//  CoreDataDemo
//
//  Created by MEGHA GULATI on 9/25/13.
//  Copyright (c) 2013 MEGHA GULATI. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Person.h"

@interface cfDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) Person * detailItem;

@property (strong, nonatomic) IBOutlet UILabel *userName;
@property (strong, nonatomic) IBOutlet UILabel *age;
@property (strong, nonatomic) IBOutlet UILabel *timeStamp;
@property (strong, nonatomic) IBOutlet UILabel *devices;

@end
