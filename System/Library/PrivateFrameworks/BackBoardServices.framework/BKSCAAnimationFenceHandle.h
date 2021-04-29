/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSAnimationFenceHandle.h>

@class CAFenceHandle;

@interface BKSCAAnimationFenceHandle : BKSAnimationFenceHandle {

	CAFenceHandle* _caFence;

}
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(BOOL)isUsable;
-(unsigned long long)fenceName;
-(unsigned)CAPort;
-(id)CAFenceHandle;
-(id)trigger;
-(BOOL)shouldIgnoreTrigger;
-(id)_initWithCAFenceHandle:(id)arg1 ;
@end
