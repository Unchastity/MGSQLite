//
//  MGDBOperator.h
//  MGSQLite
//
//  Created by Unchastity on 11/17/16.
//  Copyright © 2016 Unchastity. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MGSpecialLineModel;
@interface MGDBOperator : NSObject

+(instancetype)shareDBHandle;

-(void)addSpecialLine:(MGSpecialLineModel *)splineModel;

@end
