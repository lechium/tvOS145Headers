/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSAction.h>

@class UNNotification;

@interface UIWillPresentNotificationAction : BSAction {

	BOOL _isDeliverable;
	UNNotification* _notification;

}

@property (nonatomic,retain,readonly) UNNotification * notification;              //@synthesize notification=_notification - In the implementation block
@property (nonatomic,readonly) BOOL isDeliverable;                                //@synthesize isDeliverable=_isDeliverable - In the implementation block
@property (nonatomic,readonly) BOOL isLocal; 
@property (nonatomic,readonly) BOOL isRemote; 
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BOOL)isLocal;
-(UNNotification *)notification;
-(id)_trigger;
-(BOOL)isRemote;
-(id)initWithNotification:(id)arg1 deliverable:(BOOL)arg2 timeout:(double)arg3 withHandler:(/*^block*/id)arg4 ;
-(long long)UIActionType;
-(id)initWithNotification:(id)arg1 timeout:(double)arg2 withHandler:(/*^block*/id)arg3 ;
-(BOOL)isDeliverable;
@end

