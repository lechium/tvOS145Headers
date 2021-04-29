/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSArray;

@interface HMDSettingOnChangeAttachedUpdatesResult : HMFObject {

	NSArray* _settingsToUpdate;
	NSArray* _modelsToUpdate;
	/*^block*/id _onCommitCompletion;

}

@property (readonly) NSArray * settingsToUpdate;              //@synthesize settingsToUpdate=_settingsToUpdate - In the implementation block
@property (readonly) NSArray * modelsToUpdate;                //@synthesize modelsToUpdate=_modelsToUpdate - In the implementation block
@property (readonly) id onCommitCompletion;                   //@synthesize onCommitCompletion=_onCommitCompletion - In the implementation block
-(id)initWithSettingsToUpdate:(id)arg1 models:(id)arg2 onCommitCompletion:(/*^block*/id)arg3 ;
-(NSArray *)settingsToUpdate;
-(NSArray *)modelsToUpdate;
-(id)onCommitCompletion;
@end

