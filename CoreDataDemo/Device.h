//
//  Device.h
//  CoreDataDemo
//
//  Created by MEGHA GULATI on 9/25/13.
//  Copyright (c) 2013 MEGHA GULATI. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Person;

@interface Device : NSManagedObject

@property (nonatomic, retain) NSString * deviceType;
@property (nonatomic, retain) Person *owner;

@end
