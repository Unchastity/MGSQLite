//
//  ViewController.m
//  MGSQLite
//
//  Created by Unchastity on 11/17/16.
//  Copyright © 2016 Unchastity. All rights reserved.
//

#import "ViewController.h"
#import "MGDBManager.h"
#import "MGDataBaseCreator.h"
#import "MGSpecialLineModel.h"
#import "MGDBOperator.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    
    [MGDataBaseCreator initDataBase];
    
    [self addSplineData];
}

-(void)addSplineData {
    
    NSString *spLinePath = [[NSBundle mainBundle] pathForResource:@"spLine.txt" ofType:nil];
    NSString *spLineStr = [NSString stringWithContentsOfFile:spLinePath encoding:NSUTF8StringEncoding error:nil];
    NSData   *jsonData = [spLineStr dataUsingEncoding:NSUTF8StringEncoding];
    NSDictionary *spLineDict = [NSJSONSerialization JSONObjectWithData:jsonData options:0 error:nil];
    NSArray *spLineArr = spLineDict[@"rows"];
    for (NSDictionary *dict in spLineArr) {
        
        MGSpecialLineModel *spLineModel = [MGSpecialLineModel spLineModelWithDict:dict];
        
        [[MGDBOperator shareDBHandle] addSpecialLine:spLineModel];
    }
}

@end
