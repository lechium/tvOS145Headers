/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, FBSScene, FBSSceneSpecification, NSSet, NSString, UNNotificationResponse, UIApplicationShortcutItem, CKShareMetadata;

@interface UISceneConnectionOptions : NSObject {

	NSDictionary* _launchOptionsDictionary;
	FBSScene* _fbsScene;
	FBSSceneSpecification* _specification;

}

@property (nonatomic,readonly) NSDictionary * _launchOptionsDictionary;                    //@synthesize launchOptionsDictionary=_launchOptionsDictionary - In the implementation block
@property (nonatomic,__weak,readonly) FBSScene * _fbsScene;                                //@synthesize fbsScene=_fbsScene - In the implementation block
@property (nonatomic,__weak,readonly) FBSSceneSpecification * _specification;              //@synthesize specification=_specification - In the implementation block
@property (nonatomic,copy,readonly) NSSet * URLContexts; 
@property (nonatomic,readonly) NSString * sourceApplication; 
@property (nonatomic,readonly) NSString * handoffUserActivityType; 
@property (nonatomic,copy,readonly) NSSet * userActivities; 
@property (nonatomic,readonly) UNNotificationResponse * notificationResponse; 
@property (nonatomic,readonly) UIApplicationShortcutItem * shortcutItem; 
@property (nonatomic,readonly) CKShareMetadata * cloudKitShareMetadata; 
-(id)description;
-(FBSSceneSpecification *)_specification;
-(NSString *)sourceApplication;
-(NSSet *)userActivities;
-(NSSet *)URLContexts;
-(FBSScene *)_fbsScene;
-(id)_initWithConnectionOptionsContext:(id)arg1 fbsScene:(id)arg2 specification:(id)arg3 ;
-(NSDictionary *)_launchOptionsDictionary;
-(NSString *)handoffUserActivityType;
-(UNNotificationResponse *)notificationResponse;
-(UIApplicationShortcutItem *)shortcutItem;
-(CKShareMetadata *)cloudKitShareMetadata;
@end

