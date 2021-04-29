/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol HMDSettingsControllerProtocol <HMFObject,AWDHMDSettingsControllerProtocol>
@property (readonly) NSArray * allObjectIdentifiers; 
@required
-(void)encodeWithCoder:(id)arg1;
-(void)configure;
-(void)migrateSettingsWithCompletion:(/*^block*/id)arg1;
-(id)modelsToMakeSettings;
-(void)loadWithModels:(id)arg1;
-(NSArray *)allObjectIdentifiers;

@end

