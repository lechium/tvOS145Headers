/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@interface HMDBackingStoreLogChangesExistFetchOperation : HMDBackingStoreOperation {

	/*^block*/id _fetchBlock;
	long long _maskValue;
	long long _compareValue;

}

@property (nonatomic,copy) id fetchBlock;                         //@synthesize fetchBlock=_fetchBlock - In the implementation block
@property (assign,nonatomic) long long maskValue;                 //@synthesize maskValue=_maskValue - In the implementation block
@property (assign,nonatomic) long long compareValue;              //@synthesize compareValue=_compareValue - In the implementation block
-(void)setMaskValue:(long long)arg1 ;
-(long long)maskValue;
-(id)fetchBlock;
-(id)initWithNeedsPushTo:(unsigned long long)arg1 result:(/*^block*/id)arg2 ;
-(id)mainReturningError;
-(long long)compareValue;
-(void)setFetchBlock:(id)arg1 ;
-(void)setCompareValue:(long long)arg1 ;
@end

