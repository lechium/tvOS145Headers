/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UISettings.h>

@class NSString, _UIScreenEdgePanRecognizerEdgeSettings, _UIScreenEdgePanRecognizerDwellSettings, _UIScreenEdgePanRecognizerCornerSettings;

@interface _UIScreenEdgePanRecognizerSettings : _UISettings {

	NSString* _multitaskingGestureMode;
	NSString* _navigationGestureMode;
	_UIScreenEdgePanRecognizerEdgeSettings* _edgeSettings;
	_UIScreenEdgePanRecognizerDwellSettings* _dwellSettings;
	_UIScreenEdgePanRecognizerCornerSettings* _cornerSettings;

}

@property (nonatomic,copy) NSString * multitaskingGestureMode;                                       //@synthesize multitaskingGestureMode=_multitaskingGestureMode - In the implementation block
@property (nonatomic,copy) NSString * navigationGestureMode;                                         //@synthesize navigationGestureMode=_navigationGestureMode - In the implementation block
@property (nonatomic,retain) _UIScreenEdgePanRecognizerEdgeSettings * edgeSettings;                  //@synthesize edgeSettings=_edgeSettings - In the implementation block
@property (nonatomic,retain) _UIScreenEdgePanRecognizerDwellSettings * dwellSettings;                //@synthesize dwellSettings=_dwellSettings - In the implementation block
@property (nonatomic,retain) _UIScreenEdgePanRecognizerCornerSettings * cornerSettings;              //@synthesize cornerSettings=_cornerSettings - In the implementation block
+(id)settingsControllerModule;
-(NSString *)multitaskingGestureMode;
-(void)setMultitaskingGestureMode:(NSString *)arg1 ;
-(NSString *)navigationGestureMode;
-(void)setNavigationGestureMode:(NSString *)arg1 ;
-(_UIScreenEdgePanRecognizerEdgeSettings *)edgeSettings;
-(void)setEdgeSettings:(_UIScreenEdgePanRecognizerEdgeSettings *)arg1 ;
-(_UIScreenEdgePanRecognizerDwellSettings *)dwellSettings;
-(void)setDwellSettings:(_UIScreenEdgePanRecognizerDwellSettings *)arg1 ;
-(_UIScreenEdgePanRecognizerCornerSettings *)cornerSettings;
-(void)setCornerSettings:(_UIScreenEdgePanRecognizerCornerSettings *)arg1 ;
@end

