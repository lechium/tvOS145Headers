/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDictionary;


@protocol HMRemoteLoginMessageProtocol <NSObject,NSSecureCoding>
@property (nonatomic,copy,readonly) NSString * messageName; 
@property (nonatomic,copy,readonly) NSString * xpcMessageName; 
@property (nonatomic,readonly) NSDictionary * messagePayload; 
@required
+(NSString *)messageName;
+(id)objWithDict:(id)arg1;
+(id)objWithMessage:(id)arg1;
+(NSString *)xpcMessageName;
-(NSString *)messageName;
-(NSDictionary *)messagePayload;
-(NSString *)xpcMessageName;

@end

