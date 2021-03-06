//
//  JSONCountryDataSource.h
//  TableViewDemo
//
//  Created by Pavlo Aksonov on 18.08.15.
//  Copyright (c) 2015 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RCTTableView.h"

@interface JSONDataSource : NSObject<RCTTableViewDatasource>

-(id)initWithDictionary:(NSDictionary *)params;
-(id)initWithFilename:(NSString *)file filter:(NSString *)filter args:(NSArray *)args;
@property (nonatomic, strong) NSArray *sections;
@end
