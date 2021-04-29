/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface DNDSLifetimeMonitorResult : NSObject {

	NSArray* _activeUUIDs;
	NSArray* _expiredUUIDs;

}

@property (nonatomic,copy,readonly) NSArray * activeUUIDs;               //@synthesize activeUUIDs=_activeUUIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * expiredUUIDs;              //@synthesize expiredUUIDs=_expiredUUIDs - In the implementation block
-(id)initWithActiveUUIDs:(id)arg1 expiredUUIDs:(id)arg2 ;
-(NSArray *)activeUUIDs;
-(NSArray *)expiredUUIDs;
@end

