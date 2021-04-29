/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface SSVFamilyContentDeletionEvent : NSObject {

	NSArray* _deletedAccounts;

}

@property (nonatomic,readonly) NSArray * deletedAccounts;              //@synthesize deletedAccounts=_deletedAccounts - In the implementation block
+(id)notificationPayloadWithAccountPairs:(id)arg1 ;
+(void)postDistributedNotificationWithAccountPairs:(id)arg1 ;
-(id)initWithNotificationUserInfo:(id)arg1 ;
-(id)initWithXPCEventStreamEvent:(id)arg1 ;
-(NSArray *)deletedAccounts;
@end

