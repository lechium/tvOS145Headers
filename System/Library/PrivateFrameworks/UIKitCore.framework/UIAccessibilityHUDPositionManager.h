/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMapTable;

@interface UIAccessibilityHUDPositionManager : NSObject {

	NSMapTable* _managedHUDs;
	CGRect _keyboardAvoidanceArea;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)keyboardFrameDidChange:(id)arg1 ;
-(void)adjustViewPropertiesForHUD:(id)arg1 withReferenceView:(id)arg2 keyboardFrame:(CGRect)arg3 ;
-(void)updateFramesForManagedHUDsUsingKeyboardFrame:(CGRect)arg1 ;
-(void)adjustViewPropertiesForHUD:(id)arg1 withReferenceView:(id)arg2 ;
-(void)beginManagingPositionOfHUD:(id)arg1 withReferenceView:(id)arg2 ;
-(void)stopManagingPositionOfHUD:(id)arg1 ;
@end

