/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKAsynchronousOperation.h>

@class NSArray, TVHKMediaServerIdentifier, TVHKMediaLibrarySessionState, TVHKMediaLibraryRequestSession, TVHKMediaEntitiesFetchCache, NSError, NSMutableArray, TVHKMediaEntitiesFetchOperation;

@interface TVHKMultipleMediaEntitiesFetchOperation : TVHKAsynchronousOperation {

	NSArray* _requests;
	TVHKMediaServerIdentifier* _mediaServerIdentifier;
	TVHKMediaLibrarySessionState* _sessionState;
	TVHKMediaLibraryRequestSession* _requestSession;
	TVHKMediaEntitiesFetchCache* _fetchCache;
	NSArray* _responses;
	NSError* _error;
	NSMutableArray* _mutableResponses;
	NSMutableArray* _remainingRequests;
	TVHKMediaEntitiesFetchOperation* _fetchOperation;

}

@property (nonatomic,copy) NSArray * requests;                                               //@synthesize requests=_requests - In the implementation block
@property (nonatomic,retain) TVHKMediaServerIdentifier * mediaServerIdentifier;              //@synthesize mediaServerIdentifier=_mediaServerIdentifier - In the implementation block
@property (nonatomic,retain) TVHKMediaLibrarySessionState * sessionState;                    //@synthesize sessionState=_sessionState - In the implementation block
@property (nonatomic,retain) TVHKMediaLibraryRequestSession * requestSession;                //@synthesize requestSession=_requestSession - In the implementation block
@property (nonatomic,retain) TVHKMediaEntitiesFetchCache * fetchCache;                       //@synthesize fetchCache=_fetchCache - In the implementation block
@property (nonatomic,retain) NSArray * responses;                                            //@synthesize responses=_responses - In the implementation block
@property (nonatomic,copy) NSError * error;                                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableResponses;                              //@synthesize mutableResponses=_mutableResponses - In the implementation block
@property (nonatomic,retain) NSMutableArray * remainingRequests;                             //@synthesize remainingRequests=_remainingRequests - In the implementation block
@property (nonatomic,retain) TVHKMediaEntitiesFetchOperation * fetchOperation;               //@synthesize fetchOperation=_fetchOperation - In the implementation block
+(id)new;
-(id)init;
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(NSArray *)requests;
-(void)setRequests:(NSArray *)arg1 ;
-(TVHKMediaLibrarySessionState *)sessionState;
-(void)setSessionState:(TVHKMediaLibrarySessionState *)arg1 ;
-(NSArray *)responses;
-(void)setResponses:(NSArray *)arg1 ;
-(void)executionDidBegin;
-(TVHKMediaEntitiesFetchCache *)fetchCache;
-(void)setFetchCache:(TVHKMediaEntitiesFetchCache *)arg1 ;
-(TVHKMediaEntitiesFetchOperation *)fetchOperation;
-(void)setFetchOperation:(TVHKMediaEntitiesFetchOperation *)arg1 ;
-(TVHKMediaServerIdentifier *)mediaServerIdentifier;
-(TVHKMediaLibraryRequestSession *)requestSession;
-(void)_runNextFetchOperationIfPossible;
-(NSMutableArray *)remainingRequests;
-(NSMutableArray *)mutableResponses;
-(void)setMutableResponses:(NSMutableArray *)arg1 ;
-(id)initWithRequests:(id)arg1 mediaServerIdentifier:(id)arg2 sessionState:(id)arg3 requestSession:(id)arg4 fetchCache:(id)arg5 ;
-(void)setMediaServerIdentifier:(TVHKMediaServerIdentifier *)arg1 ;
-(void)setRequestSession:(TVHKMediaLibraryRequestSession *)arg1 ;
-(void)setRemainingRequests:(NSMutableArray *)arg1 ;
@end

