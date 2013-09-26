//
//  cfMasterViewController.h
//  CoreDataDemo
//
//  Created by MEGHA GULATI on 9/25/13.
//  Copyright (c) 2013 MEGHA GULATI. All rights reserved.
//

#import <UIKit/UIKit.h>

@class cfDetailViewController;

#import <CoreData/CoreData.h>

@interface cfMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) cfDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (nonatomic) NSMutableArray *peopleList;
@end
