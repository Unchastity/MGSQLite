//
//  MGDataBaseCreator.m
//  MGSQLite
//
//  Created by Unchastity on 11/17/16.
//  Copyright © 2016 Unchastity. All rights reserved.
//

#import "MGDataBaseCreator.h"
#import "MGDBManager.h"

@implementation MGDataBaseCreator

+(void)initDataBase {
    
    static NSString *isCreatedDB = @"isCreatedDB";
    NSUserDefaults *userDefaults = [NSUserDefaults standardUserDefaults];
    if ([[userDefaults objectForKey:isCreatedDB] intValue] != 1) {
        
        [self createSpecialLineTable];
        [userDefaults setObject:@0 forKey:isCreatedDB];
    }
    
}

+(void)createCarSourceTable {
    
}

+(void)createGoodsSourceTable {
    
    
}

+(void)createSpecialLineTable {
    
    NSString *sql = @"CREATE TABLE SpecialLine (splineId text PRIMARY KEY, userId text, spLineName text, compName text,fProv text, fCity text, fCounty	text, tProv	text, tCity	text, tCounty text, fBranch	text, tBranch text, fAddr text, tAddr text, fCoordX	double, fCoordY	double, tCoordX	double, tCoordY	double, fLinkMan text, fLinkTel	text, tLinkMan text, tLinkTel text, slType integer, hcgPrice text, lcgPrice text, lineFreq text, timeLine text, uLevel integer)";
    [[MGDBManager shareManager] executeNoneQuery:sql];
}

@end
