/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface WFStandaloneShortcutRepresentation : NSObject {

	NSString* _title;
	NSString* _associatedAppBundleIdentifier;
	NSString* _launchIdForCurrentPlatform;
	NSString* _activityBundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * associatedAppBundleIdentifier;              //@synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * launchIdForCurrentPlatform;                 //@synthesize launchIdForCurrentPlatform=_launchIdForCurrentPlatform - In the implementation block
@property (nonatomic,copy,readonly) NSString * activityBundleIdentifier;                   //@synthesize activityBundleIdentifier=_activityBundleIdentifier - In the implementation block
-(NSString *)title;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSString *)activityBundleIdentifier;
-(NSString *)associatedAppBundleIdentifier;
-(id)initWithINShortcut:(id)arg1 ;
-(id)initWithTitle:(id)arg1 associatedAppBundleIdentifier:(id)arg2 launchIdForCurrentPlatform:(id)arg3 activityBundleIdentifier:(id)arg4 ;
-(NSString *)launchIdForCurrentPlatform;
@end

