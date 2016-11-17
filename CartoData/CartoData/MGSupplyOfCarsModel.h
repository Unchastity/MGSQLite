//
//  MGSupplyOfCarsModel.h
//  CargoNetcom
//
//  Created by  on 11/14/16.
//  Copyright © 2016 . All rights reserved.
//

//#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
//typedef enum {
//    MGSupplyOfCarsModelLocal = 1,
//    MGSupplyOfCarsModelBack = 2
//}MGSupplyOfCarsModelCarDirectionType;

@interface MGSupplyOfCarsModel : NSObject

@property(nonatomic, copy)   NSString *sourceId;
@property(nonatomic, copy)   NSString *carId;
@property(nonatomic, copy)   NSString *userId;

@property(nonatomic, copy)   NSString *userName;
/**
 车辆号牌
 */
@property(nonatomic, copy)   NSString *carPlate;

/**
 车辆所属类型
 */
@property(nonatomic, copy)   NSString *carType;

//sourceId	      String	0B9655F54A2D479B877080807E00F1D8
//carId           String	A1F03A3FCAA84F6F81412BB10D3E98EB
//userId          String	2AF36972E89C488B90EC2197167C7E07
//userName        String
//carPlate        String	闽J17919
//carType         String	厢式货车

/**
 int
 */
@property(nonatomic, assign) int carSrcType;

@property(nonatomic, copy)   NSString *carTime;
/**
 车辆信息发布时间
 */
@property(nonatomic, copy)   NSString *carPubDate;

/**
 double
 */
@property(nonatomic, assign) NSNumber *carOutDate;

/**
 路线起始地 省份
 */
@property(nonatomic, copy)   NSString *carFProvince;

/**
 路线起始地 市
 */
@property(nonatomic, copy)   NSString *carFCity;

/**
 路线起始地 区
 */
@property(nonatomic, copy)   NSString *carFCountry;
/**
 路线终点 省份
 */
@property(nonatomic, copy)   NSString *carTProvince;

/**
 路线终点 市
 */
@property(nonatomic, copy)   NSString *carTCity;

/**
 路线终点 区
 */
@property(nonatomic, copy)   NSString *carTCountry;

@property(nonatomic, copy)   NSString *carComment;

//carSrcType      Integer	1
//carTime         String	2016-11-15
//carPubDate  	  String	2016-11-15 16:14:11
//carOutDate	  Number	0
//carFProvince	  String	福建
//carFCity        String	宁德市
//carFCountry	  String	福鼎市
//carTProvince	  String	河南
//carTCity        String	焦作市
//carTCountry	  String	马村区


/**
 车辆拥有着ID
 */
@property(nonatomic, copy)   NSString *carUserId;

/**
 车辆拥有者
 */
@property(nonatomic, copy)   NSString *carUserName;

@property(nonatomic, copy)   NSString *carAngetName;

@property(nonatomic, copy)   NSString *carEndTime;
//carComment	  String
//carUserId       String	2AF36972E89C488B90EC2197167C7E07
//carUserName	  String	易送到物流
//carAngetName	  String
//carEndTime	  String	2016-11-15


@property(nonatomic, copy)   NSString *provAgId;

@property(nonatomic, copy)   NSString *cityAgId;


@property(nonatomic, copy)   NSString *countyAgId;

@property(nonatomic, copy)   NSString *carPhone;

@property(nonatomic, assign) int infoSrc;

@property(nonatomic, copy)   NSString *defaultPhone;

#warning 无法与json保持小数点一致
/**
 double 车头重量（吨）
 */
@property(nonatomic, assign) CGFloat carToucount;  //double

/**
 double 车辆长度
 */
@property(nonatomic, assign) CGFloat carLen; //double

/**
 double
 */
@property(nonatomic, assign) int uLevel;  //double

/**
 联系电话, 判断是否为有效联系电话
 */
@property(nonatomic, copy)   NSString *userPhone;


//provAgId        String
//cityAgId        String
//countyAgId	  String
//carPhone        String
//infoSrc         Integer	1
//defaultPhone	  String
//carToucount	  Number	30
//carLen	      Number	9.6
//uLevel	      Number	2
//userPhone	      String	15910682630

-(instancetype)initWithDict:(NSDictionary *)dict;
+(instancetype)supplyOfCarsModelWithDict:(NSDictionary *)dict;

-(void)setValue:(id)value forUndefinedKey:(NSString *)key;
@end
