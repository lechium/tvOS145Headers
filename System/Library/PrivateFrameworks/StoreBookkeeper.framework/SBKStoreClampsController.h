/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSData;

@interface SBKStoreClampsController : NSObject <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _transactionClamps;
	double _accountIdentifierCheckTimestamp;
	double _authenticationNeededTimestamp;
	double _userAcceptedSyncTimestamp;
	double _networkingBlockedUntil;
	double _backOffUntil;
	double _userCancelledSignInBackOffUntil;
	double _nextUserCancelBackOffInterval;
	NSData* _pendingUserDefaultArchivedData;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (retain) NSDictionary * transactionClamps;                     //@synthesize transactionClamps=_transactionClamps - In the implementation block
@property (assign) double accountIdentifierCheckTimestamp;               //@synthesize accountIdentifierCheckTimestamp=_accountIdentifierCheckTimestamp - In the implementation block
@property (assign) double authenticationNeededTimestamp;                 //@synthesize authenticationNeededTimestamp=_authenticationNeededTimestamp - In the implementation block
@property (assign) double userAcceptedSyncTimestamp;                     //@synthesize userAcceptedSyncTimestamp=_userAcceptedSyncTimestamp - In the implementation block
@property (assign) double networkingBlockedUntil;                        //@synthesize networkingBlockedUntil=_networkingBlockedUntil - In the implementation block
@property (assign) double backOffUntil;                                  //@synthesize backOffUntil=_backOffUntil - In the implementation block
@property (assign) double userCancelledSignInBackOffUntil;               //@synthesize userCancelledSignInBackOffUntil=_userCancelledSignInBackOffUntil - In the implementation block
@property (assign) double nextUserCancelBackOffInterval;                 //@synthesize nextUserCancelBackOffInterval=_nextUserCancelBackOffInterval - In the implementation block
@property (retain) NSData * pendingUserDefaultArchivedData;              //@synthesize pendingUserDefaultArchivedData=_pendingUserDefaultArchivedData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sharedClampsController;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)reset;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)saveToUserDefaults;
-(void)accessTransactionClampsWithBlock:(/*^block*/id)arg1 ;
-(NSData *)pendingUserDefaultArchivedData;
-(void)setPendingUserDefaultArchivedData:(NSData *)arg1 ;
-(NSDictionary *)transactionClamps;
-(BOOL)_canScheduleTransactionBasedOfNetworkingBlocked:(id)arg1 error:(id*)arg2 ;
-(BOOL)_canScheduleTransactionBasedOnBackOff:(id)arg1 error:(id*)arg2 ;
-(BOOL)_canScheduleTransactionBasedOnUserCancelledSignIn:(id)arg1 error:(id*)arg2 ;
-(BOOL)_canScheduleTransactionBasedOnAccountIdentifierCheck:(id)arg1 error:(id*)arg2 ;
-(BOOL)_canScheduleTransactionBasedOnType:(id)arg1 error:(id*)arg2 ;
-(void)clearAccountIdentifierCheckTimestamp;
-(void)clearAuthenticationRequest;
-(void)clearBackOff;
-(void)clearNetworkingBlocked;
-(void)clearUserAcceptedSyncTimestamp;
-(void)clearUserCancelledSignIn;
-(id)_keyForTransaction:(id)arg1 ;
-(double)_rightNow;
-(void)setAccountIdentifierCheckTimestamp:(double)arg1 ;
-(void)setAuthenticationNeededTimestamp:(double)arg1 ;
-(double)authenticationNeededTimestamp;
-(void)setUserAcceptedSyncTimestamp:(double)arg1 ;
-(double)userAcceptedSyncTimestamp;
-(void)setUserCancelledSignInBackOffUntil:(double)arg1 ;
-(void)setBackOffUntil:(double)arg1 ;
-(void)setNetworkingBlockedUntil:(double)arg1 ;
-(double)networkingBlockedUntil;
-(void)clearTimestampForTransaction:(id)arg1 ;
-(BOOL)isNetworkingBlocked;
-(double)accountIdentifierCheckTimestamp;
-(double)backOffUntil;
-(double)userCancelledSignInBackOffUntil;
-(BOOL)canScheduleTransaction:(id)arg1 error:(id*)arg2 ;
-(void)setTimestampForTransaction:(id)arg1 ;
-(void)setAccountIdentifierCheckTimestamp;
-(void)setAuthenticationRequest;
-(BOOL)hasAuthenticatedTooRecentlyForTransaction:(id)arg1 error:(id*)arg2 ;
-(void)setUserAcceptedSyncTimestamp;
-(BOOL)hasUserRecentlyAcceptedSync;
-(void)setUserCancelledSignIn;
-(void)backOffForTimeInterval:(double)arg1 ;
-(void)setNetworkingBlocked;
-(void)setTransactionClamps:(NSDictionary *)arg1 ;
-(double)nextUserCancelBackOffInterval;
-(void)setNextUserCancelBackOffInterval:(double)arg1 ;
@end

