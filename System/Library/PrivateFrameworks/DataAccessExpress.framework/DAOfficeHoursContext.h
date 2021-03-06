/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface DAOfficeHoursContext : NSObject {

	NSString* _accountID;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _fetchCompletionBlock;
	/*^block*/id _setCompletionBlock;

}

@property (nonatomic,readonly) BOOL isFetch; 
@property (nonatomic,copy) NSString * accountID;                              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id fetchCompletionBlock;                           //@synthesize fetchCompletionBlock=_fetchCompletionBlock - In the implementation block
@property (nonatomic,copy) id setCompletionBlock;                             //@synthesize setCompletionBlock=_setCompletionBlock - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(id)fetchCompletionBlock;
-(id)setCompletionBlock;
-(void)finishFetchWithOfficeHours:(id)arg1 error:(id)arg2 ;
-(void)finishSetWithError:(id)arg1 ;
-(BOOL)isFetch;
-(void)abortWithError:(id)arg1 ;
-(void)setFetchCompletionBlock:(id)arg1 ;
-(void)setSetCompletionBlock:(id)arg1 ;
@end

