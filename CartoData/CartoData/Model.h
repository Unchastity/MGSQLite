//
//  Model.h
//  MGSQLite
//
//  Created by Unchastity on 11/17/16.
//  Copyright © 2016 Unchastity. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Model : NSObject
/**
 公司名称
 */
@property(nonatomic, copy)      NSString*   compName;       //String	达远物流有限公司

/**
 发出频次
 */
@property(nonatomic, copy)      NSString*   lineFreq;       //String	1天/2次

/**
 始发地
 */
@property(nonatomic, copy)      NSString*   fProv;          //String	福建省
@property(nonatomic, copy)      NSString*   fCity;          //String	宁德市
@property(nonatomic, copy)      NSString*   fCounty;        //String	蕉城区

/**
 目的地
 */
@property(nonatomic, copy)      NSString*   tProv;          //String	北京市
@property(nonatomic, copy)      NSString*   tCity;          //String	北京市
@property(nonatomic, copy)      NSString*   tCounty;        //String	平谷区


/**
 到达地信息
 */
@property(nonatomic, copy)      NSString*   tAddr;          //String	北京市
@property(nonatomic, copy)      NSString*   tBranch;        //String	北京
@property(nonatomic, copy)      NSString*   fLinkMan;       //String	高美君
@property(nonatomic, copy)      NSString*   fLinkTel;       //String	18610045867
@property(nonatomic, assign)    CGFloat     fCoordX;        //Number	119.551115
@property(nonatomic, assign)    CGFloat     fCoordY;        //Number	26.633464


/**
 专线ID
 */
@property(nonatomic, copy)      NSString*   splineId;       //String	7E5C099E61374DB2B9106E085304A762
@property(nonatomic, copy)      NSString*   userId;         //String	C9B664C634E54F1FA88CFB69D2252669

/**
 线路名称
 */
@property(nonatomic, copy)      NSString*   spLineName;     //String

/**
 出发地信息
 */
@property(nonatomic, copy)      NSString*   fAddr;          //String	宁德市
@property(nonatomic, copy)      NSString*   fBranch;        //String	宁德
@property(nonatomic, copy)      NSString*   tLinkMan;       //String	高雪冬
@property(nonatomic, copy)      NSString*   tLinkTel;       //String	18610045237
@property(nonatomic, assign)    CGFloat     tCoordX;        //Number	116.474636
@property(nonatomic, assign)    CGFloat     tCoordY;        //Number	39.915523

/**
 重货价格
 */
@property(nonatomic, copy)      NSString*   hcgPrice;       //String	23

/**
 轻货价格
 */
@property(nonatomic, copy)      NSString*   lcgPrice;       //String	26

/**
 线路时效
 */
@property(nonatomic, copy)      NSString*   timeLine;       //String	72


/**
 专线类型
 0: 不限
 1: 零担
 2: 整车
 */
@property(nonatomic, assign)    NSInteger   slType;         //Integer	1


/**
 vip 类型
 1: 否
 2: 是
 */
@property(nonatomic, assign)    int         uLevel;         //Integer	2

-(instancetype)initWithDict:(NSDictionary *)dict;
+(instancetype)spLineModelWithDict:(NSDictionary *)dict;

-(void)setValue:(id)value forUndefinedKey:(NSString *)key;


@end
