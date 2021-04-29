/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class NSLock, NSMutableSet, AMSBinaryPromise, NSError;

@interface AMSOperation : NSOperation {

	NSLock* _lock;
	NSMutableSet* _subOperations;
	BOOL _cancelled;
	BOOL _success;
	AMSOperation* _parentOperation;
	AMSBinaryPromise* _promise;
	NSError* _error;

}

@property (assign,nonatomic,__weak) AMSOperation * parentOperation;              //@synthesize parentOperation=_parentOperation - In the implementation block
@property (nonatomic,readonly) AMSBinaryPromise * promise;                       //@synthesize promise=_promise - In the implementation block
@property (assign,nonatomic) BOOL success;                                       //@synthesize success=_success - In the implementation block
@property (nonatomic,retain) NSError * error;                                    //@synthesize error=_error - In the implementation block
-(id)init;
-(void)run;
-(void)lock;
-(void)unlock;
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isCancelled;
-(void)main;
-(AMSBinaryPromise *)promise;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(AMSOperation *)parentOperation;
-(void)setParentOperation:(AMSOperation *)arg1 ;
-(void)runSubOperation:(id)arg1 onQueue:(id)arg2 ;
-(void)runSubOperation:(id)arg1 ;
@end

