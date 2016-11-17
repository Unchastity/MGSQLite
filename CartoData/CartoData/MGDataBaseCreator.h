//
//  MGDataBaseCreator.h
//  MGSQLite
//
//  Created by Unchastity on 11/17/16.
//  Copyright © 2016 Unchastity. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MGDataBaseCreator : NSObject

+(void)initDataBase;

+(void)createCarSourceTable;

+(void)createGoodsSourceTable;

+(void)createSpecialLineTable;

@end
