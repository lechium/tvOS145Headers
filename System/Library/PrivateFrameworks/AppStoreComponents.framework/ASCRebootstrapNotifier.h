/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ASCRebootstrapNotifier : NSObject {

	int _token;
	unsigned long long _rebootstrapCounterSnapshot;

}

@property (nonatomic,readonly) int token;                                                //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) unsigned long long rebootstrapCounterSnapshot;              //@synthesize rebootstrapCounterSnapshot=_rebootstrapCounterSnapshot - In the implementation block
+(id)sharedNotifier;
-(void)dealloc;
-(int)token;
-(id)_initSingleton;
-(void)postLocalNotification;
-(void)postLocalNotificationIfNeeded;
-(unsigned long long)rebootstrapCounterSnapshot;
-(void)setRebootstrapCounterSnapshot:(unsigned long long)arg1 ;
@end
