//
//  MGDBOperator.m
//  MGSQLite
//
//  Created by Unchastity on 11/17/16.
//  Copyright © 2016 Unchastity. All rights reserved.
//

#import "MGDBOperator.h"
#import "MGSpecialLineModel.h"
#import "MGDBManager.h"

@implementation MGDBOperator

+(instancetype)shareDBHandle {
    
    static MGDBOperator *dbHandle = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        dbHandle = [[MGDBOperator alloc] init];
    });
    return dbHandle;
}

-(void)addSpecialLine:(MGSpecialLineModel *)splineModel {
    
    NSString *sql = [NSString stringWithFormat:@"INSERT INTO SpecialLine (splineId,userId, spLineName,compName,fProv,fCity,fCounty,tProv,tCity,tCounty,fBranch,tBranch,fAddr,tAddr,fCoordX,fCoordY,tCoordX,tCoordY,fLinkMan,fLinkTel,tLinkMan,tLinkTel,slType,hcgPrice, lcgPrice,lineFreq ,timeLine ,uLevel) VALUES('%@', '%@', '%@', '%@', '%@', '%@', '%@', '%@', '%@', '%@', '%@', '%@', '%@', '%@', '%f', '%f', '%f', '%f', '%@', '%@', '%@', '%@', '%ld', '%@', '%@', '%@', '%@', '%d')", splineModel.splineId, splineModel.userId,  splineModel.spLineName, splineModel.compName, splineModel.fProv, splineModel.fCity, splineModel.fCounty, splineModel.tProv, splineModel.tCity, splineModel.tCounty, splineModel.fBranch, splineModel.tBranch, splineModel.fAddr, splineModel.tAddr, splineModel.fCoordX, splineModel.fCoordY, splineModel.tCoordX, splineModel.tCoordY, splineModel.fLinkMan, splineModel.fLinkTel, splineModel.tLinkMan, splineModel.tLinkTel, (long)splineModel.slType, splineModel.hcgPrice,  splineModel.lcgPrice, splineModel.lineFreq , splineModel.timeLine , splineModel.uLevel];
    [[MGDBManager shareManager] executeNoneQuery:sql];
}

@end
