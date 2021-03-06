//
//  Food.h
//  Virtual Fridge
//
//  Created by Matt Wysocki on 3/27/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Food : NSManagedObject

@property (nonatomic, retain) NSString * category;
@property (nonatomic, retain) NSString * comment;
@property (nonatomic, retain) NSDate * expiration_date;
@property (nonatomic, retain) NSNumber * expiration_offset;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSDate * purchase_date;
@property (nonatomic, retain) NSNumber * state;

@end
