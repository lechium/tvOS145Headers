/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class NSArray;

@interface HMDBackingStoreLogUpdateOperation : HMDBackingStoreOperation {

	NSArray* _values;
	long long _maskValue;
	long long _setValue;

}

@property (nonatomic,retain) NSArray * values;                 //@synthesize values=_values - In the implementation block
@property (assign,nonatomic) long long maskValue;              //@synthesize maskValue=_maskValue - In the implementation block
@property (assign,nonatomic) long long setValue;               //@synthesize setValue=_setValue - In the implementation block
-(NSArray *)values;
-(void)setValues:(NSArray *)arg1 ;
-(void)setSetValue:(long long)arg1 ;
-(long long)setValue;
-(void)setMaskValue:(long long)arg1 ;
-(long long)maskValue;
-(id)initWithRowIDs:(id)arg1 successfullyPushedTo:(unsigned long long)arg2 ;
-(id)mainReturningError;
-(id)initWithRowIDs:(id)arg1 mask:(long long)arg2 set:(long long)arg3 ;
-(id)initWithRowIDs:(id)arg1 failedPushedTo:(unsigned long long)arg2 ;
@end

