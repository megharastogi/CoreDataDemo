//
//  Person.h
//  CoreDataDemo
//
//  Created by MEGHA GULATI on 9/25/13.
//  Copyright (c) 2013 MEGHA GULATI. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Person : NSManagedObject

@property (nonatomic, retain) NSDate * timeStamp;
@property (nonatomic, retain) NSString * userName;
@property (nonatomic, retain) NSNumber * age;
@property (nonatomic, retain) NSSet *devices;
@end

@interface Person (CoreDataGeneratedAccessors)

- (void)addDevicesObject:(NSManagedObject *)value;
- (void)removeDevicesObject:(NSManagedObject *)value;
- (void)addDevices:(NSSet *)values;
- (void)removeDevices:(NSSet *)values;

@end
