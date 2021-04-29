/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class NSUUID;

@interface HMDBackingStoreLogDropOperationsWithUUID : HMDBackingStoreOperation {

	NSUUID* _uuid;
	long long _maskValue;
	long long _compareValue;

}

@property (nonatomic,retain) NSUUID * uuid;                       //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) long long maskValue;                 //@synthesize maskValue=_maskValue - In the implementation block
@property (assign,nonatomic) long long compareValue;              //@synthesize compareValue=_compareValue - In the implementation block
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setMaskValue:(long long)arg1 ;
-(long long)maskValue;
-(id)mainReturningError;
-(long long)compareValue;
-(void)setCompareValue:(long long)arg1 ;
-(id)initWithUUID:(id)arg1 pushingTo:(unsigned long long)arg2 resultBlock:(/*^block*/id)arg3 ;
@end

