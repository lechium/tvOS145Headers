/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssertionServices/BKSAssertion.h>

@class RBSAssertion;

@interface BKSProcessAssertion : BKSAssertion {

	unsigned _reason;
	unsigned _flags;
	RBSAssertion* _mediaPlaybackHackAssertion;

}

@property (assign,nonatomic) unsigned flags; 
@property (nonatomic,readonly) unsigned reason;              //@synthesize reason=_reason - In the implementation block
+(id)NameForReason:(unsigned)arg1 ;
-(void)dealloc;
-(unsigned)flags;
-(void)invalidate;
-(unsigned)reason;
-(id)initWithPID:(int)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(BOOL)acquire;
-(void)assertion:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(id)initWithPID:(int)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 ;
-(unsigned long long)_legacyFlagsForFlags:(unsigned)arg1 ;
-(unsigned long long)_legacyReasonForReason:(unsigned)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 pid:(int)arg2 flags:(unsigned)arg3 reason:(unsigned)arg4 name:(id)arg5 withHandler:(/*^block*/id)arg6 acquire:(BOOL)arg7 ;
-(id)initWithBundleIdentifier:(id)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 withHandler:(/*^block*/id)arg5 acquire:(BOOL)arg6 ;
-(id)initWithPID:(int)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 withHandler:(/*^block*/id)arg5 acquire:(BOOL)arg6 ;
-(id)initWithBundleIdentifier:(id)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(id)initWithBundleIdentifier:(id)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 ;
-(void)setFlags:(unsigned)arg1 ;
@end

