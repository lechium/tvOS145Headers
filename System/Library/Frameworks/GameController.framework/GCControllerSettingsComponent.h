/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class GCControllerSettings;


@protocol GCControllerSettingsComponent <GCControllerComponent>
@property (nonatomic,copy) id changedHandler; 
@property (nonatomic,readonly) GCControllerSettings * settingsForBundleID; 
@property (nonatomic,readonly) GCControllerSettings * settingsDefault; 
@required
-(id)changedHandler;
-(void)setChangedHandler:(/*^block*/id)arg1;
-(GCControllerSettings *)settingsForBundleID;
-(GCControllerSettings *)settingsDefault;

@end

