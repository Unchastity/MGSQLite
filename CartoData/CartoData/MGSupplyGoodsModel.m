//
//  MGSupplyGoodsModel.m
//  CargoNetcom
//
//  Created by  on 11/15/16.
//  Copyright © 2016 . All rights reserved.
//

#import "MGSupplyGoodsModel.h"

@implementation MGSupplyGoodsModel

-(instancetype)initWithDict:(NSDictionary *)dict {
    
    self = [super init];
    if (self) {
        
        [self setValuesForKeysWithDictionary:dict];
    }
    return self;
}

+(instancetype)goodsModelWithDict:(NSDictionary *)dict {
    
    return [[self alloc] initWithDict:dict];
}

-(void)setValue:(id)value forUndefinedKey:(NSString *)key {
    
    NSLog(@"MGSupplyGoodsModel: miss key %@",key);
}
@end
