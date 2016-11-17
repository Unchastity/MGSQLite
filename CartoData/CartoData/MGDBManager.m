//
//  MGDBManager.m
//  MGSQLite
//
//  Created by Unchastity on 11/17/16.
//  Copyright © 2016 Unchastity. All rights reserved.
//

#import "MGDBManager.h"

@implementation MGDBManager


+(instancetype)shareManager {
    
    static MGDBManager *dbmanager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        dbmanager = [[MGDBManager alloc] init];
    });
    return dbmanager;
}

-(instancetype)init {
    
    self = [super init];
    if (self) {
        [self openDataBase:@"cargoNetcom.db"];
    }
    return self;
}

-(void)openDataBase:(NSString *)db {
    
    //获取数据库保存路径
    NSString *dbPath = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
    //NSLog(@"dbPath: %@", dbPath);
    NSString *dbNamePath = [dbPath stringByAppendingString:db];
    NSLog(@"dbNamePath: %@", dbNamePath);
    //打开
    if (SQLITE_OK == sqlite3_open(dbNamePath.UTF8String, &_dataBase)) {
        
        NSLog(@"数据库打开成功");
    }else {
        NSLog(@"数据库打开失败");
    }
}

-(void)executeNoneQuery:(NSString *)sql {
    
    //数据库时基于c语言的
    char *error;
    if (SQLITE_OK != sqlite3_exec(_dataBase, sql.UTF8String, NULL, NULL, &error)) {
        
        NSLog(@"执行SQL语句发生错误，错误信息：%s", error);
    }
}

-(NSArray *)executeQuery:(NSString *)sql {
    //存放数据行
    NSMutableArray *rows = [NSMutableArray array];
    
    //检测
    sqlite3_stmt *stmt;
    if (SQLITE_OK == sqlite3_prepare_v2(_dataBase, sql.UTF8String, -1, &stmt, NULL)) {
        //单步执行
        while (SQLITE_ROW == sqlite3_step(stmt)) {
            int columnCount = sqlite3_column_count(stmt);
            NSMutableDictionary *rowDict = [NSMutableDictionary dictionary];
            for (int i =0; i < columnCount; ++i) {
                //列名
                const char *columnKey = sqlite3_column_name(stmt, i);
                const unsigned char *columnValue = sqlite3_column_text(stmt, i);
                rowDict[[NSString stringWithUTF8String:columnKey]] = [NSString stringWithUTF8String:(const char*)columnValue];
            }
            [rows addObject:rowDict];
        }
    }
    //释放句柄
    sqlite3_finalize(stmt);
    
    return rows;
}


@end
