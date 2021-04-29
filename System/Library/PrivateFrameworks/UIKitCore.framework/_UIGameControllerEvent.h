/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIEvent.h>

@interface _UIGameControllerEvent : UIEvent {

	SCD_Struct_UI120 _previousState;
	unsigned long long _activeComponent;

}
-(long long)type;
-(void)_reset;
-(long long)subtype;
-(void)_maybeConvertAndSendAsPressesEvent;
-(void)_sendEventToResponder:(id)arg1 ;
-(BOOL)_processStandardButtons:(SCD_Struct_UI120*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_determineInputTypeAndProcess:(SCD_Struct_UI120*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_processDPad:(SCD_Struct_UI120*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_processLeftStick:(SCD_Struct_UI120*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_processRightStick:(SCD_Struct_UI120*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_processShoulder:(SCD_Struct_UI120*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(CGPoint)_leftStickPosition;
@end

