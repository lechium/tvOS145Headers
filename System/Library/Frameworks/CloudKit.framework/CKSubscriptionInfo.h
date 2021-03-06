/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CKSubscription, CKDatabase, CKContainer;

@interface CKSubscriptionInfo : NSObject {

	CKSubscription* _subscription;
	CKDatabase* _database;
	CKContainer* _container;
	/*^block*/id _handler;

}

@property (nonatomic,retain) CKSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
@property (nonatomic,retain) CKDatabase * database;                      //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) CKContainer * container;                    //@synthesize container=_container - In the implementation block
@property (nonatomic,copy) id handler;                                   //@synthesize handler=_handler - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CKContainer *)container;
-(void)setHandler:(id)arg1 ;
-(CKDatabase *)database;
-(void)setDatabase:(CKDatabase *)arg1 ;
-(id)handler;
-(void)setContainer:(CKContainer *)arg1 ;
-(void)setSubscription:(CKSubscription *)arg1 ;
-(CKSubscription *)subscription;
@end

