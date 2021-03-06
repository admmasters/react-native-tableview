//
//  RCTCell.h
//  RCTTableView
//
//  Created by Pavlo Aksonov on 24.08.15.
//  Copyright (c) 2015 Pavlo Aksonov. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RCTTableViewCell.h"

@class RCTTableViewCell;

@interface RCTCellView : UIView

@property (nonatomic) NSInteger row;
@property (nonatomic) NSInteger section;
@property (nonatomic) float componentHeight;
@property (nonatomic) float componentWidth;
@property (nonatomic, weak) UITableView *tableView;
@property (nonatomic, strong) RCTTableViewCell *tableViewCell;

@end
