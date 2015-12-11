//
//  FailedBankDetails.h
//  FailedBankCD
//
//  Created by Mac User on 02/12/15.
//  Copyright (c) 2015 Rajeev Lochan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class FailedBankInfo;

@interface FailedBankDetails : NSManagedObject

@property (nonatomic, retain) NSDate * closeDate;
@property (nonatomic, retain) NSDate * updateDate;
@property (nonatomic, retain) NSNumber * zip;
@property (nonatomic, retain) FailedBankInfo *info;

@end
