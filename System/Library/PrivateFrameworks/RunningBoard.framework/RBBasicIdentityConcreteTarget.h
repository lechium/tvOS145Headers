/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoard/RBConcreteTarget.h>

@class RBSProcessIdentity;

@interface RBBasicIdentityConcreteTarget : RBConcreteTarget {

	RBSProcessIdentity* _identity;

}
-(id)description;
-(id)identity;
-(BOOL)isSystem;
-(id)createRBSTarget;
-(id)_initWithIdentity:(id)arg1 ;
@end

