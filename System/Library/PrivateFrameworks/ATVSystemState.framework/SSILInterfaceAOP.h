/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSystemState.framework/ATVSystemState
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSystemState/ATVSystemState-Structs.h>
#import <ATVSystemState/SSILInterface.h>

@interface SSILInterfaceAOP : SSILInterface {

	IOHIDDeviceRef _device;

}
-(id)init;
-(void)dealloc;
-(BOOL)setState:(unsigned long long)arg1 error:(id*)arg2 ;
-(IOHIDDeviceRef)_getDevice;
-(id)_indicatorLightStateToAOPHIDReport:(unsigned long long)arg1 ;
@end
