//
//  MGSupplyOfCarsModel.m
//  CargoNetcom
//
//  Created by  on 11/14/16.
//  Copyright © 2016 . All rights reserved.
//

#import "MGSupplyOfCarsModel.h"

@implementation MGSupplyOfCarsModel

-(instancetype)initWithDict:(NSDictionary *)dict {
    
    self = [super init];
    if (self) {
        
        [self setValuesForKeysWithDictionary:dict];
    }
    return self;
}

+(instancetype)supplyOfCarsModelWithDict:(NSDictionary *)dict {
    
    return [[self alloc] initWithDict:dict];
}

-(void)setValue:(id)value forUndefinedKey:(NSString *)key {
    
    NSLog(@"MGSupplyOfCarsModel: miss key %@",key);
}
@end
