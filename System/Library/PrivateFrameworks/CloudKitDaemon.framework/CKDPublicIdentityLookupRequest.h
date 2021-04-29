/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDCacheBasedRequest.h>

@class NSArray, NSMutableArray, CKDDiscoverUserIdentitiesURLRequest;

@interface CKDPublicIdentityLookupRequest : CKDCacheBasedRequest {

	/*^block*/id _perLookupInfoProgressBlock;
	/*^block*/id _lookupCompletionBlock;
	NSArray* _originalLookupInfosToFetch;
	NSMutableArray* _lookupInfosToFetch;
	CKDDiscoverUserIdentitiesURLRequest* _request;

}

@property (nonatomic,retain) NSArray * originalLookupInfosToFetch;                       //@synthesize originalLookupInfosToFetch=_originalLookupInfosToFetch - In the implementation block
@property (nonatomic,retain) NSMutableArray * lookupInfosToFetch;                        //@synthesize lookupInfosToFetch=_lookupInfosToFetch - In the implementation block
@property (nonatomic,retain) CKDDiscoverUserIdentitiesURLRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id perLookupInfoProgressBlock;                                //@synthesize perLookupInfoProgressBlock=_perLookupInfoProgressBlock - In the implementation block
@property (nonatomic,copy) id lookupCompletionBlock;                                     //@synthesize lookupCompletionBlock=_lookupCompletionBlock - In the implementation block
+(void)removeCacheForLookupInfos:(id)arg1 inCache:(id)arg2 ;
-(id)description;
-(CKDDiscoverUserIdentitiesURLRequest *)request;
-(void)setRequest:(CKDDiscoverUserIdentitiesURLRequest *)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(id)CKPropertiesDescription;
-(id)ckShortDescription;
-(void)performRequest;
-(id)initWithOperation:(id)arg1 lookupInfos:(id)arg2 ;
-(void)setPerLookupInfoProgressBlock:(id)arg1 ;
-(void)setLookupCompletionBlock:(id)arg1 ;
-(void)_receivedUserIdentity:(id)arg1 forLookupInfo:(id)arg2 error:(id)arg3 ;
-(NSMutableArray *)lookupInfosToFetch;
-(BOOL)_tryComplete;
-(id)spawnURLRequests;
-(id)_generateOONPrivateKeyWithError:(id*)arg1 ;
-(void)_saveUserIdentity:(id)arg1 forLookupInfo:(id)arg2 ;
-(NSArray *)originalLookupInfosToFetch;
-(id)perLookupInfoProgressBlock;
-(id)lookupCompletionBlock;
-(void)setOriginalLookupInfosToFetch:(NSArray *)arg1 ;
-(void)setLookupInfosToFetch:(NSMutableArray *)arg1 ;
@end

