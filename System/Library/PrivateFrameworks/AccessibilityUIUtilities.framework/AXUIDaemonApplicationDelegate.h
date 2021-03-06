/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, FBSOrientationObserver, NSString;

@interface AXUIDaemonApplicationDelegate : NSObject <UIApplicationDelegate> {

	FBSOrientationObserver* _orientationObserver;
	UIWindow* window;

}

@property (nonatomic,retain) UIWindow * window; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isFeatureEnabled;
+(id)featureEnabledStatusDidChangeNotification;
+(id)loggingFacility;
+(id)debugFeatureName;
-(id)init;
-(void)dealloc;
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)willTerminate;
-(void)_exitIfNotEnabled;
-(void)_setKeepAlive:(BOOL)arg1 ;
-(void)_enabledPreferenceDidChange:(id)arg1 ;
-(void)didFinishLaunching;
-(void)_didUpdateToOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didUpdateOrientation;
-(void)_systemAppDidBecomeReady;
@end

