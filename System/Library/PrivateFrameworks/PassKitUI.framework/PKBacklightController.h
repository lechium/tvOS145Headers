/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BrightnessSystemClient, NSHashTable;

@interface PKBacklightController : NSObject {

	BrightnessSystemClient* _brightnessClient;
	BOOL _foregroundActive;
	NSHashTable* _requesters;
	NSHashTable* _allowers;
	BOOL _isBacklightRamped;

}
+(id)sharedInstance;
-(id)init;
-(void)beginAllowingBacklightRamping:(id)arg1 ;
-(void)endAllowingBacklightRamping:(id)arg1 ;
-(void)endRequestingBacklightRamping:(id)arg1 ;
-(void)beginRequestingBacklightRamping:(id)arg1 ;
-(void)_changeBacklightMinimumEnabledIfNecessary;
-(void)_updateBacklightNits:(float)arg1 period:(double)arg2 ;
@end

