/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ACAccount, AMSProcessInfo, NSString;

@interface AMSMetricsIdentifierStore : NSObject {

	ACAccount* _account;
	AMSProcessInfo* _clientInfo;
	NSString* _domain;
	double _resetInterval;

}

@property (nonatomic,retain) ACAccount * account;                      //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;              //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,retain) NSString * domain;                        //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) double resetInterval;                     //@synthesize resetInterval=_resetInterval - In the implementation block
+(id)_database;
+(void)_sync;
+(id)_sharedQueue;
+(void)removeIdentifiersForAccount:(id)arg1 ;
+(void)cleanupIdentifiers;
+(id)_accountIdentifierForAccount:(id)arg1 ;
-(NSString *)domain;
-(void)setDomain:(NSString *)arg1 ;
-(void)reset;
-(AMSProcessInfo *)clientInfo;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(double)resetInterval;
-(void)setResetInterval:(double)arg1 ;
-(id)identifierForKey:(id)arg1 ;
-(id)_identifiersForKeys:(id)arg1 currentDate:(id)arg2 ;
-(id)_generateStoreKey;
-(id)_identifierStoreInfoForKeys:(id)arg1 inDatabase:(id)arg2 date:(id)arg3 needsToSync:(BOOL*)arg4 error:(id*)arg5 ;
-(id)_identifierInfoForKey:(id)arg1 storeInfo:(id)arg2 period:(long long)arg3 inDatabase:(id)arg4 date:(id)arg5 setValue:(id)arg6 needsToSync:(BOOL*)arg7 error:(id*)arg8 ;
-(id)_generateIdentifierKey:(id)arg1 storeInfo:(id)arg2 period:(long long)arg3 ;
-(void)_generateFutureIdentifiersIfNeededForKeys:(id)arg1 storeInfo:(id)arg2 afterPeriod:(long long)arg3 inDatabase:(id)arg4 date:(id)arg5 ;
-(id)generateEventFieldsForKeys:(id)arg1 ;
-(void)setIdentifier:(id)arg1 forKey:(id)arg2 ;
@end
