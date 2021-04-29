/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HMBModel.h>
#import <libobjc.A.dylib/HMDSettingConstraintModelProtocol.h>

@class NSNumber, NSString, NSData, NSUUID;

@interface HMDSettingConstraintModel : HMBModel <HMDSettingConstraintModelProtocol>

@property (nonatomic,copy) NSNumber * type; 
@property (nonatomic,copy) NSNumber * numberValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSData * dataValue; 
@property (nonatomic,readonly) NSUUID * hmbModelID; 
@property (nonatomic,readonly) NSUUID * hmbParentModelID; 
@property (nonatomic,readonly) NSString * nameForKeyPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hmbProperties;
-(id)copyWithNewParentModelID:(id)arg1 ;
-(NSString *)nameForKeyPath;
@end

