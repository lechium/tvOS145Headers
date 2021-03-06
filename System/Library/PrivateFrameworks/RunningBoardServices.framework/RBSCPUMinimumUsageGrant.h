/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoardServices/RBSGrant.h>

@interface RBSCPUMinimumUsageGrant : RBSGrant {

	unsigned char _role;
	unsigned long long _percentage;
	double _duration;

}

@property (nonatomic,readonly) unsigned char role;                         //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) unsigned long long percentage;              //@synthesize percentage=_percentage - In the implementation block
@property (nonatomic,readonly) double duration;                            //@synthesize duration=_duration - In the implementation block
+(id)grantForRole:(unsigned char)arg1 withPercentage:(unsigned long long)arg2 duration:(double)arg3 ;
-(void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3 ;
-(BOOL)isValidForContext:(id)arg1 withError:(id*)arg2 ;
-(BOOL)conflictsWithAttribute:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)duration;
-(unsigned long long)percentage;
-(unsigned char)role;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
@end

