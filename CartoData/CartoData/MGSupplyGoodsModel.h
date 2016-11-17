//
//  MGSupplyGoodsModel.h
//  CargoNetcom
//
//  Created by  on 11/15/16.
//  Copyright © 2016 . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MGSupplyGoodsModel : NSObject

@property(nonatomic, copy)      NSString*   cgName;         //	String	海产品
@property(nonatomic, assign)    CGFloat     cgTransCost;    //	Number	10000
@property(nonatomic, assign)    CGFloat     cgCarLength;    //	Number	13
@property(nonatomic, assign)    CGFloat     cgWeight;       //	Number	40
@property(nonatomic, copy)      NSString*   cgLinkman;      //	String	郭女士
@property(nonatomic, copy)      NSString*   cgPubTime;      //	String	2016-11-15 16:15:26.0
@property(nonatomic, copy)      NSString*   cgFprovince;    //	String	上海
@property(nonatomic, copy)      NSString*   cgFcity;        //	String	上海
@property(nonatomic, copy)      NSString*   cgFcounty;      //	String	奉贤区
@property(nonatomic, copy)      NSString*   cgTprovince;    //	String	福建
@property(nonatomic, copy)      NSString*   cgTcity;        //	String	宁德市
@property(nonatomic, copy)      NSString*   cgTcounty;      //	String	古田县
@property(nonatomic, copy)      NSString*   cgPhone;        //	String	15910682630

@property(nonatomic, copy)      NSString*   cgId;           //	String	C969BFF783A84606BA64AD930147E42C
@property(nonatomic, assign)    NSNumber*   cgType;         //	Null	null
@property(nonatomic, assign)    CGFloat     cgVolume;       //	Number	35
@property(nonatomic, assign)    CGFloat     cgLen;          //	Number	0
@property(nonatomic, assign)    CGFloat     cgWidth;        //	Number	0
@property(nonatomic, assign)    CGFloat     cgHeight;       //	Number	0
@property(nonatomic, copy)      NSString*   cgUnit;         //	Null//	null
@property(nonatomic, copy)    NSString*     cgTransMod;     //	Null	null
@property(nonatomic, assign)    NSNumber*   cgCarType;      //	Null	null
@property(nonatomic, copy)      NSString*   cgMatters;      //	Null	null
@property(nonatomic, copy)      NSString*   cgComment;      //	String
@property(nonatomic, copy)      NSString*   cgUploadTime;   //	Null	null
@property(nonatomic, copy)      NSString*   cgIspublish;    //	Null	null
@property(nonatomic, copy)      NSString*   cgIsdeal;       //	String	1
@property(nonatomic, assign)    NSNumber*   cgIspay;        //	Null	null
@property(nonatomic, copy)      NSString*   consignee;      //	String
@property(nonatomic, copy)      NSString*   consiPhone;     //	String	15910547959
@property(nonatomic, copy)      NSString*   consiAddr;      //	String
@property(nonatomic, assign)    int         transitTime;    //	Integer	0
@property(nonatomic, copy)      NSString*   delFlag;        //	String	1
@property(nonatomic, copy)      NSString*   cgUserTel;      //	String
@property(nonatomic, copy)      NSString*   cgUserId;       //	String	2AF36972E89C488B90EC2197167C7E07
@property(nonatomic, copy)      NSString*   cgUserName;     //	String
@property(nonatomic, copy)      NSString*   cgDate;         //	String	2016-11-15 16:15:26.0
@property(nonatomic, copy)      NSString*   cgEndDate;      //	Null	null
@property(nonatomic, copy)      NSString*   cgPubuserId;    //	Null	null
@property(nonatomic, copy)      NSString*   cgPubuserName;	//  Null	null
@property(nonatomic, copy)      NSString*   provAgId;       //  String
@property(nonatomic, copy)      NSString*   cityAgId;       //  String
@property(nonatomic, copy)      NSString*   countyAgId;     //	String
@property(nonatomic, copy)      NSString*   receiptFlag;    //	Integer	0
@property(nonatomic, copy)      NSString*   receiptAddr;    //	String
@property(nonatomic, copy)      NSString*   receiptMan;     //	String
@property(nonatomic, copy)      NSString*   receiptTel;     //	String
@property(nonatomic, assign)    NSNumber*   numberCase;     //	Number	0
@property(nonatomic, assign)    int         tradeMode;      //	Integer	1
@property(nonatomic, assign)    int         uLevel;         //	Integer	2
@property(nonatomic, copy)      NSString*   agentPhone;     //	Null	null
@property(nonatomic, copy)      NSString*   infoSrc;        //	Null	null
@property(nonatomic, assign)    int         paymentDays;    //	Integer	0
@property(nonatomic, copy)      NSString*   infoMobile;     //	Null	null
@property(nonatomic, assign)    int         isSendInfo;     //	Integer	1

@property(nonatomic, copy)      NSString*   cgCompany;

-(void)setValue:(id)value forUndefinedKey:(NSString *)key;

-(instancetype)initWithDict:(NSDictionary *)dict;
+(instancetype)goodsModelWithDict:(NSDictionary *)dict;

@end
