/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVFigRoutingContextOutputDeviceTranslator.h>

@class NSString;

@interface AVFigRouteDescriptorFigRoutingContextOutputDeviceTranslator : NSObject <AVFigRoutingContextOutputDeviceTranslator> {

	BOOL _useRouteConfigUpdatedNotification;
	OpaqueAPSyncControllerRef _syncController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedOutputDeviceTranslator;
-(id)init;
-(void)dealloc;
-(id)outputDeviceFromRoutingContext:(OpaqueFigRoutingContextRef)arg1 ;
-(void)setOutputDevice:(id)arg1 withOptions:(CFDictionaryRef)arg2 onRoutingContext:(OpaqueFigRoutingContextRef)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)outputDevicesFromRoutingContext:(OpaqueFigRoutingContextRef)arg1 ;
-(void)setOutputDevices:(id)arg1 withOptions:(CFDictionaryRef)arg2 onRoutingContext:(OpaqueFigRoutingContextRef)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addOutputDevice:(id)arg1 withOptions:(CFDictionaryRef)arg2 toRoutingContext:(OpaqueFigRoutingContextRef)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removeOutputDevice:(id)arg1 withOptions:(const CFDictionaryRef)arg2 fromRoutingContext:(OpaqueFigRoutingContextRef)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)predictedOutputDeviceFromRoutingContext:(OpaqueFigRoutingContextRef)arg1 ;
-(id)initForUsingRouteConfigUpdatedNotification:(BOOL)arg1 syncController:(OpaqueAPSyncControllerRef)arg2 ;
@end

