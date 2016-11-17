//
//  MGSpecialLineModel.m
//  CargoNetcom
//
//  Created by  on 11/15/16.
//  Copyright © 2016 . All rights reserved.
//

#import "MGSpecialLineModel.h"

@implementation MGSpecialLineModel

-(instancetype)initWithDict:(NSDictionary *)dict {
    
    self = [super init];
    if (self) {
        
        [self setValuesForKeysWithDictionary:dict];
    }
    return self;
}

+(instancetype)spLineModelWithDict:(NSDictionary *)dict {
    
    return  [[self alloc] initWithDict:dict];
}

-(void)setValue:(id)value forUndefinedKey:(NSString *)key {
    
    NSLog(@"MGSpecialLineModel: miss key %@",key);
}


@end
