/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSystemState.framework/ATVSystemState
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <ATVSystemState/ATVSystemState-Structs.h>
@class NSObject;

@interface SSDisplay : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	IOAVControllerRef _ioavController;

}
-(id)init;
-(void)dealloc;
-(void)setState:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned)_waitForIOAVController;
-(void)_setStateIOAV:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_startIOAV;
-(id)_displayStateToBool:(unsigned long long)arg1 ;
-(int)_gpioDriveHDMI5VHigh:(BOOL)arg1 ;
-(BOOL)setPortEnabled:(BOOL)arg1 error:(id*)arg2 ;
@end

