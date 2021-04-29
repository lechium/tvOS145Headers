/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_queue_serial;
@class NSObject, NSString, TVHKMediaLibrary, NSOperationQueue, NSOperation, TVHKStateMachine, TVHKMediaLibraryRevision, NSDictionary;

@interface TVHKMediaLibraryQueryController : NSObject {

	long long _state;
	NSObject*<OS_dispatch_queue> _completionDispatchQueue;
	NSString* _logName;
	NSString* _identifier;
	TVHKMediaLibrary* _mediaLibrary;
	NSObject*<OS_dispatch_queue_serial> _serialAccessDispatchQueue;
	NSOperationQueue* _serialQueryOperationQueue;
	NSOperation* _queryOperation;
	TVHKStateMachine* _stateMachine;
	TVHKMediaLibraryRevision* _mediaLibraryRevision;
	TVHKMediaLibraryRevision* _queryMediaLibraryRevision;
	unsigned long long _disabledCount;
	NSDictionary* _queryUserInfo;
	/*^block*/id _queryCompletionHandler;
	NSObject*<OS_dispatch_queue_serial> _serialProcessingDispatchQueue;

}

@property (assign) long long state;                                                                            //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue_serial> serialAccessDispatchQueue;                  //@synthesize serialAccessDispatchQueue=_serialAccessDispatchQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * serialQueryOperationQueue;                                   //@synthesize serialQueryOperationQueue=_serialQueryOperationQueue - In the implementation block
@property (nonatomic,retain) NSOperation * queryOperation;                                                     //@synthesize queryOperation=_queryOperation - In the implementation block
@property (nonatomic,retain) TVHKStateMachine * stateMachine;                                                  //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,copy) TVHKMediaLibraryRevision * mediaLibraryRevision;                                    //@synthesize mediaLibraryRevision=_mediaLibraryRevision - In the implementation block
@property (nonatomic,copy) TVHKMediaLibraryRevision * queryMediaLibraryRevision;                               //@synthesize queryMediaLibraryRevision=_queryMediaLibraryRevision - In the implementation block
@property (assign,nonatomic) unsigned long long disabledCount;                                                 //@synthesize disabledCount=_disabledCount - In the implementation block
@property (nonatomic,copy) NSDictionary * queryUserInfo;                                                       //@synthesize queryUserInfo=_queryUserInfo - In the implementation block
@property (nonatomic,copy) id queryCompletionHandler;                                                          //@synthesize queryCompletionHandler=_queryCompletionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionDispatchQueue;                             //@synthesize completionDispatchQueue=_completionDispatchQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue_serial> serialProcessingDispatchQueue;              //@synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) TVHKMediaLibrary * mediaLibrary;                                                //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,copy) NSString * logName;                                                                 //@synthesize logName=_logName - In the implementation block
+(id)new;
+(BOOL)automaticallyNotifiesObserversOfState;
+(long long)_stateFromStateMachineState:(id)arg1 ;
-(id)description;
-(id)init;
-(NSString *)identifier;
-(void)cancel;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)disable;
-(TVHKStateMachine *)stateMachine;
-(void)setStateMachine:(TVHKStateMachine *)arg1 ;
-(void)enable;
-(void)_didCancel;
-(NSString *)logName;
-(void)setLogName:(NSString *)arg1 ;
-(TVHKMediaLibrary *)mediaLibrary;
-(void)_setupStateMachine;
-(void)_startQuery;
-(id)initWithMediaLibrary:(id)arg1 ;
-(void)_enqueueAsyncProcessingQueueBlock:(/*^block*/id)arg1 ;
-(void)setMediaLibraryRevision:(TVHKMediaLibraryRevision *)arg1 ;
-(TVHKMediaLibraryRevision *)mediaLibraryRevision;
-(NSObject*<OS_dispatch_queue_serial>)serialProcessingDispatchQueue;
-(void)_startQueryWithMediaLibraryRevision:(id)arg1 userInfoBlock:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue_serial>)serialAccessDispatchQueue;
-(void)_updateExternalStateIfRequired;
-(void)_registerConnectionStateMachineHandlers;
-(BOOL)_shouldQueryForMediaLibraryRevision:(id)arg1 ;
-(void)setQueryMediaLibraryRevision:(TVHKMediaLibraryRevision *)arg1 ;
-(void)setQueryCompletionHandler:(id)arg1 ;
-(void)setQueryUserInfo:(NSDictionary *)arg1 ;
-(void)_callQueryCompletionHandler:(/*^block*/id)arg1 status:(long long)arg2 result:(id)arg3 error:(id)arg4 ;
-(void)_cancelWithQueryStatus:(long long)arg1 ;
-(unsigned long long)disabledCount;
-(void)setDisabledCount:(unsigned long long)arg1 ;
-(void)_completeQuery;
-(void)setQueryOperation:(NSOperation *)arg1 ;
-(NSOperation *)queryOperation;
-(id)_didCompleteQueryOperation:(id)arg1 ;
-(id)queryCompletionHandler;
-(TVHKMediaLibraryRevision *)queryMediaLibraryRevision;
-(void)_resetQueryProperties;
-(NSObject*<OS_dispatch_queue>)completionDispatchQueue;
-(NSDictionary *)queryUserInfo;
-(id)_queryOperationForQueryReason:(long long)arg1 withUserInfo:(id)arg2 ;
-(void)_queryOperationCompleted:(id)arg1 ;
-(NSOperationQueue *)serialQueryOperationQueue;
-(void)setCompletionDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStandardLogNameWithSuffix:(id)arg1 ;
@end

