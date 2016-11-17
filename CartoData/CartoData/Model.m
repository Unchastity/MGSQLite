//
//  Model.m
//  MGSQLite
//
//  Created by Unchastity on 11/17/16.
//  Copyright © 2016 Unchastity. All rights reserved.
//

#import "Model.h"

@implementation Model

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
