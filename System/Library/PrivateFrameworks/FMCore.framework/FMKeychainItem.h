/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDate, NSData;


@protocol FMKeychainItem <NSObject>
@property (nonatomic,readonly) NSString * password; 
@property (nonatomic,readonly) NSDate * lastModifyDate; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSData * rawData; 
@required
-(NSString *)password;
-(NSDate *)creationDate;
-(NSData *)rawData;
-(NSDate *)lastModifyDate;

@end

