//
//  FailedBankInfo.h
//  FailedBankCD
//
//  Created by Mac User on 02/12/15.
//  Copyright (c) 2015 Rajeev Lochan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class FailedBankDetails;

@interface FailedBankInfo : NSManagedObject

@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * state;
@property (nonatomic, retain) FailedBankDetails *details;

@end
