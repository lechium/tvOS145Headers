/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVFlashlightInternal;

@interface AVFlashlight : NSObject {

	AVFlashlightInternal* _internal;

}

@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@property (getter=isOverheated,nonatomic,readonly) BOOL overheated; 
@property (nonatomic,readonly) float flashlightLevel; 
+(void)initialize;
+(BOOL)hasFlashlight;
-(id)init;
-(void)dealloc;
-(BOOL)isAvailable;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(float)flashlightLevel;
-(void)_setupFlashlight;
-(void)_teardownFlashlight;
-(BOOL)isOverheated;
-(BOOL)turnPowerOnWithError:(id*)arg1 ;
-(void)turnPowerOff;
-(BOOL)setFlashlightLevel:(float)arg1 withError:(id*)arg2 ;
-(void)_reconnectToServer;
@end

