//
//  SimpleTableViewController.h
//  SimpleTable
//
//  Created by NMG on 8/19/11.
//  Copyright 2011 NMG Resources, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SimpleTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>{
	NSMutableArray *listOfItems;
}

@end

