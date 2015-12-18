//
//  FBCDMasterViewController.h
//  FailedBankCD
//
//  Created by Mac User on 01/12/15.
//  Copyright (c) 2015 Rajeev Lochan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FBCDMasterViewController : UITableViewController

@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, strong) NSArray *failedBankInfos;
@end
