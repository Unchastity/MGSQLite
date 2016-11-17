//
//  MGDBManager.h
//  MGSQLite
//
//  Created by Unchastity on 11/17/16.
//  Copyright © 2016 Unchastity. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <sqlite3.h>

@interface MGDBManager : NSObject

@property(nonatomic) sqlite3 *dataBase;

+(instancetype)shareManager;


/**
 打开数据库
 数据库存在时直接打开，数据库不存在时创建并打开

 @param db 数据库名称
 */
-(void)openDataBase:(NSString *)db;


/**
 执行无返回值的sql语句
 如插入，修改，删除
 @param sql sql语句
 */
-(void)executeNoneQuery:(NSString *)sql;


/**
 执行有返回值的sql语句

 @param sql sql语句
 @return 查询结果数组
 */
-(NSArray *)executeQuery:(NSString *)sql;




@end
