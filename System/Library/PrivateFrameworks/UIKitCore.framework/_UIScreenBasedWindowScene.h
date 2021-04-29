/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWindowScene.h>

@protocol NSCopying;
@class UIScreen, UIMutableApplicationSceneSettings;

@interface _UIScreenBasedWindowScene : UIWindowScene {

	UIScreen* _screen;
	UIMutableApplicationSceneSettings* _synthesizedSettings;
	BOOL _invalidationHandlerRegistered;
	id<NSCopying> _lookupKey;

}
+(id)unassociationCacheAccessQueue;
+(id)unassociationCache;
+(BOOL)shouldAllowComponents;
+(BOOL)alwaysKeepContexts;
+(BOOL)autoinvalidates;
+(id)_unassociatedWindowSceneForScreen:(id)arg1 create:(BOOL)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(id)screen;
-(CGRect)_referenceBounds;
-(CGRect)_referenceBoundsForOrientation:(long long)arg1 ;
-(BOOL)_shouldAllowFencing;
-(void)_openURL:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_synthesizedSettings;
-(id)_displayInfoProvider;
-(void)_attachWindow:(id)arg1 ;
-(void)_detachWindow:(id)arg1 ;
-(id)initWithScreen:(id)arg1 session:(id)arg2 lookupKey:(id)arg3 ;
-(void)_screenDisconnected:(id)arg1 ;
-(void)_setKeepContextAssociationInBackground:(BOOL)arg1 ;
-(void)_updateClientSettingsToInterfaceOrientation:(long long)arg1 withAnimationDuration:(double)arg2 ;
@end
